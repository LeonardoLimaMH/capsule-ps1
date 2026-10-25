#include "common.h"

s32 func_8001CB94(s32 arg0) {
    extern s32 D_80078CDC;
    extern s32 D_80078CE0;
    extern s32 D_80078CE4;
    extern s32 D_80078CE8;
    extern s32 D_80078CEC;
    extern s32 D_80078CF0;
    extern s32 D_80078CF4;
    extern s32 D_80078CF8;
    extern u8 D_8008ED68[];
    s32 temp_v0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;

    func_8004FE6C(D_80078CDC);
    func_8004FE6C(D_80078CE0);
    func_8004FE6C(D_80078CE4);
    func_8004FE6C(D_80078CE8);
    do {

    } while (func_8004E2BC(arg0) == 0);
    do {
        var_v0 = 1;
        if (func_8004FE6C(D_80078CDC) != 1) {
            var_v0 = 2;
            if (func_8004FE6C(D_80078CE0) != 1) {
                var_v0 = 3;
                if (func_8004FE6C(D_80078CE4) != 1) {
                    var_v0 = 0;
                    if (func_8004FE6C(D_80078CE8) == 1) {
                        var_v0 = 4;
                    }
                }
            }
        }
        var_v1 = var_v0 - 1;
    } while (var_v0 == 0);
    if ((u32) (var_v1 - 1) >= 2U) {
        if (var_v1 == 3) {
            func_8004FE6C(D_80078CEC);
            func_8004FE6C(D_80078CF0);
            func_8004FE6C(D_80078CF4);
            func_8004FE6C(D_80078CF8);
            do {

            } while (_card_clear(arg0) == 0);
            do {
                var_v0_2 = 1;
                if (func_8004FE6C(D_80078CEC) != 1) {
                    var_v0_2 = 2;
                    if (func_8004FE6C(D_80078CF0) != 1) {
                        var_v0_2 = 3;
                        if (func_8004FE6C(D_80078CF4) != 1) {
                            var_v0_2 = 0;
                            if (func_8004FE6C(D_80078CF8) == 1) {
                                var_v0_2 = 4;
                            }
                        }
                    }
                }
                var_v1 = var_v0_2 - 1;
            } while (var_v0_2 == 0);
            if (var_v1 != 0) {
                goto block_20;
            }
            goto block_21;
        }
block_21:
        func_8004FE6C(D_80078CDC);
        func_8004FE6C(D_80078CE0);
        func_8004FE6C(D_80078CE4);
        func_8004FE6C(D_80078CE8);
        do {

        } while (func_8004E2CC(arg0) == 0);
        do {
            var_v0_3 = 1;
            if (func_8004FE6C(D_80078CDC) != 1) {
                var_v0_3 = 2;
                if (func_8004FE6C(D_80078CE0) != 1) {
                    var_v0_3 = 3;
                    if (func_8004FE6C(D_80078CE4) != 1) {
                        var_v0_3 = 0;
                        if (func_8004FE6C(D_80078CE8) == 1) {
                            var_v0_3 = 4;
                        }
                    }
                }
            }
            temp_v0 = var_v0_3 - 1;
        } while (var_v0_3 == 0);
        M2C_FIELD(D_8008ED68, s32 *, 0x950) = temp_v0;
        return temp_v0;
    }
block_20:
    M2C_FIELD(D_8008ED68, s32 *, 0x950) = var_v1;
    return var_v1;
}
