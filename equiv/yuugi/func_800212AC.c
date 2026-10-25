#include "common.h"

extern u8 D_8008F702;
extern u8 D_8008ED68[];
extern void func_800158C4(), func_8001E388(), func_8001E2BC(), func_80021064();
extern s32 func_80020458(), func_80021A4C(), func_8001E284();

s32 func_800212AC(u8 *p, s32 a1, s32 a2, s32 a3) {
    s32 ret = 0;

    if (D_8008F702 != 0) {
        if (p[0x12] != 0) {
            func_800158C4(*(s16 *)(p + 0x1C));
        }
        return 0;
    }
    switch (p[0x10]) {
    case 0:
        if (a3 == 0 && func_80020458(p) == 0) {
            *(s32 *)(p + 0x14) = 0;
            *(s32 *)(p + 0x24) = 0;
            *(s32 *)(p + 0x28) = 0;
            p[0x12] = 0;
            return 1;
        }
        *(s16 *)(p + 0x1E) = 0x20;
        p[0x10]++;
        break;
    case 1:
        if (func_80021A4C(p, 0) == 0) {
            if (D_8008ED68[0x103] < 2) {
                *(u16 *)(p + 0x1E) = *(u16 *)(p + 0x1E) - 1;
            } else {
                *(u16 *)(p + 0x1E) = *(u16 *)(p + 0x1E) - D_8008ED68[0x103];
            }
            break;
        }
        func_8001E388();
        *(s32 *)(p + 0x20) = func_8001E284();
        func_8001E2BC(*(s32 *)(p + 0x20), *(s32 *)(p + 0x14), -0x8E, 0x38, 0, a2 & 0xFF);
        *(s16 *)(p + 0x1E) = 0;
        p[0x10]++;
        break;
    case 2:
        func_80021064(p);
        break;
    case 3:
        if (func_80021A4C(p, 1) == 0) {
            if (D_8008ED68[0x103] < 2) {
                *(u16 *)(p + 0x1E) = *(u16 *)(p + 0x1E) + 1;
            } else {
                *(u16 *)(p + 0x1E) = *(u16 *)(p + 0x1E) + D_8008ED68[0x103];
            }
            break;
        }
        p[0x10]++;
        break;
    case 4:
        ret = p[0x11] + 1;
        *(s32 *)(p + 0x14) = 0;
        *(s32 *)(p + 0x24) = 0;
        *(s32 *)(p + 0x28) = 0;
        p[0x12] = 0;
        break;
    }
    if (p[0x12] != 0) {
        func_800158C4(*(s16 *)(p + 0x1C));
    }
    return ret;
}
