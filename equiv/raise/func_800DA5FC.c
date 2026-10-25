#include "common.h"

s32 func_800DA5FC(s32 arg0, M2C_UNK arg1) {
    extern u8 D_80063940[];
    extern s32 D_8008ED80[];
    extern u8 D_80091618[];
    extern s16 D_800F07D0[];
    extern u8 D_80100F38[];
    s16 temp_v1;
    s32 temp_s0;
    u16 temp_a1;
    void *temp_s1;

    temp_s0 = func_800B1260(arg1) & 0xFFFF;
    temp_s1 = (temp_s0 * 0x79C) + D_80100F38;
    temp_v1 = M2C_FIELD(temp_s1, s16 *, 0x344);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(temp_s1, u16 *, 0x324) = (u16) M2C_FIELD(temp_s1, u16 *, 0x326);
        temp_a1 = ((u32) M2C_FIELD(((*(s32 *)((temp_s0 * 0x1A8) + D_80091618) * 0x3C) + D_80063940), u32 *, 0x1C) >> 8) & 7;
        M2C_FIELD(temp_s1, u16 *, 0x326) = temp_a1;
        M2C_FIELD(temp_s1, s16 *, 0x328) = func_800D06D4((s16) M2C_FIELD(temp_s1, u16 *, 0x324), temp_a1);
        M2C_FIELD(temp_s1, s16 *, 0x344) = 1;
        break;
    case 1:
        if (((*D_8008ED80) & 3) == 3) {
            if (M2C_FIELD(temp_s1, s16 *, 0x328) == 0) {
                func_800CE4B8(arg1, arg0, (*D_800F07D0), 1);
                M2C_FIELD(temp_s1, s16 *, 0x344) = 2;
            } else {
                func_800CE164(arg1);
                func_800CE204(arg1, arg0);
            }
        }
        break;
    case 2:
        if (func_80015E60(arg0) == 1) {
            M2C_FIELD(temp_s1, s16 *, 0x344) = 3;
        } else {
            func_80098FEC(arg0, arg1, temp_s0);
        }
        break;
    default:
        M2C_FIELD(temp_s1, s16 *, 0x344) = 0;
        M2C_FIELD(temp_s1, s32 *, 0x2BC) = (s32) (M2C_FIELD(temp_s1, s32 *, 0x2BC) + 1);
        break;
    }
    return M2C_FIELD(temp_s1, s32 *, 0x2BC);
}
