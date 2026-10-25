#include "common.h"

extern u8 D_80132058[];
extern s32 (*D_80132054)(s32, s32);
extern void CdSyncCallback(s32), CdReadyCallback(s32), CdDataCallback(s32);
extern s32 CdControlF(s32, u8 *);

#define S32(o) (*(s32 *)(D_80132058 + (o)))

s32 func_801196A4(void) {
    S32(8) += S32(0x10) * 4;
    S32(0x14)--;
    S32(0x20)++;
    if (S32(0x14) != 0) return S32(0x14);
    CdSyncCallback(S32(0x24));
    CdReadyCallback(S32(0x28));
    if (S32(0x30) & 1) CdDataCallback(S32(0x2C));
    CdControlF(9, 0);
    if (D_80132054) return D_80132054(2, S32(0x34));
    return 0;
}
