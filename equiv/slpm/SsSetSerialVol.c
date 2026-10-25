#include "common.h"

typedef struct {
    u32 mask;
    s16 mvol[2], mvolmode[2], mvolx[2];
    s16 cdvol[2];
    s32 cdrev, cdmix;
    s16 extvol[2];
    s32 extrev, extmix;
} CommonAttr;
extern void slpm_SpuSetCommonAttr(CommonAttr *);

void SsSetSerialVol(s8 s, s16 l, s16 r) {
    CommonAttr c;
    if (s == 0) {
        c.mask = 0xC0;
        if (l >= 0x80) l = 0x7F;
        if (r >= 0x80) r = 0x7F;
        c.cdvol[0] = l * 258;
        c.cdvol[1] = r * 258;
    }
    if (s == 1) {
        c.mask = 0xC00;
        if (l >= 0x80) l = 0x7F;
        if (r >= 0x80) r = 0x7F;
        c.extvol[0] = l * 258;
        c.extvol[1] = r * 258;
    }
    slpm_SpuSetCommonAttr(&c);
}
