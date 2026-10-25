#include "common.h"

s32 CdRead(s32 arg0, s32 arg1, s32 arg2) {
    extern u8 D_80132058[];
    s32 temp_v1;

    M2C_FIELD(D_80132058, s32 *, 0xC) = arg2;
    temp_v1 = M2C_FIELD(D_80132058, s32 *, 0xC) & 0x30;
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(D_80132058, s32 *, 0x10) = 0x200;
        break;
    case 32:
        M2C_FIELD(D_80132058, s32 *, 0x10) = 0x249;
        break;
    default:
        M2C_FIELD(D_80132058, s32 *, 0x10) = 0x246;
        break;
    }
    M2C_FIELD(D_80132058, s32 *, 0xC) = (s32) (M2C_FIELD(D_80132058, s32 *, 0xC) | 0x20);
    M2C_FIELD(D_80132058, s32 *, 4) = arg1;
    M2C_FIELD(D_80132058, s32 *, 0) = arg0;
    M2C_FIELD(D_80132058, s32 *, 0x24) = CdSyncCallback(0, arg0);
    M2C_FIELD(D_80132058, s32 *, 0x28) = CdReadyCallback(0);
    if (M2C_FIELD(D_80132058, s32 *, 0x30) & 1) {
        M2C_FIELD(D_80132058, s32 *, 0x2C) = CdDataCallback(0);
    }
    M2C_FIELD(D_80132058, s32 *, 0x1C) = slpm_VSync(-1);
    if (CdStatus() & 0xE0) {
        CdControlB(9, 0, 0);
    }
    return func_80119770(0) > 0;
}
