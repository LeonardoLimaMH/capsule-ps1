#include "common.h"

/* registro de 0x1A8 bytes em D_80091618 (ver raise_800E2110) */
struct Rec_800B89F4 {
    u16 f0;
    u8 pad2[0xE];
    u16 f10;
    u16 f12;
    u8 pad14[0xB8];
    s32 fCC;
    u8 padD0[0xD8];
};

void func_800B89F4(s16 arg0)
{
    extern struct Rec_800B89F4 D_80091618[];
    extern struct Rec_800B89F4 D_800EFA54[];
    s32 i;
    struct Rec_800B89F4 *s;
    struct Rec_800B89F4 *d;

    if (arg0 != 0) {
        if (arg0 == 1) {
            if (D_80091618[1].f10 == 0xFFFF) {
                i = 0;
                s = D_800EFA54;
                d = &D_80091618[1];
                do {
                    *d = *s++;
                    i++;
                    d += 2;
                } while (i < 3);
            }
        }
    } else {
        for (i = 0; i < 3; i++) {
            D_80091618[i * 2 + 1].f10 = 0xFFFF;
            D_80091618[i * 2 + 1].f0 = 0xFFFF;
            D_80091618[i * 2 + 1].f12 = 0;
            D_80091618[i * 2 + 1].fCC = 0;
        }
    }
}
