#include "common.h"

void func_80119444(s32 arg0, s32 arg1) {
    extern M2C_UNK (*D_80132054)(M2C_UNK, s32);
    extern u8 D_80132058[];
    extern s32 D_80132078[];
    extern u8 D_80132088[];
    extern int func_801196A4();
    M2C_UNK sp10;
    M2C_UNK var_a0;
    void *temp_a0;

    M2C_FIELD(D_80132058, s32 *, 0x34) = arg1;
    if ((arg0 & 0xFF) == 1) {
        if (M2C_FIELD(D_80132058, s32 *, 0x14) > 0) {
            if (M2C_FIELD(D_80132058, s32 *, 0x10) == 0x200) {
                if (M2C_FIELD(D_80132058, s32 *, 0x30) & 1) {
                    CdDataCallback(NULL, D_80132058);
                    CdGetSector2(&sp10, 3);
                    CdDataSync(0);
                    CdDataCallback(&func_801196A4);
                } else {
                    CdGetSector(&sp10, 3);
                }
                if (CdPosToInt(&sp10) != (*D_80132078)) {
                    slpm_puts("CdRead: sector error\n");
                    M2C_FIELD((D_80132078 - 0x20), s32 *, 0x14) = -1;
                }
            }
            if (M2C_FIELD(D_80132088, s32 *, 0) & 1) {
                CdGetSector2(M2C_FIELD(D_80132088, u8 **, -0x28), M2C_FIELD(D_80132088, s32 *, -0x20));
            } else {
                CdGetSector(M2C_FIELD(D_80132088, u8 **, -0x28), M2C_FIELD(D_80132088, s32 *, -0x20));
                temp_a0 = D_80132088 - 0x30;
                M2C_FIELD(temp_a0, void **, 8) = (void *) (M2C_FIELD(D_80132088, u8 **, -0x28) + (M2C_FIELD(D_80132088, s32 *, -0x20) * 4));
                M2C_FIELD(temp_a0, s32 *, 0x14) = (s32) (M2C_FIELD(temp_a0, s32 *, 0x14) - 1);
                M2C_FIELD(temp_a0, s32 *, 0x20) = (s32) (M2C_FIELD(temp_a0, s32 *, 0x20) + 1);
            }
        }
    } else {
        M2C_FIELD(D_80132058, s32 *, 0x14) = -1;
    }
    M2C_FIELD(D_80132058, s32 *, 0x18) = slpm_VSync(-1);
    if (M2C_FIELD(D_80132058, s32 *, 0x14) < 0) {
        func_80119770(1);
    }
    if ((M2C_FIELD(D_80132058, s32 *, 0x1C) + 0x4B0) < slpm_VSync(-1)) {
        M2C_FIELD(D_80132058, s32 *, 0x14) = -1;
    }
    if ((M2C_FIELD(D_80132058, s32 *, 0x14) == 0) || ((M2C_FIELD(D_80132058, s32 *, 0x1C) + 0x4B0) < slpm_VSync(-1))) {
        CdSyncCallback(M2C_FIELD(D_80132058, s32 *, 0x24));
        CdReadyCallback(M2C_FIELD(D_80132058, s32 *, 0x28));
        if (M2C_FIELD(D_80132058, s32 *, 0x30) & 1) {
            CdDataCallback(M2C_FIELD(D_80132058, u8 **, 0x2C));
        }
        CdControlF(9, 0);
        if (D_80132054 != NULL) {
            var_a0 = 5;
            if (M2C_FIELD(D_80132058, s32 *, 0x14) == 0) {
                var_a0 = 2;
            }
            D_80132054(var_a0, arg1);
        }
    }
}
