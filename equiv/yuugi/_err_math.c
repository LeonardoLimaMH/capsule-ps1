#include "common.h"

s32 _err_math(s32 arg0, s32 arg1) {
    extern s32 D_80071510[];
    extern s32 D_80071514[];
    M2C_UNK var_a1;

    (*D_80071510) = arg0;
    (*D_80071514) = arg1;
    switch (arg0) {                                 /* irregular */
    case 33:
        var_a1 = 0x301;
block_5:
        func_8004FE2C(0xF4000002, var_a1);
        break;
    case 34:
        var_a1 = 0x302;
        goto block_5;
    }
    return 0;
}
