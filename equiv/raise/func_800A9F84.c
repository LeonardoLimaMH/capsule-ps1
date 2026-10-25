#include "common.h"

void func_800A9F84(s32 arg0, s32 arg1, s32 arg2) {
    extern u8 D_80091618[];
    extern s32 D_800EEBA8[];
    extern u8 D_800EF524[];
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a1;
    s32 var_a2;
    void *temp_a0;
    void *temp_v1;
    void *var_a3;

    temp_v0 = func_800B1260(arg1);
    (*D_800EEBA8) = 2;
    func_800E2AA0(arg0, arg1, arg2);
    temp_v0_2 = func_800A8E1C(arg0 & 0xFFFF);
    var_a2 = 0;
    if (temp_v0_2 > 0) {
        var_a3 = ((temp_v0 & 0xFFFF) * 0x1A8) + D_80091618;
        var_a1 = arg0 * 0x9C;
        do {
            temp_v1 = var_a1 + D_800EF524;
            if (arg2 == 1) {
                M2C_FIELD(temp_v1, s32 *, 4) = arg2;
            } else {
                M2C_FIELD(temp_v1, s32 *, 4) = -1;
            }
            temp_a0 = M2C_FIELD(var_a3, void **, 0x18C);
            var_a3 += 4;
            var_a1 += 0x34;
            var_a2 += 1;
            M2C_FIELD(temp_a0, s32 *, 0x50) = (s32) ((M2C_FIELD(temp_a0, s32 *, 0x50) & ~8) | ((arg2 == 1) * 8));
        } while (var_a2 < temp_v0_2);
    }
    func_800C60E0(arg1, 1, var_a2);
    func_800C62A4(arg1, 1);
    func_800C5EFC(arg1, 1);
    func_800B9F50(arg1 & 0xFFFF);
    temp_s0 = temp_v0 & 0xFFFF;
    func_800B4C40(temp_s0);
    func_800E11A0(arg1, temp_s0);
}
