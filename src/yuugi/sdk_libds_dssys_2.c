#include "common.h"
#include "yuugi.h"

void func_8004349C(void *arg0) {
    s32 var_v1;
    void *var_v0;

    var_v1 = 3;
    var_v0 = arg0 + 3;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s8 *, 4) = 0;
    do {
        M2C_FIELD(var_v0, s8 *, 5) = 0;
        var_v1 -= 1;
        var_v0 -= 1;
    } while (var_v1 >= 0);
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libds_dssys_2", func_800434CC);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libds_dssys_2", func_800435B8);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libds_dssys_2", func_8004360C);
