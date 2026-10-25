#include "common.h"

extern u32 *D_801332B4;
extern void (*D_801332B8[])(void);
extern u8 *D_801332D8;
extern char D_80110B48[], D_80110B64[];
extern s32 slpm_printf(const char *, ...);

void func_8011B770(void) {
    u32 pend;
    s32 i;
    void (**h)(void);

    pend = (*D_801332B4 >> 24) & 0x7F;
    while (pend) {
        for (i = 0, h = D_801332B8; pend != 0 && i < 7; i++, h++, pend >>= 1) {
            if (pend & 1) {
                *D_801332B4 &= (1 << (i + 24)) | 0xFFFFFF;
                if (*h) (*h)();
            }
        }
        pend = (*D_801332B4 >> 24) & 0x7F;
    }
    if ((*D_801332B4 & 0xFF000000) == 0x80000000 || (*D_801332B4 & 0x8000)) {
        slpm_printf(D_80110B48, *D_801332B4);
        for (i = 0; i < 7; i++) slpm_printf(D_80110B64, i, *(u32 *)(D_801332D8 + i * 16));
    }
}
