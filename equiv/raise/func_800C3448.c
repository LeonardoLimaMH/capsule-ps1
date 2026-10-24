#include "common.h"

s32 func_800C3448(s32 arg0, M2C_UNK arg1) {
    extern s32 D_8008ED80[];
    extern M2C_UNK D_80100F38[];
    s16 temp_v1;
    s16 temp_v1_2;
    void *temp_s0;

    temp_s0 = ((func_800B1260(arg1) & 0xFFFF) * 0x79C) + D_80100F38;
    temp_v1 = M2C_FIELD(temp_s0, s16 *, 0x344);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(temp_s0, s16 *, 0x344) = 1;
        break;
    case 1:
        M2C_FIELD(temp_s0, u16 *, 0x324) = (u16) M2C_FIELD(temp_s0, u16 *, 0x326);
        M2C_FIELD(temp_s0, u16 *, 0x326) = 7U;
        M2C_FIELD(temp_s0, s16 *, 0x328) = func_800D06D4((s16) M2C_FIELD(temp_s0, u16 *, 0x324), 7);
        M2C_FIELD(temp_s0, s16 *, 0x344) = 2;
        break;
    case 2:
        temp_v1_2 = (*D_8008ED80) & 3;
        if (temp_v1_2 == 3) {
            if (M2C_FIELD(temp_s0, s16 *, 0x328) == 0) {
                M2C_FIELD(temp_s0, s16 *, 0x344) = temp_v1_2;
            } else {
                func_800CE164(arg1);
                func_800CE204(arg1, arg0);
            }
        }
        break;
    default:
        M2C_FIELD(temp_s0, s16 *, 0x344) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x2BC) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x2BC) + 1);
        break;
    }
    return M2C_FIELD(temp_s0, s32 *, 0x2BC);
}
