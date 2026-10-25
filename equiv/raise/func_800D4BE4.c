#include "common.h"

void *func_800D4BE4(void) {
    extern s16 D_80078C20[];
    extern u8 D_800EE5D0[];
    extern s32 D_800EF320[];
    extern int func_800161C4();
    extern int func_800D4EC0();
    void *temp_v0;

    temp_v0 = func_80015B3C(&func_800D4EC0, &func_800161C4, 1);
    if (temp_v0 != NULL) {
        func_80015EF8(temp_v0);
        M2C_FIELD(temp_v0, s32 *, 0x18) = func_80019F30(M2C_FIELD(D_800EE5D0, s32 *, 0) | 0x60000, M2C_FIELD(D_800EE5D0, s32 *, 0xC) + (*D_800EF320), 0x60000);
        M2C_FIELD(temp_v0, s32 *, 0x1C) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x30) = (s32) (((M2C_FIELD(temp_v0, s32 *, 0x30) & ~0x1C0 & ~0x30) | 0x20) & ~8);
        M2C_FIELD(temp_v0, s32 *, 0x34) = (s32) ((M2C_FIELD(temp_v0, s32 *, 0x34) & ~0x100) | (((*D_80078C20) & 1) << 8));
        M2C_FIELD(temp_v0, s32 *, 0x38) = (s32) ((M2C_FIELD(temp_v0, s32 *, 0x38) | 1) & ~0x30 & ~0x40);
    }
    return temp_v0;
}
