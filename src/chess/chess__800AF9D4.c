#include "common.h"

typedef struct { u32 (*b)[13]; u8 _pad[0x30]; } BoardSlot;
extern BoardSlot D_801010B0[];

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

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800AFACC);

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
    u32 (*b)[13] = D_801010B0[arg0[0x5D9]].b;
    u32 *p;
    u32 v;
    if (arg3 >= 0 && arg4 >= 0 && arg3 < 13 && arg4 < 13) {
        p = &b[arg3][arg4];
        v = (*p >> 6) & 0x1FFF;
        if (v != 0) {
            if (v >= 3) {
                return 3;
            }
            if (((u8 *)p)[3] == 0) {
                return 1;
            }
            if (arg1[0x15] == arg3 && arg1[0x16] == arg4) {
                return 1;
            }
            if (arg2[0x15] != arg3 || arg2[0x16] != arg4) {
                return 2;
            }
            return 1;
        }
    }
    return 0;
}

s32 func_800AFEA4(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3, s32 arg4) {
    u32 (*b)[13] = D_801010B0[arg0[0x5D9]].b;
    if (arg3 >= 0 && arg4 >= 0 && arg3 < 13 && arg4 < 13) {
        return ((b[arg3][arg4] >> 19) & 7) -
               ((s32)(((b[arg1[0x15]][arg1[0x16]] >> 19) & 7) + ((b[arg2[0x15]][arg2[0x16]] >> 19) & 7)) >> 1);
    }
    return 0;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800AFFA4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B03B8);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B0478);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B0530);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B06A0);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B077C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B0844);

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

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B30F8);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B3218);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B3338);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B3488);

void func_800B3558(u8 *arg0, s32 arg1, s32 arg2) {
    s32 v;
    *(s32 *)(arg0 + 0x77C) = (arg1 * 2 - 11) * -50;
    v = (D_801010B0[arg0[9]].b[arg1][arg2] >> 19) & 7;
    *(s32 *)(arg0 + 0x784) = (arg2 * 2 - 11) * -50;
    *(s32 *)(arg0 + 0x780) = v * 50;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B360C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AF9D4", func_800B3714);
