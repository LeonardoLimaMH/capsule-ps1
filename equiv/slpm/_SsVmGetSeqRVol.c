#include "common.h"

s16 _SsVmGetSeqRVol(s16 arg0) {
    extern M2C_UNK D_801373F0[];
    extern s16 D_80138496[];
    (*D_80138496) = arg0;
    return M2C_FIELD((*(s32 *)((u8 *)D_801373F0 + ((arg0 & 0xFF) * 4)) + (((s32) (arg0 & 0xFF00) >> 8) * 0xB0)), s16 *, 0x5A);
}
