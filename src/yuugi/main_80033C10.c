#include "common.h"
#include "yuugi.h"

s16 func_80033C10(u16 a0) {
    struct Fila { u16 f0; u8 _p[0x132]; s16 f134; u8 _q[0x1190 - 0x136]; s16 f1190; };
    extern u8 D_800922F0[];
    extern s16 D_80078D3C;
    extern struct { u16 h; u16 _; u32 w; } D_80070594[];
    extern s32 func_80036DB0(), func_80034C10(), func_800373A0(), func_80034D78();
    struct { u8 c; u8 a; u16 s; u32 w4; u32 w8; u32 wC; } cmd;
    ((struct Fila *)D_800922F0)->f134 = 0;
    D_80078D3C = 0;
    cmd.c = 0x50;
    ((struct Fila *)D_800922F0)->f0 |= 2;
    func_80036DB0(&cmd);
    if (((struct Fila *)D_800922F0)->f0 & 0x80) {
        func_80034C10(-4);
    }
    func_800373A0();
    cmd.c = 0x52;
    cmd.wC = D_80070594[a0].w;
    cmd.s = D_80070594[a0].h;
    func_80036DB0(&cmd);
    ((struct Fila *)D_800922F0)->f134 = D_80070594[a0].h;
    if (((struct Fila *)D_800922F0)->f0 & 0x80) {
        func_80034D78(((struct Fila *)D_800922F0)->f1190);
    }
    return ((struct Fila *)D_800922F0)->f134;
}

void func_80033CEC(u16 *param_1, s32 param_2) {
    s32 i;
    s32 j;
    s32 k;
    u16 val;
    u16 *p;

    for (k = param_2 / 2; k > 0; k--) {
        i = k;
        val = param_1[i - 1];
        j = i * 2;
        while (j <= param_2) {
            if (j < param_2 && param_1[j - 1] < param_1[j]) {
                j++;
            }
            if (val >= param_1[j - 1]) {
                break;
            }
            param_1[i - 1] = param_1[j - 1];
            i = j;
            j = i * 2;
        }
        param_1[i - 1] = val;
    }

    if (param_2 > 1) {
        p = (u16 *)((param_2 * 2) + (u32)param_1);
        do {
            param_2--;
            i = 1;
            val = p[-1];
            j = 2;
            (p--)[-1] = param_1[0];
            if (param_2 > 1) {
                while (j <= param_2) {
                    if (j < param_2 && param_1[j - 1] < param_1[j]) {
                        j++;
                    }
                    if (val >= param_1[j - 1]) {
                        break;
                    }
                    param_1[i - 1] = param_1[j - 1];
                    i = j;
                    j = i * 2;
                }
            }
            param_1[i - 1] = val;
        } while (param_2 > 1);
    }
}

static inline s32 ContemSom(u16 *list, s32 j, s32 k) {
    struct Fila { u8 _p[0x134]; s16 f134; };
    extern u8 D_800922F0[];
    extern struct { u16 h; u16 _; u32 w; } D_80070594[];
    extern u16 D_80093510[];
    s32 found = 0;
    s32 m;
    s16 lim;
    u16 val;

    if (((struct Fila *)D_800922F0)->f134 > 0) {
        val = ((u16 *)D_80070594[list[j]].w)[k];
        lim = *(s16 *)(D_800922F0 + 0x134);
        m = 0;
        do {
            if (D_80093510[m] == val) {
                found = 1;
            }
            m++;
        } while (m < lim);
    }
    return found;
}

void func_80033E5C(u16 *list, s32 n) {
    struct Element16 { u8 _pad[0xC]; s32 fC; };
    struct Fila { u16 f0; u8 _p[0x132]; s16 f134; u8 _q[0xA]; struct Element16 *f140; };
    extern u8 D_800922F0[];
    extern s16 D_80078D3C;
    extern struct { u16 h; u16 _; u32 w; } D_80070594[];
    extern u16 D_80093510[];
    extern void func_80033CEC(u16 *, s32), func_80034C10(s32), func_8003727C(s32, s32), func_80036DB0(void *);
    struct { u8 c; u8 a; u16 s; u32 w4; u32 w8; u32 wC; } cmd;
    struct Fila *g;
    s32 i;
    s32 j;
    s32 k;
    s32 m;
    s32 found;
    s16 lim;
    u16 val;

    ((struct Fila *)D_800922F0)->f134 = 0;
    D_80078D3C = 0;
    for (i = 0; i < 0x99; i++) {
        ((struct Fila *)D_800922F0)->f140[i].fC = 0;
    }
    g = (struct Fila *)D_800922F0;
    g->f134 = 0;
    D_80078D3C = 0;
    for (j = 0; j < n; j++) {
        if (list[j] != 0xFFFF && D_80070594[list[j]].h != 0) {
            k = 0;
            do {
                found = 0;
                if (g->f134 > 0) {
                    val = ((u16 *)D_80070594[list[j]].w)[k];
                    lim = *(s16 *)(D_800922F0 + 0x134);
                    m = 0;
                    do {
                        if (D_80093510[m] == val) {
                            found = 1;
                        }
                        m++;
                    } while (m < lim);
                }
                if (!found) {
                    D_80093510[g->f134] = ((u16 *)D_80070594[list[j]].w)[k];
                    g->f134 += 1;
                }
                k++;
            } while (k < D_80070594[list[j]].h);
        }
    }
    func_80033CEC(D_80093510, ((struct Fila *)D_800922F0)->f134);
    if (*(u16 *)D_800922F0 & 0x80) {
        func_80034C10(-4);
    }
    if (*(u16 *)D_800922F0 & 0xF) {
        func_8003727C(-0x20, 0);
        cmd.c = 0x26;
        func_80036DB0(&cmd);
    }
    cmd.c = 0x50;
    *(u16 *)D_800922F0 |= 2;
    func_80036DB0(&cmd);
    cmd.c = 0x52;
    cmd.wC = (u32)D_80093510;
    cmd.s = ((struct Fila *)D_800922F0)->f134;
    func_80036DB0(&cmd);
    cmd.c = 0x11;
    func_80036DB0(&cmd);
}

s16 func_800340B4(s32 a0) {
    struct Voz { u8 _p[0x125]; u8 f125; u8 f126; u8 _q[5]; u16 f12c[4]; };
    extern u8 D_800922F0[];
    s32 v;
    s16 n;
    s32 i;
    u32 idx;
    u32 bit;
    v = a0;
    a0 &= 0x8000;
    if (a0) {
        a0 = v;
    } else {
        a0 = 0xFFFF;
    }
    n = 0;
    a0 &= 0xFFFF;
    idx = ((struct Voz *)D_800922F0)->f126;
    bit = 1 << idx;
    for (i = 3; i >= 0; i--) {
        if ((((struct Voz *)D_800922F0)->f125 & bit) && ((struct Voz *)D_800922F0)->f12c[(u8)idx] == a0) {
            n++;
        }
        bit <<= 1;
        if (bit & 0x10) {
            bit = 1;
        }
        idx++;
        idx &= 3;
    }
    return n;
}

void func_80034148(s32 a0) {
    struct Voz { u8 _p[0x125]; u8 f125; u8 f126; u8 _q[5]; u16 f12c[4]; };
    extern u8 D_800922F0[];
    extern void SpuSetKey();
    s32 v;
    s32 i;
    u32 idx;
    u32 bit;
    u32 t;
    v = a0;
    a0 &= 0x8000;
    if (a0) {
        a0 = v;
        goto start;
    found:
        SpuSetKey(0, 1 << (t + 0x14));
        ((struct Voz *)D_800922F0)->f126 = idx;
        ((struct Voz *)D_800922F0)->f125 &= ~bit;
        return;
    } else {
        a0 = 0xFFFF;
    }
start:
    i = 0;
    a0 &= 0xFFFF;
    idx = ((struct Voz *)D_800922F0)->f126;
    bit = 1 << idx;
    for (; i < 4; i++) {
        if (((struct Voz *)D_800922F0)->f125 & bit) {
            t = (u8)idx;
            if (((struct Voz *)D_800922F0)->f12c[t] == a0) {
                goto found;
            }
        }
        bit <<= 1;
        if (bit & 0x10) {
            bit = 1;
        }
        idx++;
        idx &= 3;
    }
}

void func_8003422C(s32 a0) {
    struct Voz { u8 _p[0x125]; u8 f125; u8 f126; u8 _q[5]; u16 f12c[4]; };
    extern u8 D_800922F0[];
    extern void SpuSetKey(), func_800373A0();
    s32 v;
    s32 i;
    u32 keys;
    u32 bit;

    v = a0;
    a0 &= 0x8000;
    if (a0) {
        func_800373A0();
    } else {
        bit = 1;
        keys = 0;
        i = 0;
        a0 = v & 0xFFFF;
        for (; i < 4; i++) {
            if (((struct Voz *)D_800922F0)->f12c[i] == a0) {
                keys |= 1 << (i + 0x14);
                ((struct Voz *)D_800922F0)->f125 &= ~bit;
            }
            bit <<= 1;
        }
        if (keys != 0) {
            SpuSetKey(0, keys);
        }
    }
}

#include "ghidra.h"
void func_800342CC(void)

{
  undefined1 auStack_18 [16];
  
  auStack_18[0] = 0x50;
  func_80036DB0(auStack_18);
  return;
}

u32 func_800342F4(u8 a0) {
    struct V2 { u8 _p[0x12c]; u16 f12c[4]; u8 _r[12]; u8 *_q; };
    extern u8 D_800922F0[];
    extern void SpuGetVoiceEnvelope(), SpuSetKey();
    s16 env[4];
    u32 mask = 0;
    u32 bit = 1;
    s32 i;
    for (i = 0; i < 4; i++) {
        SpuGetVoiceEnvelope(i + 0x14, env);
        if ((((struct V2 *)D_800922F0)->_q[((struct V2 *)D_800922F0)->f12c[i] * 16 + 3] & 0xF) == a0 && env[0] != 0) {
            mask |= bit;
        }
        bit <<= 1;
    }
    if (mask != 0) {
        SpuSetKey(0, mask << 20);
    }
    return mask;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10", func_800343C4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10", func_80034714);

void func_80034AB0(s32 arg0) {
    func_80034714(arg0 & 0xFFFF, 0);
}

#include "common.h"

void func_80034AD4(void) {
    extern s16 D_80078D3C;
    extern u8 D_80078D4E;
    extern M2C_UNK D_800934D0[];
    SpuSetTransferCallback(0);
    D_80078D4E += 1;
    SpuSetKeyOnWithAttr(D_800934D0);
    D_80078D3C = 0;
}

#include "common.h"

void func_80034B14(void) {
    extern M2C_UNK D_800922F0[];
    s32 temp_v0;

    M2C_GFIELD(D_800922F0, s16, 0x1194) = 0;
    M2C_GFIELD(D_800922F0, s16, 0x1196) = 0;
    M2C_GFIELD(D_800922F0, s16, 0x118C) = -1;
    M2C_GFIELD(D_800922F0, s16, 0x118E) = -1;
    M2C_GFIELD(D_800922F0, s16, 0x1190) = -1;
    M2C_GFIELD(D_800922F0, s16, 0x1192) = -1;
    func_8003C844(0x1000);
    temp_v0 = M2C_GFIELD(D_800922F0, s32, 0xC) + 0x17C;
    M2C_GFIELD(D_800922F0, s32, 0x119C) = temp_v0;
    M2C_GFIELD(D_800922F0, s32, 0x1198) = temp_v0;
    func_8003C894(0x14);
    func_8003C808();
}

void func_80034B80(void) {
    func_8003C850();
}
