#include "common.h"

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libcd_bios", func_80117224);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libcd_bios", slpm_CD_sync);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libcd_bios", slpm_CD_ready);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libcd_bios", slpm_CD_cw);

s32 slpm_CD_vol(void *arg0) {
    extern s8 * D_80131FE4;
    extern u8 * D_80131FE8;
    extern u8 * D_80131FEC;
    extern u8 * D_80131FF0;
    *D_80131FE4 = 2;
    *D_80131FEC = M2C_FIELD(arg0, u8 *, 0);
    *D_80131FF0 = M2C_FIELD(arg0, u8 *, 1);
    *D_80131FE4 = 3;
    *D_80131FE8 = M2C_FIELD(arg0, u8 *, 2);
    *D_80131FEC = M2C_FIELD(arg0, u8 *, 3);
    *D_80131FF0 = 0x20;
    return 0;
}

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libcd_bios", slpm_CD_flush);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libcd_bios", slpm_CD_initvol);
