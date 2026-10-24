#include "common.h"

s32 func_8001C864(u32 arg0, M2C_UNK *arg2) {
    extern M2C_UNK D_80078B94[];
    extern M2C_UNK D_80078B9C[];
    extern M2C_UNK D_80078BA8[];
    extern M2C_UNK D_80078BB0[];
    extern M2C_UNK D_80078BB8[];
    extern M2C_UNK D_80078BC0[];
    extern M2C_UNK D_80078BC8[];
    extern M2C_UNK D_80078BD0[];
    s32 sp10;
    s16 sp14;
    M2C_UNK *var_a2;
    s32 temp_v0;
    s32 var_v0;

    var_a2 = arg2;
    switch (arg0) {
    case 0:
        var_a2 = D_80078B94;
        sp10 = M2C_FIELD(D_80078B94, s32 *, 0);
        sp14 = M2C_FIELD(D_80078B94, s16 *, 4);
        break;
    case 1:
        var_a2 = D_80078BA8;
        sp10 = M2C_FIELD(D_80078BA8, s32 *, 0);
        sp14 = M2C_FIELD(D_80078BA8, s16 *, 4);
        break;
    case 2:
        var_a2 = D_80078BB0;
        sp10 = M2C_FIELD(D_80078BB0, s32 *, 0);
        sp14 = M2C_FIELD(D_80078BB0, s16 *, 4);
        break;
    case 3:
        var_a2 = D_80078BB8;
        sp10 = M2C_FIELD(D_80078BB8, s32 *, 0);
        sp14 = M2C_FIELD(D_80078BB8, s16 *, 4);
        break;
    case 16:
        var_a2 = D_80078B9C;
        sp10 = M2C_FIELD(D_80078B9C, s32 *, 0);
        sp14 = M2C_FIELD(D_80078B9C, s16 *, 4);
        break;
    case 17:
        var_a2 = D_80078BC0;
        sp10 = M2C_FIELD(D_80078BC0, s32 *, 0);
        sp14 = M2C_FIELD(D_80078BC0, s16 *, 4);
        break;
    case 18:
        var_a2 = D_80078BC8;
        sp10 = M2C_FIELD(D_80078BC8, s32 *, 0);
        sp14 = M2C_FIELD(D_80078BC8, s16 *, 4);
        break;
    case 19:
        var_a2 = D_80078BD0;
        sp10 = M2C_FIELD(D_80078BD0, s32 *, 0);
        sp14 = M2C_FIELD(D_80078BD0, s16 *, 4);
        break;
    }
    temp_v0 = func_8001CB94(arg0, var_a2, arg0);
    if (temp_v0 == 3) {
        var_v0 = -1;
        if (func_8004FF4C(&sp10) == 0) {
            return 5;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return var_v0;
    }
    var_v0 = temp_v0;
    return var_v0;
}
