#include "common.h"

s32 func_800C79E0(s32 arg0, M2C_UNK arg1) {
    extern s32 D_8008ED80[];
    extern s16 D_800F07C0[];
    extern M2C_UNK D_80100F38[];
    s16 temp_v0;
    s16 temp_v1;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_s1;
    u16 temp_v1_2;
    void *temp_s0;

    temp_s1 = func_800B1260(arg1) & 0xFFFF;
    temp_s0 = (temp_s1 * 0x79C) + D_80100F38;
    temp_v1 = M2C_FIELD(temp_s0, s16 *, 0x344);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(temp_s0, s16 *, 0x344) = 1;
        temp_a1 = func_800B12D8(arg1) & 0xFFFF;
        M2C_FIELD(temp_s0, u16 *, 0x324) = (u16) M2C_FIELD(temp_s0, u16 *, 0x326);
        temp_v0 = func_800B21F0(temp_s1, temp_a1);
        if (temp_v0 != -1) {
            M2C_FIELD(temp_s0, u16 *, 0x326) = (u16) temp_v0;
        }
        M2C_FIELD(temp_s0, s16 *, 0x328) = func_800D06D4((s16) M2C_FIELD(temp_s0, u16 *, 0x324), (s16) M2C_FIELD(temp_s0, u16 *, 0x326));
        break;
    case 1:
        if (((*D_8008ED80) & 3) == 3) {
            if (M2C_FIELD(temp_s0, s16 *, 0x328) == 0) {
                func_800CE4B8(arg1, arg0, (*D_800F07C0) + func_800CE128((s16) M2C_FIELD(temp_s0, u16 *, 0x326)), 1);
                M2C_FIELD(temp_s0, s16 *, 0x344) = 2;
            } else {
block_18:
                func_800CE164(arg1);
                func_800CE204(arg1, arg0);
            }
        }
        break;
    case 2:
        if (func_80015E60(arg0) == 1) {
            temp_v1_2 = M2C_FIELD(temp_s0, u16 *, 0x324);
            temp_a1_2 = temp_v1_2 << 0x10;
            M2C_FIELD(temp_s0, u16 *, 0x324) = (u16) M2C_FIELD(temp_s0, u16 *, 0x326);
            M2C_FIELD(temp_s0, u16 *, 0x326) = temp_v1_2;
            M2C_FIELD(temp_s0, s16 *, 0x328) = func_800D06D4((s16) M2C_FIELD(temp_s0, u16 *, 0x324), (s16) (temp_a1_2 >> 0x10));
            M2C_FIELD(temp_s0, s16 *, 0x344) = 3;
        }
        break;
    case 3:
        if ((*D_8008ED80) & 1) {
            if (M2C_FIELD(temp_s0, s16 *, 0x328) == 0) {
                M2C_FIELD(temp_s0, s16 *, 0x344) = 0;
                M2C_FIELD(temp_s0, s32 *, 0x2BC) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x2BC) + 1);
            } else {
                goto block_18;
            }
        }
        break;
    }
    return M2C_FIELD(temp_s0, s32 *, 0x2BC);
}
