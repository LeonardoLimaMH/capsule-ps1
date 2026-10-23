#include "common.h"

s32 __adddf3(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 *var_a0;
    s32 temp_a2;
    s32 temp_s6;
    s32 var_a2;
    s32 var_a3;
    s32 var_s2;
    s32 var_s4;
    s32 var_s7;
    s32 var_v1;

    sp30 = 0;
    var_s7 = 0;
    var_s2 = arg0;
    sp34 = 0;
    if (!(arg1 & 0x7FFFFFFF)) {
        if (var_s2 == 0) {
            return arg2;
        }
        goto block_4;
    }
block_4:
    if ((arg3 & 0x7FFFFFFF) || (arg2 != 0)) {
        var_s4 = (arg1 >> 0x14) & 0x7FF;
        temp_s6 = (arg3 >> 0x14) & 0x7FF;
        if ((temp_s6 + 0x36) >= var_s4) {
            if ((var_s4 + 0x36) < temp_s6) {
                return arg2;
            }
            temp_a2 = (arg1 & 0xFFFFF) | 0x100000;
            sp1C = temp_a2;
            sp18 = var_s2;
            sp24 = (arg3 & 0xFFFFF) | 0x100000;
            sp20 = arg2;
            if (arg1 < 0) {
                _mainasu(&sp18, var_s2, temp_a2);
            }
            if (arg3 & 0x80000000) {
                _mainasu(&sp20, sp20, sp24);
            }
            _dbl_shift(&sp18, 0, sp18, sp1C, 9);
            _dbl_shift(&sp20, 0, sp20, sp24, 9);
            if (temp_s6 < var_s4) {
                var_a0 = &sp20;
                var_a2 = sp20;
                var_a3 = sp24;
            } else {
                var_a0 = &sp18;
                var_a2 = sp18;
                var_a3 = sp1C;
                var_s4 = temp_s6;
            }
            _dbl_shift(var_a0, 1, var_a2, var_a3);
            _add_mant_d(&sp18, sp18, sp1C, sp20, sp24);
            if (sp1C >= 0) {
                if ((sp1C == 0) && (sp18 == 0)) {
                    return sp30;
                }
                goto block_21;
            }
            var_s7 = 0x80000000;
            _mainasu(&sp18, sp18, sp1C);
block_21:
            if (!(sp1C & 0xE0000000)) {
                do {
                    _dbl_shift(&sp18, 0, sp18, sp1C, 1);
                    var_s4 -= 1;
                } while (!(sp1C & 0xE0000000));
            }
            if (sp1C & 0x40000000) {
                var_s4 += 1;
                _dbl_shift(&sp18, 1, sp18, sp1C, 1);
            }
            var_v1 = 0xFF;
            sp2C = 0;
            if (sp18 & 0x200) {
                var_v1 = 0x100;
            }
            sp28 = var_v1;
            _add_mant_d(&sp18, sp18, sp1C, sp28, 0);
            if (sp1C & 0x40000000) {
                var_s4 += 1;
                _dbl_shift(&sp18, 1, sp18, sp1C, 1);
            }
            _dbl_shift(&sp18, 1, sp18, sp1C, 9);
            sp1C &= 0xFFEFFFFF;
            if (var_s4 >= 0x7FF) {
                _err_math(0x22, 0xB);
                if (var_s7 != 0) {

                }
                var_s2 = 0;
            } else {
                var_s2 = sp18;
            }
            goto block_35;
        }
    }
block_35:
    return var_s2;
}
