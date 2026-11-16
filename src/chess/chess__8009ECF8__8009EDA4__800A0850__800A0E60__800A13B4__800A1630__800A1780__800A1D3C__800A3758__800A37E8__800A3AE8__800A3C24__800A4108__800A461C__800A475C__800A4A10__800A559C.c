#include "ghidra.h"
#include "matching.h"
#include "common.h"






void func_800A559C(u8 *arg0) {
    extern u8 D_8008ED68[];
    extern u16 D_8008EE50[];
    u8 *p;

    switch (*D_8008EE50) {
    case 0:
        if (func_800A0540(arg0, arg0[0xBCA]) != 0) {
            goto label_clean;
        }
        func_8001264C(2);
        return;

    case 1:
        if (func_800220D4(arg0, 1, arg0[0xBCA], 0) != 0) {
            goto label_1264c_4;
        }
        return;

    case 2:
        if (func_800A0540(arg0, 1 - arg0[0xBCA]) == 0) {
            goto label_1264c_4;
        }
label_clean:
        arg0[0xCFD] = 0;
        arg0[0xBEB] = 0;
        arg0[0xBE0] = 0;
        func_800220B8(arg0);
        func_80012628();
        return;

label_1264c_4:
        func_8001264C(4);
        return;

    case 3:
        if (func_800220D4(arg0, 1, 1 - arg0[0xBCA], 0) != 0) {
            func_80012628();
        }
        return;

    case 4:
        arg0[0xBEB] = 1;
        if (*(arg0 + arg0[0xBCA] + 0x5E0) == 0) {
            func_80012604(3);
            return;
        }
        *(s16 *)(arg0 + 0xC) = 0;
        p = D_8008ED68;
        p[0x102] = 2;
        func_80012604(2);
        func_8001264C(1);
        func_80012684(*(u16 *)(p + 0x99C));
        break;
    }
}



