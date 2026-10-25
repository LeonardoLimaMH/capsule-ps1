#include "common.h"

void func_800AD06C(void *arg0) {
    extern u16 D_8008EE50[];
    extern int func_800161C4();
    extern int func_800ACD58();
    s32 temp_v0;
    s32 var_a1;
    s32 var_v0;
    u16 var_v1;
    u8 temp_s0;
    u8 temp_s1;
    void *temp_v0_2;

    switch ((*D_8008EE50)) {                           /* irregular */
    case 0:
        temp_s0 = M2C_FIELD(arg0, u8 *, 0x5D0);
        var_v0 = 0;
        if (temp_s0 == 1) {
            var_v0 = 0;
            if (M2C_FIELD(arg0, u8 *, 1) == 0) {
                temp_v0 = func_800CB24C(arg0, arg0 + 0x5D0, 1);
                var_v0 = 0;
                if (M2C_FIELD(arg0, u8 *, 0xBED) != temp_v0) {
                    if (temp_v0 == temp_s0) {
                        var_v1 = 0x7014;
                    } else if (temp_v0 == 2) {
                        var_v1 = 0x7013;
                        if (M2C_FIELD(arg0, u8 *, 0x5E1) != 0) {
                            var_v1 = 0x7012;
                        }
                    } else {
                        var_v1 = 0x7012;
                        if (M2C_FIELD(arg0, u8 *, 0x5E1) != 0) {
                            var_v1 = 0x7013;
                        }
                    }
                    M2C_FIELD(arg0, u16 *, 8) = var_v1;
                    func_80034BD8(-3, 0);
                    var_v0 = 1;
                }
            }
        }
        if (var_v0 != 0) {
            func_80012628();
            return;
        }
        func_8001264C(2);
        return;
    case 1:
        if (func_80019654(1) != 0) {
            func_800338DC(M2C_FIELD(arg0, u16 *, 8));
            func_80012628();
            return;
        }
        return;
    case 2:
        temp_s1 = M2C_FIELD(arg0, u8 *, 0xBCA);
        temp_v0_2 = func_80015B3C(&func_800ACD58, &func_800161C4, 5);
        func_80015EF8(temp_v0_2);
        if (M2C_FIELD((arg0 + temp_s1), u8 *, 0x5E0) == 0) {
            var_a1 = temp_s1 + 6;
        } else {
            var_a1 = 0xB;
        }
        M2C_FIELD(temp_v0_2, s32 *, 0x18) = func_80019F30(0x60013, var_a1);
        M2C_FIELD(temp_v0_2, s16 *, 0x50) = 0x1000;
        M2C_FIELD(temp_v0_2, s16 *, 0x4E) = 2;
        M2C_FIELD(temp_v0_2, s32 *, 0x7C) = (s32) temp_s1;
        M2C_FIELD(arg0, s8 *, 0xD77) = 0;
        func_800125D8();
        break;
    }
}
