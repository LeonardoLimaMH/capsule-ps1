#include "common.h"

s16 _SsVmGetSeqVol(s16 arg0, u16 *arg1, u16 *arg2) {
    extern M2C_UNK D_801373F0[];
    extern s16 D_80138496[];
    void *temp_v1;

    (*D_80138496) = arg0;
    temp_v1 = *(s32 *)((u8 *)D_801373F0 + ((arg0 & 0xFF) * 4)) + (((s32) (arg0 & 0xFF00) >> 8) * 0xB0);
    *arg1 = M2C_FIELD(temp_v1, u16 *, 0x58);
    *arg2 = M2C_FIELD(temp_v1, u16 *, 0x5A);
    return (*D_80138496);
}
