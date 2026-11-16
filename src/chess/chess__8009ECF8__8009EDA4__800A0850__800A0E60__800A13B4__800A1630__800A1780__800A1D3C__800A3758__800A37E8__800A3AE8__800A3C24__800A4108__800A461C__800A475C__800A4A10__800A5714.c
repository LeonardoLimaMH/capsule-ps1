#include "ghidra.h"
#include "matching.h"
#include "common.h"






void func_800A5714(u8 *arg0) {
    extern u16 D_8008EE50[];
    extern s32 D_801187C8[];
    u8 index;
    u8 *base;
    u8 *object;
    u8 *selection;
    base = arg0 + 0x5D0;
    index = base[0x5FA];
    selection = base + index;
    object = base + (index * 0x2E8 + 0x18) + selection[0x5FB] * 0x7C;
    switch (*D_8008EE50) {
    case 0:
        if (func_800C9414() == 0) {
            if (object[0x6A] != 0) {
                func_80012628();
            } else {
                func_8001264C(4);
            }
        }
        break;
    case 1:
        *D_801187C8 = 0;
        func_800220B8(arg0);
        *(s16 *)(arg0 + 0x1E) = 0x20;
        func_80012628();
        /* Continua no estado seguinte. */
    case 2:
        func_8009F98C(arg0, object);
        arg0[0x10] = 1;
        func_80012628();
        /* Continua no estado seguinte. */
    case 3:
        if (func_800212AC(arg0, 1, 0, 0) != 0) {
            func_8001264C(4);
        }
        break;
    case 4:
        base[0x610] = 2;
        func_800125AC(3);
        break;
    }
}



