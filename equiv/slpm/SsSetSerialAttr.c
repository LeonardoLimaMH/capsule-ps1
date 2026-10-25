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

void SsSetSerialAttr(s8 s, s8 attr, s8 mode) {
    CommonAttr c;
    if (s == 0) {
        if (attr == 0) { c.mask = 0x200; c.cdmix = mode; }
        if (attr == 1) { c.mask = 0x100; c.cdrev = mode; }
    }
    if (s == 1) {
        if (attr == 0) { c.mask = 0x2000; c.extmix = mode; }
        if (attr == 1) { c.mask = 0x1000; c.extrev = mode; }
    }
    slpm_SpuSetCommonAttr(&c);
}
