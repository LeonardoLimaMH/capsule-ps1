#include "common.h"

/* tabuleiros 13x13 por partida (0x34 bytes cada) */
extern struct {
    u32 (*b)[13];
    u8 _pad[0x30];
} D_801010B0[];

void func_800AF9D4(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0xBE2) = 0;
}

void func_800AF9DC(u8 *arg0) {
    extern u8 D_8008ED68[];
    u8 *s1 = D_8008ED68;
    u8 *q;
    if (func_800CAE6C(arg0 + 0x5D0) == 0 && (q = arg0 + arg0[0xBCA], q[0x5E0] == 0)) {
        if (*(s32 *)(s1 + (arg0[0xBCA] << 4) + 0x80) == 0) {
            u16 v = *(u16 *)(arg0 + 0xBE2) + 1;
            *(u16 *)(arg0 + 0xBE2) = v;
            if (v >= 0x3840) {
                if (v == 0x3840) {
                    func_800AFACC(arg0, 0);
                } else if (v == 0x3841) {
                    func_800AFBDC(arg0);
                } else {
                    *(u16 *)(arg0 + 0xBE2) = 0x3842;
                }
            }
        } else {
            if (*(u16 *)(arg0 + 0xBE2) >= 0x3840) {
                func_800AFCE0(arg0);
            }
            *(u16 *)(arg0 + 0xBE2) = 0;
        }
    }
}

void func_800AFACC(u8 *p, s32 param_2) {
    extern s32 func_800A8E34(u8 *, s32, s32);
    extern void func_8009C4B0(u8 *, s32, s32);

    u8 *base = p + 0x5d0;
    s32 team = 0;
    s32 var_s6 = 0x18;
    s32 var_s5 = 0;
    s32 piece;
    s32 var_s2;
    u8 *var_s1;
    s32 ret;

    do {
        piece = 0;
        if (param_2 == 0 || ((base[0x611] & 6) >> 1) == team) {
            var_s2 = var_s5;
            var_s1 = base + var_s6;
            do {
                if (param_2 != 0 || ((ret = func_800A8E34(base, team, piece)) == 0 && var_s1[0x28] == 0)) {
                    register u8 *q asm("v1") = base + var_s2;
                    ret = 3;
                    q[0x3e] = ret;
                    func_8009C4B0(p, team, piece);
                }
                var_s2 += 0x7c;
                piece++;
                var_s1 += 0x7c;
            } while (piece < 5);
        }
        var_s6 += 0x2e8;
        team++;
        var_s5 += 0x2e8;
    } while (team < 2);
}

void func_800AFBDC(s32 arg0) {
    extern u8 D_80063940[];
    u8 *table;
    s32 temp_s4;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    void *var_s0;

    temp_s4 = arg0 + 0x5D0;
    var_s2 = 0;
    table = D_80063940;
    var_s3 = 0x18;
    do {
        var_s1 = 0;
        var_s0 = temp_s4 + var_s3;
loop_2:
        if ((func_800A8E34(temp_s4, var_s2, var_s1) == 0) && (M2C_FIELD(var_s0, u8 *, 0x28) == 0)) {
            M2C_FIELD(var_s0, u8 *, 0x17) = 0x84;
            M2C_FIELD(var_s0, s8 *, 0x23) = 0;
            func_800A84A0(var_s0, var_s2, var_s1, 1);
            M2C_FIELD(var_s0, s8 *, 0x25) = func_800C94DC(arg0, ((u32) M2C_GFIELD(((M2C_FIELD(var_s0, u8 *, 0) * 0x3C) + table), u32, 0x18) >> 2) & 7);
        }
        var_s1 += 1;
        var_s0 += 0x7C;
        if (var_s1 < 5) {
            goto loop_2;
        }
        var_s2 += 1;
        var_s3 += 0x2E8;
    } while (var_s2 < 2);
}

void func_800AFCE0(s32 arg0) {
    s32 temp_s4;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    void *var_s0;

    temp_s4 = arg0 + 0x5D0;
    var_s2 = 0;
    var_s3 = 0x18;
    do {
        var_s1 = 0;
        var_s0 = temp_s4 + var_s3;
loop_2:
        if ((func_800A8E34(temp_s4, var_s2, var_s1) == 0) && (M2C_FIELD(var_s0, u8 *, 0x28) == 0)) {
            M2C_FIELD(var_s0, s8 *, 0x17) = 1;
            M2C_FIELD(var_s0, s8 *, 0x25) = func_800A835C(arg0, var_s2);
            func_800A84A0(var_s0, var_s2, var_s1, 0);
        }
        var_s1 += 1;
        var_s0 += 0x7C;
        if (var_s1 < 5) {
            goto loop_2;
        }
        var_s2 += 1;
        var_s3 += 0x2E8;
    } while (var_s2 < 2);
}

s32 func_800AFDB0(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3, s32 arg4) {
    register u32 b asm("a1");
    register u32 *p asm("v1");
    register s32 off asm("v0");
    s32 v;

    b = (u32)D_801010B0[arg0[0x5D9]].b;
    if (arg3 < 0) {
        return 0;
    }
    if (arg4 < 0) {
        return 0;
    }
    if (arg3 >= 13) {
        return 0;
    }
    if (arg4 >= 13) {
        return 0;
    }
    off = arg4 << 2;
    p = (u32 *)(off + (arg3 * 52 + b));
    v = (*p >> 6) & 0x1FFF;
    if (v == 0) {
        return 0;
    }
    if (v >= 3) {
        return 3;
    }
    if (((u8 *)p)[3] == 0) {
        return 1;
    }
    if (arg1[0x15] == arg3 && arg1[0x16] == arg4) {
        return 1;
    }
    if (arg2[0x15] == arg3 && arg2[0x16] == arg4) {
        return 1;
    }
    return 2;
}

s32 func_800AFEA4(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3, s32 arg4) {
    u32 (*b)[13] = D_801010B0[arg0[0x5D9]].b;
    if (arg3 >= 0) {
        if (arg4 < 0) {
            return 0;
        }
        if (arg3 < 13 && arg4 < 13) {
            return ((b[arg3][arg4] >> 19) & 7) -
                   ((s32)(((b[arg1[0x15]][arg1[0x16]] >> 19) & 7) + ((b[arg2[0x15]][arg2[0x16]] >> 19) & 7)) >> 1);
        }
    }
    return 0;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800AFFA4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B03B8);

void func_800B0478(u8 *arg0) {
    extern u8 D_80069AD4[];
    register u8 *ctx asm("a0") = D_80069AD4;
    u8 *tab = (u8 *)D_801010B0;
    register s32 val1 asm("a1") = 0;
    register u8 *b asm("v0");
    register s32 val2 asm("v1");
    u8 *entry;

    entry = tab + arg0[0x5D9] * 52;
    b = *(u8 **)entry;
    if (entry[0xA] & 1) {
        val1 = -0x32;
    }
    *(s32 *)(ctx + 0x44) = val1;
    *(s32 *)(ctx + 0x48) = ((*(u32 *)(b + 0x150) >> 19) & 7) * 50;
    entry = tab + arg0[0x5D9] * 52;
    val2 = 0;
    if (entry[0xB] & 1) {
        val2 = -0x32;
    }
    *(s32 *)(ctx + 0x4C) = val2;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B0530);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B06A0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B077C);

void func_800B0844(u8 *arg0) {
    extern u8 D_8008ED68[];
    u8 *s2 = D_8008ED68;
    s32 s1;
    u8 *s0;
    u8 *a0;
    s32 s3;
    s32 s4;

    if (*(u16 *)(s2 + 0xE0) != 0 || *(u16 *)(s2 + 0xE4) == 3) {
        if (s2[0x103] == 2) {
            s1 = 5;
        } else {
            s1 = 10;
        }
    } else {
        if (s2[0x103] == 2) {
            s1 = 15;
        } else {
            s1 = 30;
        }
    }

    s0 = arg0 + 0x5D0;
    if (func_800CAE6C(s0) != 0) {
        s2[0xA66] = 0;
        return;
    }

    s2[0xA66] = func_800AFFA4(arg0);
    if (s2[0xA66] != 0) {
        arg0[0xCFD] = 0;
    }

    s4 = 0;
    s3 = s0[0x5FA];
    if (s0[0x615] != 0) {
        if (func_800C9414() == 0) {
            a0 = s0 + (s3 << 1);
            if (s0[0x616] != a0[0x601] || s0[0x617] != a0[0x602]) {
                func_800B06A0(arg0, s1);
                s4 = 1;
            }
        }
    }

    s0[0x616] = *(s0 + (s3 << 1) + 0x601);
    s0[0x617] = *(s0 + (s3 << 1) + 0x602);
    s2[0xA66] += s4;
    func_8002CC74();
    func_8002CD50();
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B09B0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B0BB0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B0D70);

void func_800B0F1C(void *arg0)
{
  int new_var;
  s8 *new_var2;
  new_var2 = (s8 *) (((s8 *) (arg0 + ((*((u8 *) (((s8 *) arg0) + 0x5FA))) * 2))) + 0x601);
  *new_var2 = 6;
  new_var = (*((u8 *) (((s8 *) arg0) + 0x5FA))) * 2;
  *((s8 *) (((s8 *) (arg0 + new_var)) + 0x602)) = 6;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B0F48);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B2ABC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B2F48);

s32 func_800B30F8(u8 *arg0, s32 arg1) {
    extern u8 D_8008ED68[];
    extern u8 D_80069AD4[];
    u8 *s5 = D_8008ED68;
    u8 *s1;
    s32 ret = 0;
    s32 count = 1;
    s32 i;

    s1 = arg0 + 0x5D0;
    if (s5[0x103] != 0) {
        count = s5[0x103];
    }
    i = 0;
    if (ret < count) {
        do {
            u8 v0 = s1[0x7A4] + 1;
            s32 val;
            u8 *s6;
            s1[0x7A4] = v0;
            val = rsin(((s32)v0 << 12) / 6) / 64 + 0x460;
            s6 = D_80069AD4;
            *(s32 *)(s6 + 0xE0) = val;
            if (val == 0x460 && arg1 != 0) {
                ret = 1;
                break;
            }
            i++;
        } while (i < count);
    }
    s5[0xA66] = 1;
    func_8002CC74();
    func_8002CD50();
    return ret;
}

s32 func_800B3218(u8 *arg0, s32 arg1) {
    extern u8 D_8008ED68[];
    extern u8 D_80069AD4[];
    u8 *s5 = D_8008ED68;
    u8 *s1;
    s32 ret = 0;
    s32 count = 1;
    s32 i;

    s1 = arg0 + 0x5D0;
    if (s5[0x103] != 0) {
        count = s5[0x103];
    }
    i = 0;
    if (ret < count) {
        do {
            u8 v0 = s1[0x7A4] + 1;
            s32 val;
            u8 *s6;
            s1[0x7A4] = v0;
            val = rsin(((s32)v0 << 12) / 6) / 64 + 0x660;
            s6 = D_80069AD4;
            *(s32 *)(s6 + 0xE0) = val;
            if (val == 0x660 && arg1 != 0) {
                ret = 1;
                break;
            }
            i++;
        } while (i < count);
    }
    s5[0xA66] = 1;
    func_8002CC74();
    func_8002CD50();
    return ret;
}

s32 func_800B3338(u8 *arg0, s32 arg1) {
    extern u8 D_8008ED68[];
    extern u8 D_80069AD4[];
    u8 *t5;
    s32 *t4;
    register s32 count asm("t3");
    register s32 *piVar7 asm("t2");
    register s32 iVar6 asm("t1");
    register s32 ret asm("s0");

    ret = 0;
    t5 = D_8008ED68;
    count = 1;
    if (t5[0x103] != 0) {
        count = t5[0x103];
    }
    piVar7 = (s32 *)(arg0 + 0xD68);
    if (arg1 == 0) {
        piVar7 = (s32 *)(arg0 + 0xD4C);
    }
    iVar6 = 0;
    if (count != 0) {
        t4 = (s32 *)D_80069AD4;
loop_start:
        do {
            s32 iVar5 = 0;
            register s32 iVar4 asm("a2") = iVar5;
            register s32 *piVar3 asm("a1") = piVar7;
            register s32 *puVar2 asm("a0") = t4;

            do {
                register s32 v0 asm("v0") = *piVar3;
                register s32 v1 asm("v1") = puVar2[0x11];
                v0 = v0 - v1;
                v1 = v0;
                if (v0 < 0) {
                    v1 = -v1;
                }
                if (iVar5 < v1) {
                    iVar5 = v1;
                }
                piVar3++;
                iVar4++;
                puVar2++;
            } while (iVar4 < 3);

            iVar5 = (iVar5 + 1) / 10;

            {
                register s32 *p1 asm("a1") = piVar7;
                register s32 *p2 asm("a2") = t4;
                register s32 *end asm("t0") = p1 + 3;

                do {
                    if (iVar5 != 0) {
                        p2[0x11] += (*p1 - p2[0x11]) / iVar5;
                    } else {
                        ret = 1;
                        p2[0x11] = *p1;
                    }
                    p1++;
                    p2++;
                } while ((s32)p1 < (s32)end);
            }

            iVar6++;
            if (ret != 0) {
                goto exit;
            }
            if (iVar6 < count) {
                goto loop_start;
            }
        } while (0);
    }
exit:
    t5[0xA66] = 1;
    func_8002CC74();
    func_8002CD50();
    return ret;
}

void func_800B3488(u8 *arg0, u8 *arg1) {
    s32 v;

    *(s32 *)(arg0 + 0x77C) = (arg1[0x15] * 2 - 11) * -50;
    v = (D_801010B0[arg0[9]].b[arg1[0x15]][arg1[0x16]] >> 19) & 7;
    *(s32 *)(arg0 + 0x780) = v * 50;
    *(s32 *)(arg0 + 0x784) = (arg1[0x16] * 2 - 11) * -50;
}

void func_800B3558(u8 *arg0, s32 arg1, s32 arg2) {
    s32 v;
    *(s32 *)(arg0 + 0x77C) = (arg1 * 2 - 11) * -50;
    v = (D_801010B0[arg0[9]].b[arg1][arg2] >> 19) & 7;
    *(s32 *)(arg0 + 0x784) = (arg2 * 2 - 11) * -50;
    *(s32 *)(arg0 + 0x780) = v * 50;
}

void func_800B360C(u8 *arg0, u8 *arg1, u8 *arg2) {
    s32 v;

    *(s32 *)(arg0 + 0x77C) = (arg1[0x15] + arg2[0x15] - 11) * -50;
    v = ((D_801010B0[arg0[9]].b[arg1[0x15]][arg1[0x16]] >> 19) & 7) +
        ((D_801010B0[arg0[9]].b[arg2[0x15]][arg2[0x16]] >> 19) & 7);
    *(s32 *)(arg0 + 0x780) = v * 25;
    *(s32 *)(arg0 + 0x784) = (arg1[0x16] + arg2[0x16] - 11) * -50;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B3714);
