#include "common.h"

extern u8 D_8008ED68[];
extern s32 func_80019F30(s32, s32);
extern void func_800185F8(void *);

extern u16 D_8008EE54[];
extern s32 func_80012668(void);
extern s32 func_80034AB0(s32);

s32 func_800C77A4(s32 a0, s32 a1, u8 *a2) {
    s32 r = 0;
    s32 s = D_8008EE54[0];
    switch (s) {
    case 0:
        if (a2[0x22] == a2[0x17]) {
            a2[0x17] = 0x88;
            a2[0x23] = 1;
            func_80034AB0(4);
            func_80012668();
        }
        break;
    case 1:
        if (*(s16 *)(*(u8 **)(a2 + 0x70) + 0x24) < 0) {
            a2[0x17] = s;
            *(u32 *)(a2 + 0x18) |= 0x40040;
            *(u32 *)(a2 + 0x18) |= 0x1000000;
            r = 1;
        }
        break;
    }
    return r;
}

s32 func_800C7DD8();


