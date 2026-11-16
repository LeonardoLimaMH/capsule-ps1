#include "common.h"

extern u8 D_8008ED68[];
extern s32 func_80019F30(s32, s32);
extern void func_800185F8(void *);

s32 func_800C64C8(s32 a0, s32 a1, u8 *a2) {
    extern u16 D_8008EE54[];
    extern s32 func_80012668(void);
    extern s32 func_800374E8(s32);
    register s32 r asm("s0") = 0;
    switch (D_8008EE54[0]) {
    case 0:
        a2[0x17] = 0x87;
        a2[0x23] = 1;
        func_80012668();
        if (a2[0] == 0x26) {
            func_800374E8(0x800a);
            r = 1;
        }
        break;
    case 1:
        if (*(s16 *)(*(u8 **)(a2 + 0x70) + 0x24) < 0) {
            r = 1;
        }
        break;
    }
    return r;
}

extern u16 D_8008EE54[];
extern s32 func_80012668(void);
extern s32 func_80034AB0(s32);

s32 func_800C7DD8();


