#include "common.h"

s32 slpm_CD_datasync(s32 arg0) {
    extern u8 D_80131D3D[];
    extern u8 D_80131D44[];
    extern u8 D_80131DC4[];
    extern u8 D_80131FFC[];
    extern s32 * D_80132028[];
    extern s32 D_80134EF0[];
    extern s32 D_80134EF4[];
    extern M2C_UNK * D_80134EF8[];
    s32 var_v0;
    s32 var_v0_2;

    (*D_80134EF0) = slpm_VSync(-1) + 0x3C0;
    (*D_80134EF4) = 0;
    (*D_80134EF8) = "CD_datasync";
loop_1:
    if ((*D_80134EF0) >= slpm_VSync(-1)) {
        (*D_80134EF4) += 1;
        if ((*D_80134EF4) > 0x3C0000) {
            goto block_3;
        }
        var_v0_2 = 0;
    } else {
block_3:
        slpm_puts("CD timeout: ");
        slpm_printf("%s:(%s) Sync=%s, Ready=%s\n", (*D_80134EF8), *(((*D_80131D3D) * 4) + D_80131D44), *((M2C_FIELD(D_80131FFC, u8 *, 0) * 4) + D_80131DC4), *((M2C_FIELD(D_80131FFC, u8 *, 1) * 4) + D_80131DC4));
        slpm_CD_flush();
        var_v0_2 = -1;
    }
    var_v0 = -1;
    if (var_v0_2 == 0) {
        var_v0 = 0;
        if (*(*D_80132028) & 0x01000000) {
            var_v0 = 1;
            if (arg0 == 0) {
                goto loop_1;
            }
        }
    }
    return var_v0;
}
