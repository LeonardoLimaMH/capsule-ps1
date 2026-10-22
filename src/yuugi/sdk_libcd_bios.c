#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libcd_bios", func_800459CC);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libcd_bios", CD_sync);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libcd_bios", CD_ready);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libcd_bios", CD_cw);

s32 CD_vol(void *arg0) {
    extern s8 * D_8007334C;
    extern u8 * D_80073350;
    extern u8 * D_80073354;
    extern u8 * D_80073358;
    *D_8007334C = 2;
    *D_80073354 = M2C_FIELD(arg0, u8 *, 0);
    *D_80073358 = M2C_FIELD(arg0, u8 *, 1);
    *D_8007334C = 3;
    *D_80073350 = M2C_FIELD(arg0, u8 *, 2);
    *D_80073354 = M2C_FIELD(arg0, u8 *, 3);
    *D_80073358 = 0x20;
    return 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libcd_bios", CD_flush);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libcd_bios", CD_initvol);
