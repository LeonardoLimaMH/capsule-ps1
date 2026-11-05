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

s32 CD_initvol(void) {
    extern u8 * D_8007334C;
    extern u8 * D_80073350;
    extern u8 * D_80073354;
    extern u8 * D_80073358;
    extern u8 * D_80073360;
    u8 v[4];
    if (*(u16 *)(D_80073360 + 0x1B8) == 0 && *(u16 *)(D_80073360 + 0x1BA) == 0) {
        *(u16 *)(D_80073360 + 0x180) = 0x3FFF;
        *(u16 *)(D_80073360 + 0x182) = 0x3FFF;
    }
    *(u16 *)(D_80073360 + 0x1B0) = 0x3FFF;
    *(u16 *)(D_80073360 + 0x1B2) = 0x3FFF;
    *(u16 *)(D_80073360 + 0x1AA) = 0xC001;
    v[2] = 0x80;
    v[0] = 0x80;
    v[3] = 0;
    v[1] = 0;
    *D_8007334C = 2;
    *D_80073354 = v[0];
    *D_80073358 = v[1];
    *D_8007334C = 3;
    *D_80073350 = v[2];
    *D_80073354 = v[3];
    *D_80073358 = 0x20;
    return 0;
}
