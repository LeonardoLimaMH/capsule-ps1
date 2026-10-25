#include "common.h"

void func_800A18EC(void) {
    extern u16 D_8006AF80[];
    extern u8 D_80091618[];
    extern s32 D_800ED890[];
    extern s32 D_800ED894[];
    extern s16 D_800F2CF8[];
    extern u8 D_800F2D30[];
    extern u8 D_800F2D98[];
    extern u8 D_8010126A[];
    s16 *var_a1;
    u32 temp_v0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a2;
    s32 var_v1;
    u16 temp_a2;
    u8 *var_v0;
    u8 *var_v0_2;
    u8 *var_v0_3;
    void *temp_v0_2;
    void *var_v1_2;

    temp_a2 = *(u16 *)(((*D_8006AF80) * 0x1A8) + D_80091618);
    var_a0 = 0;
    if (*(u16 *)(temp_a2 + D_800F2D30) == 0xFF) {
        var_v0 = D_800F2D98;
loop_2:
        if (*var_v0 != (temp_a2 & 0xFF)) {
            var_a0 += 1;
            var_v0 = &(D_800F2D98)[var_a0];
            if (var_a0 >= 6) {

            } else {
                goto loop_2;
            }
        }
        var_v1 = var_a0;
        if (var_a0 == 6) {
            var_a0_2 = 0;
            var_v0_2 = D_800F2D98;
loop_7:
            if (*var_v0_2 != 0xFF) {
                var_a0_2 += 1;
                var_v0_2 = &(D_800F2D98)[var_a0_2];
                if (var_a0_2 < 6) {
                    goto loop_7;
                }
            }
            var_v1 = var_a0_2;
            var_v0_3 = &(D_800F2D98)[var_v1];
            if (var_v1 == 6) {
                var_v1 = 5;
                var_v0_3 = D_800F2D98 + 5;
            }
            *var_v0_3 = (u8) temp_a2;
        }
        func_8001A49C((var_v1 * 0x15800) + 0x80146A18, D_800F2D98, temp_a2);
    }
    var_a2 = 0;
    var_a1 = D_800F2CF8;
    var_v1_2 = ((*D_8006AF80) * 0x1A8) + D_80091618;
    do {
        M2C_FIELD(var_v1_2, s16 *, 0x15A) = 0;
        *var_a1 = 0;
        var_a1 += 2;
        var_a2 += 1;
        var_v1_2 += 2;
    } while (var_a2 < 0xC);
    (*D_800ED890) = 0;
    (*D_800ED894) = 0;
    temp_v0 = (*D_8006AF80) * 0x79C;
    func_800E334C(1, temp_v0 + D_8010126A, temp_v0 + (D_8010126A + 2));
    temp_v0_2 = ((*D_8006AF80) * 0x79C) + (D_8010126A - 0x332);
    func_800E3260(1, M2C_FIELD(temp_v0_2, s16 *, 0x332), M2C_FIELD(temp_v0_2, s16 *, 0x334));
    func_800A1B18();
    func_800D1CC4((*D_8006AF80), 0, 0, 0);
}
