#include "common.h"

s32 func_80119770(s32 arg0) {
    extern u8 D_80132058[];
    extern s32 D_80132064[];
    extern u8 D_80132088[];
    extern int func_80119444();
    extern int func_801196A4();
    s8 sp10;
    s32 *temp_v0;
    s32 temp_s0;
    void *temp_v1;

    CdSyncCallback(0);
    CdReadyCallback(NULL);
    if (M2C_FIELD(D_80132088, s32 *, 0) & 1) {
        CdDataCallback(NULL);
    }
    if (CdStatus() & 0x10) {
        if (!(slpm_VSync(-1) & 0x3F)) {
            slpm_puts("CdRead: Shell open...\n");
        }
        CdControlF(1, 0);
        temp_v1 = D_80132088 - 0x30;
        M2C_FIELD(temp_v1, s32 *, 0x1C) = slpm_VSync(-1);
        M2C_FIELD(temp_v1, s32 *, 0x14) = -1;
        return M2C_FIELD(temp_v1, s32 *, 0x14);
    }
    if (arg0 != 0) {
        slpm_puts("CdRead: retry...\n");
        CdControl(9, NULL, 0);
        if (CdControl(2, CdLastPos(), 0) == 0) {
            M2C_FIELD((D_80132088 - 0x30), s32 *, 0x14) = -1;
            return M2C_FIELD(D_80132088, s32 *, -0x1C);
        }
    }
    CdFlush();
    sp10 = (s8) (*D_80132064);
    temp_s0 = (*D_80132064) & 0xFF;
    if ((temp_s0 != CdMode()) || (arg0 != 0)) {
        temp_v0 = D_80132064 - 0xC;
        if (CdControl(0xE, &sp10, 0) == 0) {
            M2C_FIELD(temp_v0, s32 *, 0x14) = -1;
            return M2C_FIELD(temp_v0, s32 *, 0x14);
        }
    }
    M2C_FIELD(D_80132058, s32 *, 0x20) = CdPosToInt(CdLastPos());
    CdReadyCallback(&func_80119444);
    if (M2C_FIELD(D_80132058, s32 *, 0x30) & 1) {
        CdDataCallback(&func_801196A4);
    }
    M2C_FIELD(D_80132058, s32 *, 8) = (s32) M2C_FIELD(D_80132058, s32 *, 4);
    CdControlF(6, 0);
    M2C_FIELD(D_80132058, s32 *, 0x14) = (s32) M2C_FIELD(D_80132058, s32 *, 0);
    M2C_FIELD(D_80132058, s32 *, 0x18) = slpm_VSync(-1);
    return M2C_FIELD(D_80132058, s32 *, 0x14);
}
