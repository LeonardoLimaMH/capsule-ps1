#include "common.h"

s32 func_800CA944(s32 arg0, M2C_UNK arg1) {
    extern u8 D_80063940[];
    extern s32 D_8008ED80[];
    extern u8 D_80091618[];
    extern s16 D_800F0738[];
    extern u8 D_80100F38[];
    s16 temp_v1;
    s32 temp_v0;
    s32 var_v0;
    u16 temp_s1;
    void *temp_s0;

    temp_v0 = func_800B1260(arg1) & 0xFFFF;
    temp_s0 = (temp_v0 * 0x79C) + D_80100F38;
    temp_v1 = M2C_FIELD(temp_s0, s16 *, 0x344);
    temp_s1 = *(s32 *)((temp_v0 * 0x1A8) + D_80091618);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (M2C_FIELD(temp_s0, u16 *, 0x376) & 1) {
            func_80034AB0(3);
        }
        if ((((u32) M2C_FIELD(((temp_s1 * 0x3C) + D_80063940), u32 *, 0x20) >> 0xF) & 0xF) != 1) {
            var_v0 = M2C_FIELD(temp_s0, s32 *, 0x2BC) + 1;
block_20:
            M2C_FIELD(temp_s0, s32 *, 0x2BC) = var_v0;
        } else {
            M2C_FIELD(temp_s0, u16 *, 0x324) = (u16) M2C_FIELD(temp_s0, u16 *, 0x326);
            M2C_FIELD(temp_s0, u16 *, 0x326) = 4U;
            M2C_FIELD(temp_s0, s16 *, 0x328) = func_800D06D4((s16) M2C_FIELD(temp_s0, u16 *, 0x324), 4);
            M2C_FIELD(temp_s0, s16 *, 0x344) = 1;
        }
        break;
    case 1:
        if (((*D_8008ED80) & 3) == 3) {
            if (M2C_FIELD(temp_s0, s16 *, 0x328) == 0) {
                func_800CE4B8(arg1, arg0, (*D_800F0738) + func_800CE128((s16) M2C_FIELD(temp_s0, u16 *, 0x326)), 3);
                M2C_FIELD(temp_s0, s16 *, 0x344) = 2;
            } else {
block_21:
                func_800CE164(arg1);
                func_800CE204(arg1, arg0);
            }
        }
        break;
    case 2:
        if (func_80015E60(arg0) == 1) {
            M2C_FIELD(temp_s0, u16 *, 0x324) = (u16) M2C_FIELD(temp_s0, u16 *, 0x326);
            M2C_FIELD(temp_s0, u16 *, 0x326) = 0U;
            M2C_FIELD(temp_s0, s16 *, 0x328) = func_800D06D4((s16) M2C_FIELD(temp_s0, u16 *, 0x324), 0);
            M2C_FIELD(temp_s0, s16 *, 0x344) = 3;
        }
        break;
    case 3:
        if (((*D_8008ED80) & 3) == temp_v1) {
            if (M2C_FIELD(temp_s0, s16 *, 0x328) == 0) {
                M2C_FIELD(temp_s0, s16 *, 0x344) = 0;
                var_v0 = M2C_FIELD(temp_s0, s32 *, 0x2BC) + 1;
                goto block_20;
            }
            goto block_21;
        }
        break;
    }
    return M2C_FIELD(temp_s0, s32 *, 0x2BC);
}
