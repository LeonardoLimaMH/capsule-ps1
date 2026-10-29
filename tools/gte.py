"""Emulação do GTE (coprocessador 2 do PS1) para o teste diferencial.

Implementação própria a partir da especificação do psx-spx
(https://psx-spx.consoledev.net/geometrytransformationenginegte/); ver docs/gte.md.

Cobre os movimentos de registradores (mfc2/mtc2/cfc2/ctc2/lwc2/swc2) e todos os
comandos documentados: RTPS, RTPT, NCLIP, AVSZ3, AVSZ4, MVMVA, NCS, NCT, NCCS, NCCT,
NCDS, NCDT, CC, CDP, DCPL, DPCS, DPCT, INTPL, SQR, OP, GPF e GPL. Um código de comando
fora da lista levanta GTEUnsupported (tentativa "não suportada"). Conferido contra o
GTE do psxe por tools/gte_oracle.py.

Registradores: d[0..31] (dados) e c[0..31] (controle), sempre como u32.
"""


class GTEUnsupported(Exception):
    pass


def s16(v):
    v &= 0xFFFF
    return v - 0x10000 if v & 0x8000 else v


def s32(v):
    v &= 0xFFFFFFFF
    return v - 0x100000000 if v & 0x80000000 else v


def sext(v, bits):
    m = 1 << bits
    v &= m - 1
    return v - m if v & (m >> 1) else v


# tabela da divisão UNR (psx-spx: unr_table[i] = max(0, (40000h/(i+100h)+1)/2 - 101h), 101h entradas)
UNR = [max(0, (0x40000 // (i + 0x100) + 1) // 2 - 0x101) for i in range(0x101)]

# bits do FLAG
F_MAC_POS = (30, 29, 28)
F_MAC_NEG = (27, 26, 25)
F_IR = (24, 23, 22)
F_SZ_OTZ = 18
F_DIV = 17
F_MAC0_POS = 16
F_MAC0_NEG = 15
F_SX = 14
F_SY = 13
F_IR0 = 12

MAC123_MIN, MAC123_MAX = -(1 << 43), (1 << 43) - 1
MAC0_MIN, MAC0_MAX = -(1 << 31), (1 << 31) - 1


def leading_bits(v):
    """LZCR: quantos bits iguais ao bit 31 no início (1..32)."""
    v &= 0xFFFFFFFF
    if v & 0x80000000:
        v = ~v & 0xFFFFFFFF
    n = 0
    for b in range(31, -1, -1):
        if v & (1 << b):
            break
        n += 1
    return n


class GTE:
    def __init__(self):
        self.d = [0] * 32
        self.c = [0] * 32
        self.flag = 0

    # ---------------------------------------------------------------- registradores
    def read_data(self, i):
        if i == 15:
            return self.d[14]
        if i in (28, 29):
            def c5(v):
                return min(max(s32(v) >> 7, 0), 0x1F)
            return c5(self.d[9]) | (c5(self.d[10]) << 5) | (c5(self.d[11]) << 10)
        return self.d[i] & 0xFFFFFFFF

    def write_data(self, i, v):
        v &= 0xFFFFFFFF
        if i in (1, 3, 5, 8, 9, 10, 11):
            self.d[i] = s16(v) & 0xFFFFFFFF
        elif i in (7, 16, 17, 18, 19):
            self.d[i] = v & 0xFFFF
        elif i == 15:
            self.d[12], self.d[13], self.d[14] = self.d[13], self.d[14], v
        elif i == 28:
            self.d[28] = v & 0x7FFF
            self.d[9] = ((v & 0x1F) * 0x80) & 0xFFFFFFFF
            self.d[10] = (((v >> 5) & 0x1F) * 0x80) & 0xFFFFFFFF
            self.d[11] = (((v >> 10) & 0x1F) * 0x80) & 0xFFFFFFFF
        elif i == 30:
            self.d[30] = v
            self.d[31] = leading_bits(v)
        elif i in (29, 31):
            pass  # somente leitura
        else:
            self.d[i] = v

    def read_ctrl(self, i):
        if i == 31:
            return self.flag_value()
        return self.c[i] & 0xFFFFFFFF

    def write_ctrl(self, i, v):
        v &= 0xFFFFFFFF
        if i in (4, 12, 20, 26, 27, 29, 30):
            self.c[i] = s16(v) & 0xFFFFFFFF  # H (26) estende o sinal na leitura, mas é usado sem sinal
        elif i == 31:
            self.flag = v & 0x7FFFF000
        else:
            self.c[i] = v

    def flag_value(self):
        f = self.flag & 0x7FFFF000
        if f & 0x7F87E000:
            f |= 0x80000000
        return f

    # ---------------------------------------------------------------- campos
    def V(self, n):
        xy = self.d[n * 2]
        return (s16(xy), s16(xy >> 16), s16(self.d[n * 2 + 1]))

    def IR(self):
        return (s32(self.d[9]), s32(self.d[10]), s32(self.d[11]))

    def matrix(self, base):
        """matriz 3x3 de s16 empacotada em 5 registradores a partir de base."""
        r = [self.c[base + k] for k in range(5)]
        e = [s16(r[0]), s16(r[0] >> 16), s16(r[1]), s16(r[1] >> 16), s16(r[2]), s16(r[2] >> 16),
             s16(r[3]), s16(r[3] >> 16), s16(r[4])]
        return [e[0:3], e[3:6], e[6:9]]

    def vec3(self, base):
        return (s32(self.c[base]), s32(self.c[base + 1]), s32(self.c[base + 2]))

    def setf(self, bit):
        self.flag |= 1 << bit

    # ---------------------------------------------------------------- aritmética com flags
    def mac_check(self, k, v):
        """k = 1..3: confere o limite de 44 bits; k = 0: 32 bits."""
        if k == 0:
            if v > MAC0_MAX:
                self.setf(F_MAC0_POS)
            elif v < MAC0_MIN:
                self.setf(F_MAC0_NEG)
        else:
            if v > MAC123_MAX:
                self.setf(F_MAC_POS[k - 1])
            elif v < MAC123_MIN:
                self.setf(F_MAC_NEG[k - 1])

    def mac_ext(self, k, v):
        """soma parcial: marca o estouro e volta a 44 bits (31 para MAC0)."""
        lo, hi = (MAC0_MIN, MAC0_MAX) if k == 0 else (MAC123_MIN, MAC123_MAX)
        if v < lo or v > hi:
            self.mac_check(k, v)
            v = sext(v, 31 if k == 0 else 44)
        return v

    def set_mac(self, k, v, shift):
        self.mac_check(k, v)
        self.d[24 + k] = (v >> shift) & 0xFFFFFFFF

    def set_ir(self, k, v, lm):
        lo = 0 if lm else -0x8000
        if k == 0:
            lo, hi = 0, 0x1000
        else:
            hi = 0x7FFF
        if v < lo:
            v = lo
            self.setf(F_IR0 if k == 0 else F_IR[k - 1])
        elif v > hi:
            v = hi
            self.setf(F_IR0 if k == 0 else F_IR[k - 1])
        self.d[8 + k] = v & 0xFFFFFFFF

    def set_mac_ir(self, k, v, shift, lm):
        self.mac_check(k, v)
        v >>= shift
        self.d[24 + k] = v & 0xFFFFFFFF
        self.set_ir(k, s32(v), lm)

    def push_sz(self, v):
        if v < 0:
            v = 0
            self.setf(F_SZ_OTZ)
        elif v > 0xFFFF:
            v = 0xFFFF
            self.setf(F_SZ_OTZ)
        self.d[16], self.d[17], self.d[18], self.d[19] = self.d[17], self.d[18], self.d[19], v

    def push_sxy(self, x, y):
        if x < -0x400:
            x = -0x400
            self.setf(F_SX)
        elif x > 0x3FF:
            x = 0x3FF
            self.setf(F_SX)
        if y < -0x400:
            y = -0x400
            self.setf(F_SY)
        elif y > 0x3FF:
            y = 0x3FF
            self.setf(F_SY)
        self.d[12], self.d[13] = self.d[13], self.d[14]
        self.d[14] = (x & 0xFFFF) | ((y & 0xFFFF) << 16)

    def unr_divide(self, h, sz3):
        """divisão de Newton-Raphson do hardware (psx-spx)."""
        if not (h < sz3 * 2):
            self.setf(F_DIV)
            return 0x1FFFF
        z = 16 - sz3.bit_length() if sz3 else 16
        n = h << z
        d = sz3 << z
        u = UNR[(d - 0x7FC0) >> 7] + 0x101
        d = (0x2000080 - d * u) >> 8
        d = (0x0000080 + d * u) >> 8
        return min(0x1FFFF, (n * d + 0x8000) >> 16)

    # ---------------------------------------------------------------- comandos
    def rtps(self, v, shift, lm, last):
        rt = self.matrix(0)
        tr = self.vec3(5)
        r = []
        for k in range(3):
            acc = self.mac_ext(k + 1, (tr[k] << 12) + rt[k][0] * v[0])
            acc = self.mac_ext(k + 1, acc + rt[k][1] * v[1])
            r.append(acc + rt[k][2] * v[2])
        x, y, z = r
        self.set_mac(1, x, shift)
        self.set_mac(2, y, shift)
        self.set_mac(3, z, shift)
        self.set_ir(1, s32(self.d[25]), lm)
        self.set_ir(2, s32(self.d[26]), lm)
        # IR3: a flag é conferida com MAC3 SAR 12 (como se lm=0); o valor guardado usa MAC3 e lm
        self.set_ir(3, s32((z >> 12) & 0xFFFFFFFF), False)
        mac3 = s32(self.d[27])
        self.d[11] = min(max(mac3, 0 if lm else -0x8000), 0x7FFF) & 0xFFFFFFFF
        self.push_sz(s32((z >> 12) & 0xFFFFFFFF))
        n = self.unr_divide(self.c[26] & 0xFFFF, self.d[19])
        sx = n * s32(self.d[9]) + s32(self.c[24])
        sy = n * s32(self.d[10]) + s32(self.c[25])
        self.mac_check(0, sx)
        self.mac_check(0, sy)
        self.push_sxy(s32((sx >> 16) & 0xFFFFFFFF), s32((sy >> 16) & 0xFFFFFFFF))
        if last:
            sz = n * s16(self.c[27]) + s32(self.c[28])
            self.set_mac(0, sz, 0)
            self.set_ir(0, s32((sz >> 12) & 0xFFFFFFFF), True)

    def mvmva(self, sf, mx, vi, cv, lm):
        shift = 12 if sf else 0
        if mx == 3:  # matriz "lixo"
            rr = self.d[6] & 0xFF
            rt = self.matrix(0)
            m = [[-(rr << 4), rr << 4, s32(self.d[8])], [rt[0][2]] * 3, [rt[1][1]] * 3]
        else:
            m = self.matrix((0, 8, 16)[mx])
        v = self.IR() if vi == 3 else self.V(vi)
        v = tuple(s16(x) for x in v)
        if cv == 3:
            for k in range(3):
                acc = self.mac_ext(k + 1, m[k][0] * v[0] + m[k][1] * v[1])
                self.set_mac_ir(k + 1, acc + m[k][2] * v[2], shift, lm)
            return
        t = self.vec3((5, 13, 21)[cv])
        for k in range(3):
            if cv == 2:
                # bug do FC: o termo (T*1000h + M1*Vx) só afeta flags/IR; o resultado usa os outros dois
                acc = self.mac_ext(k + 1, (t[k] << 12) + m[k][0] * v[0])
                acc = self.mac_ext(k + 1, acc)
                self.set_ir(k + 1, s32((acc >> shift) & 0xFFFFFFFF), False)
                acc = self.mac_ext(k + 1, m[k][1] * v[1])
                self.set_mac_ir(k + 1, acc + m[k][2] * v[2], shift, lm)
            else:
                acc = self.mac_ext(k + 1, (t[k] << 12) + m[k][0] * v[0])
                acc = self.mac_ext(k + 1, acc + m[k][1] * v[1])
                self.set_mac_ir(k + 1, acc + m[k][2] * v[2], shift, lm)

    # ---------------------------------------------------------------- cor e luz
    def mulmat(self, m, v, t, shift, lm):
        """MAC/IR = (T*1000h + M*V) SAR shift; sem translação quando t é None."""
        for k in range(3):
            if t is None:
                acc = self.mac_ext(k + 1, m[k][0] * v[0] + m[k][1] * v[1])
            else:
                acc = self.mac_ext(k + 1, (t[k] << 12) + m[k][0] * v[0])
                acc = self.mac_ext(k + 1, acc + m[k][1] * v[1])
            self.set_mac_ir(k + 1, acc + m[k][2] * v[2], shift, lm)

    def push_rgb(self):
        """fila de cores: [MAC1..3 / 16 saturados em 0..FFh, CODE de RGBC]."""
        out = 0
        for k in range(3):
            c = s32(self.d[25 + k]) >> 4
            if c < 0:
                c = 0
                self.setf(21 - k)
            elif c > 0xFF:
                c = 0xFF
                self.setf(21 - k)
            out |= c << (8 * k)
        out |= self.d[6] & 0xFF000000
        self.d[20], self.d[21], self.d[22] = self.d[21], self.d[22], out

    def interpolate(self, mac, shift, lm):
        """[MAC] = MAC + (FC - MAC) * IR0, com IR intermediário saturado como se lm = 0
        (não empurra a fila de cores)."""
        fc = self.vec3(21)
        for k in range(3):
            self.set_mac_ir(k + 1, (fc[k] << 12) - mac[k], shift, False)
        ir0 = s32(self.d[8])
        ir = self.IR()
        for k in range(3):
            self.set_mac_ir(k + 1, ir[k] * ir0 + mac[k], shift, lm)

    def rgbc(self):
        return [(self.d[6] >> (8 * k)) & 0xFF for k in range(3)]

    def light(self, v, shift, lm):
        """etapa comum dos comandos NC*: luz (LLM * V) e cor da luz (BK + LCM * IR)."""
        self.mulmat(self.matrix(8), v, None, shift, lm)
        self.mulmat(self.matrix(16), self.IR(), self.vec3(13), shift, lm)

    def color_by_rgbc(self, shift, lm):
        """[MAC] = [R*IR1, G*IR2, B*IR3] SHL 4 (antes do deslocamento)."""
        ir = self.IR()
        return [(c * i) << 4 for c, i in zip(self.rgbc(), ir)]

    def command(self, word):
        op = word & 0x3F
        sf = (word >> 19) & 1
        shift = 12 if sf else 0
        lm = bool((word >> 10) & 1)
        self.flag = 0
        if op == 0x01:  # RTPS
            self.rtps(self.V(0), shift, lm, True)
        elif op == 0x30:  # RTPT
            for n in range(3):
                self.rtps(self.V(n), shift, lm, n == 2)
        elif op == 0x06:  # NCLIP
            sx = [s16(self.d[12 + k]) for k in range(3)]
            sy = [s16(self.d[12 + k] >> 16) for k in range(3)]
            v = (sx[0] * sy[1] + sx[1] * sy[2] + sx[2] * sy[0]
                 - sx[0] * sy[2] - sx[1] * sy[0] - sx[2] * sy[1])
            self.set_mac(0, v, 0)
        elif op in (0x2D, 0x2E):  # AVSZ3 / AVSZ4
            if op == 0x2D:
                v = s16(self.c[29]) * (self.d[17] + self.d[18] + self.d[19])
            else:
                v = s16(self.c[30]) * (self.d[16] + self.d[17] + self.d[18] + self.d[19])
            self.set_mac(0, v, 0)
            otz = v >> 12
            if otz < 0:
                otz = 0
                self.setf(F_SZ_OTZ)
            elif otz > 0xFFFF:
                otz = 0xFFFF
                self.setf(F_SZ_OTZ)
            self.d[7] = otz
        elif op == 0x12:  # MVMVA
            self.mvmva(sf, (word >> 17) & 3, (word >> 15) & 3, (word >> 13) & 3, lm)
        elif op in (0x1E, 0x20, 0x1B, 0x3F, 0x13, 0x16):  # NCS/NCT, NCCS/NCCT, NCDS/NCDT
            for n in (range(3) if op in (0x20, 0x3F, 0x16) else (0,)):
                self.light(self.V(n), shift, lm)
                if op in (0x1B, 0x3F):
                    for k, mac in enumerate(self.color_by_rgbc(shift, lm)):
                        self.set_mac_ir(k + 1, mac, shift, lm)
                elif op in (0x13, 0x16):
                    self.interpolate(self.color_by_rgbc(shift, lm), shift, lm)
                self.push_rgb()
        elif op in (0x1C, 0x14):  # CC / CDP
            self.mulmat(self.matrix(16), self.IR(), self.vec3(13), shift, lm)
            if op == 0x1C:
                for k, mac in enumerate(self.color_by_rgbc(shift, lm)):
                    self.set_mac_ir(k + 1, mac, shift, lm)
            else:
                self.interpolate(self.color_by_rgbc(shift, lm), shift, lm)
            self.push_rgb()
        elif op == 0x29:  # DCPL
            self.interpolate(self.color_by_rgbc(shift, lm), shift, lm)
            self.push_rgb()
        elif op in (0x10, 0x2A):  # DPCS / DPCT (DPCT: três vezes sobre RGB0, que anda na fila)
            for _ in range(3 if op == 0x2A else 1):
                src = self.d[6] if op == 0x10 else self.d[20]
                for k in range(3):
                    self.set_mac(k + 1, ((src >> (8 * k)) & 0xFF) << 16, 0)
                self.interpolate([s32(self.d[25 + k]) for k in range(3)], shift, lm)
                self.push_rgb()
        elif op == 0x11:  # INTPL
            self.interpolate([i << 12 for i in self.IR()], shift, lm)
            self.push_rgb()
        elif op == 0x28:  # SQR
            for k, i in enumerate(self.IR()):
                self.d[25 + k] = ((i * i) >> shift) & 0xFFFFFFFF
                self.set_ir(k + 1, s32(self.d[25 + k]), lm)
        elif op == 0x0C:  # OP (produto vetorial com a diagonal de RT)
            rt = self.matrix(0)
            d1, d2, d3 = rt[0][0], rt[1][1], rt[2][2]
            i1, i2, i3 = self.IR()
            for k, v in enumerate((i3 * d2 - i2 * d3, i1 * d3 - i3 * d1, i2 * d1 - i1 * d2)):
                self.set_mac_ir(k + 1, v, shift, lm)
        elif op in (0x3D, 0x3E):  # GPF / GPL
            ir0 = s32(self.d[8])
            for k, i in enumerate(self.IR()):
                v = i * ir0 + ((s32(self.d[25 + k]) << shift) if op == 0x3E else 0)
                self.set_mac_ir(k + 1, v, shift, lm)
            self.push_rgb()
        else:
            raise GTEUnsupported(f"comando GTE {op:#04x} ({word:#010x})")

    # ---------------------------------------------------------------- instruções
    def is_gte(word):
        op = word >> 26
        return op == 0x12 or op == 0x32 or op == 0x3A

    is_gte = staticmethod(is_gte)

    def execute(self, word, gpr_read, gpr_write, mem_read32, mem_write32):
        """executa uma instrução COP2/LWC2/SWC2."""
        op = word >> 26
        rt = (word >> 16) & 0x1F
        if op == 0x32 or op == 0x3A:  # lwc2 / swc2
            base = (word >> 21) & 0x1F
            addr = (gpr_read(base) + s16(word)) & 0xFFFFFFFF
            if op == 0x32:
                self.write_data(rt, mem_read32(addr))
            else:
                mem_write32(addr, self.read_data(rt))
            return
        if word & (1 << 25):
            self.command(word)
            return
        fmt = (word >> 21) & 0x1F
        rd = (word >> 11) & 0x1F
        if fmt == 0:  # mfc2
            gpr_write(rt, self.read_data(rd))
        elif fmt == 2:  # cfc2
            gpr_write(rt, self.read_ctrl(rd))
        elif fmt == 4:  # mtc2
            self.write_data(rd, gpr_read(rt))
        elif fmt == 6:  # ctc2
            self.write_ctrl(rd, gpr_read(rt))
        else:
            raise GTEUnsupported(f"instrução COP2 {word:#010x}")

    def randomize(self, rng):
        """estado inicial sorteado (igual nos dois lados da comparação)."""
        for i in range(32):
            self.write_ctrl(i, rng.getrandbits(32) if rng.random() < 0.5 else rng.randrange(-0x2000, 0x2000) & 0xFFFFFFFF)
        self.write_ctrl(26, rng.randrange(0, 0x400))      # H pequeno (distância de projeção)
        self.write_ctrl(31, 0)
        for i in range(32):
            self.write_data(i, rng.getrandbits(32) if rng.random() < 0.5 else rng.randrange(-0x1000, 0x1000) & 0xFFFFFFFF)
        self.flag = 0

    def state(self):
        return tuple(self.read_data(i) for i in range(32)) + tuple(self.read_ctrl(i) for i in range(32))


def branch_outcome(word, pc, gpr_read):
    """desvio do MIPS I em pc: (próximo pc, registrador de link ou None); None se não é desvio.
    Usado quando a instrução GTE está no delay slot: o desvio é decidido aqui, com os
    registradores lidos antes do delay slot, como no hardware."""
    op = word >> 26
    rs = (word >> 21) & 0x1F
    rt = (word >> 16) & 0x1F
    fall = (pc + 8) & 0xFFFFFFFF
    target = (pc + 4 + (s16(word) << 2)) & 0xFFFFFFFF
    if op == 0:
        funct = word & 0x3F
        if funct == 8:
            return gpr_read(rs) & 0xFFFFFFFF, None
        if funct == 9:
            return gpr_read(rs) & 0xFFFFFFFF, (word >> 11) & 0x1F
        return None
    if op == 1:
        v = s32(gpr_read(rs))
        if rt in (0x00, 0x10):
            nxt = target if v < 0 else fall
        elif rt in (0x01, 0x11):
            nxt = target if v >= 0 else fall
        else:
            return None
        return nxt, (31 if rt & 0x10 else None)
    if op in (2, 3):
        return (((pc + 4) & 0xF0000000) | ((word & 0x3FFFFFF) << 2)), (31 if op == 3 else None)
    a, b = s32(gpr_read(rs)), s32(gpr_read(rt))
    if op == 4:
        return (target if a == b else fall), None
    if op == 5:
        return (target if a != b else fall), None
    if op == 6:
        return (target if a <= 0 else fall), None
    if op == 7:
        return (target if a > 0 else fall), None
    return None
