#include "common.h"

s32 func_800C478C(void *arg0, M2C_UNK arg1) {
    extern M2C_UNK D_80063940[];
    extern M2C_UNK D_80091618[];
    extern s16 D_800F0758[];
    extern M2C_UNK D_80100F38[];
    s16 temp_v1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v0;
    u16 *temp_a1;
    void *temp_s0;

    temp_v0 = func_800B1260(arg1);
    temp_s0 = ((temp_v0 & 0xFFFF) * 0x79C) + D_80100F38;
    temp_v1 = M2C_FIELD(temp_s0, s16 *, 0x344);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(temp_s0, s16 *, 0x344) = 1;
        break;
    case 1:
        func_800CE4B8(arg1, arg0, (*D_800F0758) + func_800CE128(M2C_FIELD(temp_s0, s16 *, 0x326)), 1);
        M2C_FIELD(temp_s0, s16 *, 0x344) = 2;
        /* fallthrough */
    case 2:
        if (func_80015E60(arg0) == 1) {
            M2C_FIELD(temp_s0, s16 *, 0x344) = 3;
        } else {
            temp_a1 = ((temp_v0 & 0xFFFF) * 0x1A8) + D_80091618;
            temp_v0_2 = ((u32) M2C_FIELD(((*temp_a1 * 0x3C) + D_80063940), u32 *, 0x24) >> 0xA) & 0x1F;
            if (temp_v0_2 == 1) {
                if (M2C_FIELD(arg0, u16 *, 0x24) == M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 4), s32 *, 4)) {
                    var_v0 = M2C_FIELD(arg0, s32 *, 0x20);
                    goto block_15;
                }
            } else if ((u16) M2C_FIELD(arg0, s32 *, 0x20) == (temp_v0_2 - 2)) {
                var_v0 = (s32) (s16) M2C_FIELD(arg0, u16 *, 0x24);
block_15:
                if (var_v0 == 0) {
                    func_800CC1FC(arg1, *temp_a1, 1);
                }
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
