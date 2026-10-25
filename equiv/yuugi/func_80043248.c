#include "common.h"

extern volatile u32 *D_80072E5C;
extern void (*D_80072E60[])();
extern u8 *D_80072E80;
extern u8 D_80010D60[], D_80010D7C[];

void func_80043248(void) {
    u32 m;
    s32 i;

    while ((m = (*D_80072E5C >> 24) & 0x7F) != 0) {
        for (i = 0; m != 0 && i < 7; i++, m >>= 1) {
            if (m & 1) {
                *D_80072E5C &= (1 << (i + 24)) | 0xFFFFFF;
                if (D_80072E60[i] != 0) {
                    D_80072E60[i]();
                }
            }
        }
    }
    if ((*D_80072E5C & 0xFF000000) == 0x80000000 || (*D_80072E5C & 0x8000)) {
        printf(D_80010D60, *D_80072E5C);
        for (i = 0; i < 7; i++) {
            printf(D_80010D7C, i, *(s32 *)(D_80072E80 + i * 16));
        }
    }
}
