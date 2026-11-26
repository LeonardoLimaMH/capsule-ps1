#include "ghidra.h"
#include "matching.h"
#include "common.h"

extern u8 D_8006B2A4[];
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);
extern s32 rsin(s32);

void func_800ACF04(u8 *arg0) {
    extern u8 *func_80015B3C();
    extern s32 func_80019F30();
    extern void func_800ACD58();
    extern void func_800161C4();
    u32 i = arg0[0xBCA];
    u8 *o = func_80015B3C(func_800ACD58, func_800161C4, 5);
    u8 *q;
    s32 r;
    func_80015EF8(o);
    q = arg0 + i;
    if (q[0x5E0] == 0) {
        r = func_80019F30(0x60013, i + 6);
    } else {
        r = func_80019F30(0x60013, 0xB);
    }
    *(s32 *) (o + 0x18) = r;
    *(s16 *) (o + 0x50) = 0x1000;
    *(s16 *) (o + 0x4E) = 2;
    *(u32 *) (o + 0x7C) = i;
}

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

s32 func_800ACFA8(u8 *arg0) {
    u8 temp_s1 = arg0[0x5D0];
    s32 temp_v0;
    u16 var_v1;

    if (temp_s1 != 1) {
        return 0;
    }
    if (arg0[1] != 0) {
        return 0;
    }
    temp_v0 = func_800CB24C(arg0, arg0 + 0x5D0, 1);
    if (arg0[0xBED] == temp_v0) {
        return 0;
    }
    if (temp_v0 == temp_s1) {
        var_v1 = 0x7014;
    } else if (temp_v0 == 2) {
        var_v1 = 0x7013;
        if (arg0[0x5E1] != 0) {
            var_v1 = 0x7012;
        }
    } else {
        var_v1 = 0x7012;
        if (arg0[0x5E1] != 0) {
            var_v1 = 0x7013;
        }
    }
    *(u16 *)(arg0 + 8) = var_v1;
    func_80034BD8(-3, 0);
    return 1;
}

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

void func_800AD06C(u8 *arg0) {
    extern u16 D_8008EE50[];
    extern void func_800161C4();
    extern void func_800ACD58();
    extern u8 *func_80015B3C();
    extern s32 func_80019F30();
    s32 temp_v0;
    register s32 var_v0 asm("v0");
    u16 var_v1;
    u8 temp_s0;
    u32 temp_s1;
    u8 *o;
    s32 r;
    u8 *q;

    switch (*D_8008EE50) {
    case 0:
        temp_s0 = arg0[0x5D0];
        if (temp_s0 == 1) {
            if (arg0[1] == 0) {
                temp_v0 = func_800CB24C(arg0, arg0 + 0x5D0, 1);
                if (arg0[0xBED] != temp_v0) {
                    if (temp_v0 == temp_s0) {
                        var_v1 = 0x7014;
                    } else if (temp_v0 == 2) {
                        var_v1 = 0x7013;
                        if (arg0[0x5E1] != 0) var_v1 = 0x7012;
                    } else {
                        var_v1 = 0x7012;
                        if (arg0[0x5E1] != 0) var_v1 = 0x7013;
                    }
                    *(u16 *)(arg0 + 8) = var_v1;
                    func_80034BD8(-3, 0);
                    var_v0 = 1;
                } else {
                    var_v0 = 0;
                }
            } else {
                var_v0 = 0;
            }
        } else {
            var_v0 = 0;
        }
        if (var_v0 != 0) {
            func_80012628();
            return;
        }
        func_8001264C(2);
        return;
    case 1:
        if (func_80019654() != 0) {
            func_800338DC(*(u16 *)(arg0 + 8));
            func_80012628();
            return;
        }
        return;
    case 2:
        temp_s1 = arg0[0xBCA];
        o = func_80015B3C(func_800ACD58, func_800161C4, 5);
        func_80015EF8(o);
        q = arg0 + temp_s1;
        if (q[0x5E0] == 0) {
            r = func_80019F30(0x60013, temp_s1 + 6);
        } else {
            r = func_80019F30(0x60013, 0xB);
        }
        *(s32 *)(o + 0x18) = r;
        *(s16 *)(o + 0x50) = 0x1000;
        *(s16 *)(o + 0x4E) = 2;
        *(u32 *)(o + 0x7C) = temp_s1;
        arg0[0xD77] = 0;
        func_800125D8();
        break;
    }
}

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

void func_800AD240(u8 *arg0) {
    extern u8 D_8008ED68[];
    extern u32 D_801187D4[];
    extern u16 D_80069C1E[];
    u8 *s2 = D_8008ED68;
    u8 *s1 = arg0 + 0x5D0;
    s32 s0 = *(u8 *)(s1 + 0x5FA);
    s32 i;
    s32 max;

    switch (*(u16 *)(s2 + 0xE8)) {
    case 0: {
        u8 *p1;
        u8 *p2;
        max = 0;
        i = max;
        p1 = (u8 *)(s0 * 2 + (u32)s1 + 0x601);
        p2 = (u8 *)((1 - s0) * 2 + (u32)s1 + 0x601);

        for (; i < 2; i++) {
            s32 d = p1[i] - p2[i];
            s32 ad = (d >= 0) ? d : -d;
            if (max < ad) {
                max = ad;
            }
        }
        if (max >= 9) {
            D_801187D4[0] = 0x32;
        } else if (max >= 5) {
            D_801187D4[0] = 0x19;
        } else if (max >= 3) {
            D_801187D4[0] = 0x14;
        } else {
            D_801187D4[0] = 10;
        }
        if (s2[0x103] != 0) {
            D_801187D4[0] /= s2[0x103];
        }
        func_80012628();
    }
    case 1:
        s2[0xA66] += func_800B077C(arg0, D_801187D4[0]);
        func_8002CC74();
        func_8002CD50();
        func_8001264C(2);
        break;
    case 2:
        if (func_800C9414() == 0) {
            *(u16 *)(arg0 + 0xC) = 0;
            D_80069C1E[0] = *(u8 *)(s1 + s0 + 0x605) << 9;
            func_800125D8();
        }
        break;
    }
}

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

void func_800AD408(void) {
    extern u8 D_8008ED68[];
    extern u8 D_80069AD4[];
    u8 *s0 = D_8008ED68;
    u8 *p;
    s32 cur;
    s32 diff;

    if (func_800C9414() == 0) {
        p = D_80069AD4;
        cur = *(s16 *)(p + 0xEA) - 0x1000;
        diff = (*(s16 *)(p + 0x14A) - cur) % 0x1000;
        if (diff == 0) {
            func_800125D8();
        } else {
            s16 v;
            if (diff >= 0x801) {
                v = *(u16 *)(p + 0xEA) + 0xFC0;
            } else {
                v = *(u16 *)(p + 0xEA) + 0x40;
            }
            *(s16 *)(p + 0xEA) = v;
            *(s16 *)(p + 0xEA) = v % 0x1000;
            *(u8 *)(s0 + 0xA66) = 1;
        }
        func_8002CC74();
        func_8002CD50();
    }
}

extern s32 rsin(s32);

extern s32 rsin(s32);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444__800A8710__800ACF04", func_800AD4D8);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444__800A8710__800ACF04", func_800AD7B8);

extern s32 rsin(s32);

u8 *func_800ADAA4(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4)
{
  extern u8 D_80118710[][13];
  extern u8 *func_80015B3C();
  extern void func_80015EF8();
  extern void func_800161C4();
  extern void func_800AD7B8();
  extern s32 func_800ADBC4();
  s32 new_var;
  extern s32 func_800ADBCC();
  extern s32 func_800ADBD8();
  s32 s0;
  u8 *o;
  u32 val;
  new_var = func_800ADBC4(a2);
  s0 = new_var;
  o = func_80015B3C((void *) func_800AD7B8, (void *) func_800161C4, 5);
  func_80015EF8(o);
  *((u32 *) (o + 0x38)) |= 1;
  val = D_80118710[a0][a1];
  s0 -= 4;
  *((s32 *) (o + 0x80)) = s0;
  *((s32 *) (o + 0x7C)) = val;
  if (s0 < 3)
  {
    *((u32 *) (o + 0x30)) = ((*((u32 *) (o + 0x30))) & (~0x1C0)) | 0x40;
  }
  *((s16 *) (o + 0x66)) = func_800ADBD8(a2);
  *((s32 *) (o + 0x88)) = a3;
  *((s32 *) (o + 0x8C)) = func_800ADBCC(a2);
  *((u32 *) (o + 0x34)) = ((*((u32 *) (o + 0x34))) & (~0x7F)) | (a4 & 0x7F);
  return o;
}

s32 func_800ADBC4(s32 arg0) {
    return arg0 & 0x1F;
}

s32 func_800ADBCC(s32 arg0) {
    return (arg0 >> 5) & 7;
}

s32 func_800ADBD8(s32 arg0) {
    return (arg0 >> 8) & 0x1F;
}

void func_800ADBE4(u8 *arg0) {
    extern u8 D_801010B0[];
    extern u8 D_80118710[];
    extern u8 *func_80015B3C();
    extern void func_80015EF8();
    extern void func_800161C4();
    extern void func_800AD7B8();
    extern s32 func_800ADBC4();
    extern s32 func_800ADBCC();
    extern s32 func_800ADBD8();
    extern s32 func_800CA474();
    s32 row = 0;
    u32 *tmp = *(u32 **)(D_801010B0 + arg0[0x5D9] * 0x34);
    s32 ret = func_800CA474();
    u32 *line = tmp;
    s32 col;
    u32 *cell;

    do {
        col = 0;
        cell = line;
        do {
            s32 bits = (*cell >> 6) & 0x1FFF;
            if ((bits & 0x1F) > 3) {
                s32 new_var;
                s32 s0;
                u8 *o;
                u32 val;
                register u8 *base asm("a3");
                register u8 *pos asm("v0");
                register u32 flags asm("v0");
                new_var = func_800ADBC4(bits);
                s0 = new_var;
                o = func_80015B3C((void *)func_800AD7B8, (void *)func_800161C4, 5);
                func_80015EF8(o);
                flags = *(u32 *)(o + 0x38);
                flags |= 1;
                *(u32 *)(o + 0x38) = flags;
                base = D_80118710;
                pos = row * 13 + base;
                val = pos[col];
                s0 -= 4;
                *(s32 *)(o + 0x80) = s0;
                *(s32 *)(o + 0x7C) = val;
                if (s0 < 3) {
                    *(u32 *)(o + 0x30) = (*(u32 *)(o + 0x30) & ~0x1C0) | 0x40;
                }
                *(s16 *)(o + 0x66) = func_800ADBD8(bits);
                *(s32 *)(o + 0x88) = ret;
                *(s32 *)(o + 0x8C) = func_800ADBCC(bits);
                *(u32 *)(o + 0x34) &= ~0x7F;
            }
            col++;
            cell++;
        } while (col < 13);
        line += 13;
        row++;
    } while (row < 13);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800A8444__800A8710__800ACF04", func_800ADD70);

void func_800ADF5C(u8 *arg0, s32 arg1) {
    typedef struct {
        u8 pad[0x5EC];
        u8 unk_0x5EC[2][6];
    } DadosADF5C;
    extern u8 D_8008ED68[];
    u8 *base = D_8008ED68;
    register s16 val asm("v0");

    switch (*(u16 *)(base + 0xE8)) {
    case 0:
        *(u16 *)(arg0 + 0x5F8) = 0;
        func_80012628();
        break;
    case 1:
        val = *(u16 *)(arg0 + 0x5F8) + 1;
        *(u16 *)(arg0 + 0x5F8) = val;
        if ((s16)(val % 14) == 0) {
            if ((arg0 + arg1)[0x6DB] == ((DadosADF5C *)arg0)->unk_0x5EC[arg1][0]) {
                *(s32 *)(base + arg1 * 16 + 0x88) = 0x20;
            } else {
                *(s32 *)(base + arg1 * 16 + 0x88) = 0x2000;
            }
        }
        break;
    }
}

extern s32 rsin(s32);

void func_800AE03C(u8 *arg0, s32 arg1) {
    extern u8 D_8008ED68[];
    u8 *base = D_8008ED68;
    register s16 val asm("v0");
    s32 ret;

    switch (*(u16 *)(base + 0xE8)) {
    case 0:
        *(u16 *)(arg0 + 0x5F8) = 0;
        func_80012628();
        break;
    case 1:
        val = *(u16 *)(arg0 + 0x5F8);
        *(u16 *)(arg0 + 0x5F8) = val + 1;
        if ((s16)(val % 14) == 0) {
            u8 *p1 = arg0 + arg1 * 2;
            u8 *p2 = arg0 + arg1 * 6;
            u8 a2 = p1[0x601];
            u8 a3 = p1[0x602];
            u8 sp10 = p2[0x5EE];
            u8 sp14 = p2[0x5EF];
            ret = func_800ADD70(arg0, arg1, a2, a3, sp10, sp14);
            *(s32 *)(base + arg1 * 16 + 0x88) = ret;
            if (ret == 0) {
                func_80012628();
            }
        }
        break;
    case 2:
        val = *(u16 *)(arg0 + 0x5F8);
        *(u16 *)(arg0 + 0x5F8) = val + 1;
        if ((s16)(val % 14) == 0) {
            *(s32 *)(base + arg1 * 16 + 0x88) = 0x20;
        }
        break;
    }
}

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

void func_800AE1BC(u8 *arg0, s32 arg1) {
    extern u8 D_8008ED68[];
    extern s8 D_801187E0[];
    u8 *base = D_8008ED68;
    register s16 val asm("v0");

    switch (*(u16 *)(base + 0xE8)) {
    case 0:
        *(u16 *)(arg0 + 0x5F8) = 0;
        func_80012628();
        break;
    case 1:
        *(u16 *)(arg0 + 0x5F8) += 1;
        if (*(arg0 + arg1 + 0x16) != 0) {
            D_801187E0[0] = 1;
        } else {
            D_801187E0[0] = 2;
        }
        func_80012628();
        break;
    case 2:
        val = *(u16 *)(arg0 + 0x5F8);
        *(u16 *)(arg0 + 0x5F8) = val + 1;
        if ((s16)(val % 14) == 0) {
            s8 x = *(s8 *)(arg0 + 0x626);
            if (x < D_801187E0[0]) {
                *(s32 *)(base + arg1 * 16 + 0x88) = 0x4000;
            } else if (D_801187E0[0] < x) {
                *(s32 *)(base + arg1 * 16 + 0x88) = 0x1000;
            } else {
                func_80012628();
            }
        }
        break;
    case 3:
        val = *(u16 *)(arg0 + 0x5F8);
        *(u16 *)(arg0 + 0x5F8) = val + 1;
        if ((s16)(val % 14) == 0) {
            *(s32 *)(base + arg1 * 16 + 0x88) = 0x20;
        }
        break;
    }
}

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

void func_800AE35C(s32 unused, u8 *arg0, s32 arg1) {
    extern u8 D_8008ED68[];
    u8 *base = D_8008ED68;
    register s16 val asm("v0");
    s32 ret;
    u8 *p2 = arg0 + ((arg1 * 2 + arg1) * 2 + 0x5EC);

    switch (*(u16 *)(base + 0xE8)) {
    case 0:
        *(u16 *)(arg0 + 0x5F8) = 0;
        func_80012628();
        break;
    case 1:
        val = *(u16 *)(arg0 + 0x5F8);
        *(u16 *)(arg0 + 0x5F8) = val + 1;
        if ((s16)(val % 14) == 0) {
            u8 *p1 = arg0 + arg1 * 2;
            u8 *p3 = arg0 + (p2[0] * 0x7C + arg1 * 0x2E8);
            u8 sp10 = p3[0x2D];
            u8 sp14 = p3[0x2E];
            u8 a2 = p1[0x601];
            u8 a3 = p1[0x602];
            ret = func_800ADD70(arg0, arg1, a2, a3, sp10, sp14);
            *(s32 *)(base + arg1 * 16 + 0x88) = ret;
            if (ret == 0) {
                func_80012628();
            }
        }
        break;
    case 2:
        val = *(u16 *)(arg0 + 0x5F8);
        *(u16 *)(arg0 + 0x5F8) = val + 1;
        if ((s16)(val % 14) == 0) {
            *(s32 *)(base + arg1 * 16 + 0x88) = 0x20;
        }
        break;
    }
}

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

void func_800AE504(u8 *arg0, s32 arg1) {
    extern u8 D_8008ED68[];
    extern s8 D_801187E1[];
    u8 *base = D_8008ED68;
    register s16 val asm("v0");
    u8 *p2 = arg0 + ((arg1 * 2 + arg1) * 2 + 0x5EC);
    u8 *p_idx = arg0 + arg1;
    u8 *p3 = arg0 + (arg1 * 0x2E8 + 0x18) + p_idx[0x5FB] * 0x7C;

    switch (*(u16 *)(base + 0xE8)) {
    case 0:
        *(u16 *)(arg0 + 0x5F8) = 0;
        func_80012628();
        break;
    case 1:
        *(u16 *)(arg0 + 0x5F8) += 1;
        if (p2[1] == 3) {
            D_801187E1[0] = 2;
        } else if (p2[1] != 0) {
            if (p3[0x15] != p2[2] || p3[0x16] != p2[3]) {
                D_801187E1[0] = 0;
            } else if (p2[1] == 2) {
                D_801187E1[0] = 1;
            } else {
                D_801187E1[0] = 3;
            }
        } else {
            D_801187E1[0] = 3;
        }
        func_80012628();
        break;
    case 2:
        val = *(u16 *)(arg0 + 0x5F8);
        *(u16 *)(arg0 + 0x5F8) = val + 1;
        if ((s16)(val % 14) == 0) {
            s8 x = *(s8 *)(arg0 + 0x625);
            if (x < D_801187E1[0]) {
                *(s32 *)(base + arg1 * 16 + 0x88) = 0x4000;
            } else if (D_801187E1[0] < x) {
                *(s32 *)(base + arg1 * 16 + 0x88) = 0x1000;
            } else {
                func_80012628();
            }
        }
        break;
    case 3:
        val = *(u16 *)(arg0 + 0x5F8);
        *(u16 *)(arg0 + 0x5F8) = val + 1;
        if ((s16)(val % 14) == 0) {
            *(s32 *)(base + arg1 * 16 + 0x88) = 0x20;
        }
        break;
    }
}

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

void func_800AE728(u8 *arg0, s32 arg1) {
    extern u8 D_8008ED68[];
    u8 *base = D_8008ED68;
    register s16 val asm("v0");
    s32 ret;
    u8 *p2 = arg0 + ((arg1 * 2 + arg1) * 2 + 0x5EC);

    switch (*(u16 *)(base + 0xEC)) {
    case 0:
        *(u16 *)(arg0 + 0x5F8) = 0;
        func_80012668();
        break;
    case 1:
        val = *(u16 *)(arg0 + 0x5F8);
        *(u16 *)(arg0 + 0x5F8) = val + 1;
        if ((s16)(val % 14) == 0) {
            u8 *p1 = arg0 + arg1 * 2;
            u8 sp10 = p2[2];
            u8 sp14 = p2[3];
            u8 a2 = p1[0x601];
            u8 a3 = p1[0x602];
            ret = func_800ADD70(arg0, arg1, a2, a3, sp10, sp14);
            *(s32 *)(base + arg1 * 16 + 0x88) = ret;
            if (ret == 0) {
                func_80012668();
            }
        }
        break;
    case 2:
        val = *(u16 *)(arg0 + 0x5F8);
        *(u16 *)(arg0 + 0x5F8) = val + 1;
        if ((s16)(val % 14) == 0) {
            *(s32 *)(base + arg1 * 16 + 0x88) = 0x20;
        }
        break;
    }
}

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

void func_800AE8AC(u8 *arg0, s32 arg1) {
    extern u8 D_8008ED68[];
    u8 *base = D_8008ED68;
    register s16 val asm("v0");
    u8 idx = (arg0 + arg1)[0x5FB];
    u8 *p2 = arg0 + ((arg1 * 2 + arg1) * 2 + 0x5EC);

    switch (*(u16 *)(base + 0xE8)) {
    case 0:
        *(u16 *)(arg0 + 0x5F8) = 0;
        func_80012628();
        break;
    case 1:
        val = *(u16 *)(arg0 + 0x5F8);
        *(u16 *)(arg0 + 0x5F8) = val + 1;
        if ((s16)(val % 14) == 0) {
            u8 *p1 = arg0 + (idx * 0x7C + arg1 * 0x2E8);
            u8 sp10 = p2[4];
            u8 sp14 = p2[5];
            u8 a2 = p1[0x2D];
            u8 a3 = p1[0x2E];
            *(s32 *)(base + arg1 * 16 + 0x88) = func_800ADD70(arg0, arg1, a2, a3, sp10, sp14);
            func_80012628();
        }
        break;
    case 2:
        val = *(u16 *)(arg0 + 0x5F8);
        *(u16 *)(arg0 + 0x5F8) = val + 1;
        if ((s16)(val % 14) == 0) {
            *(s32 *)(base + arg1 * 16 + 0x88) = 0x20;
        }
        break;
    }
}

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

void func_800AEA4C(u8 *arg0, s32 arg1) {
    extern u8 D_8008ED68[];
    u8 *base = D_8008ED68;
    register s16 val asm("v0");
    s32 ret;
    u8 *p2 = arg0 + ((arg1 * 2 + arg1) * 2 + 0x5EC);

    switch (*(u16 *)(base + 0xE8)) {
    case 0:
        *(u16 *)(arg0 + 0x5F8) = 0;
        func_80012628();
        break;
    case 1:
        val = *(u16 *)(arg0 + 0x5F8);
        *(u16 *)(arg0 + 0x5F8) = val + 1;
        if ((s16)(val % 14) == 0) {
            u8 *p1 = arg0 + arg1 * 2;
            u8 sp10 = p2[4];
            u8 sp14 = p2[5];
            u8 a2 = p1[0x601];
            u8 a3 = p1[0x602];
            ret = func_800ADD70(arg0, arg1, a2, a3, sp10, sp14);
            *(s32 *)(base + arg1 * 16 + 0x88) = ret;
            if (ret == 0) {
                func_80012628();
            }
        }
        break;
    case 2:
        val = *(u16 *)(arg0 + 0x5F8);
        *(u16 *)(arg0 + 0x5F8) = val + 1;
        if ((s16)(val % 14) == 0) {
            *(s32 *)(base + arg1 * 16 + 0x88) = 0x20;
        }
        break;
    }
}

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

void func_800AEBD0(u8 *arg0, s32 arg1) {
    extern u8 D_8008ED68[];
    u8 *base = D_8008ED68;
    register s16 val asm("v0");
    u8 *p2 = arg0 + ((arg1 * 2 + arg1) * 2 + 0x5EC);

    switch (*(u16 *)(base + 0xE8)) {
    case 0:
        *(u16 *)(arg0 + 0x5F8) = 0;
        func_80012628();
        break;
    case 1:
        val = *(u16 *)(arg0 + 0x5F8);
        *(u16 *)(arg0 + 0x5F8) = val + 1;
        if ((s16)(val % 14) == 0) {
            u8 *p1 = arg0 + arg1 * 2;
            u8 b1 = p1[0x602];
            u8 a1 = p1[0x601];
            u8 a2 = p2[4];
            u8 b2 = p2[5];
            if (a1 == a2) {
                if (b1 == b2) {
                    *(s32 *)(base + arg1 * 16 + 0x88) = 0x20;
                    return;
                }
            }
            {
                s32 off = arg1 * 16;
                *(s32 *)(base + off + 0x88) = 0x4000;
            }
        }
        break;
    }
}
