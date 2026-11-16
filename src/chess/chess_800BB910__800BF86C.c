#include "ghidra.h"
#include "common.h"




void func_800BF86C(u8 *arg0, s32 arg1) {
    extern u16 D_8008EE50[];

    switch (*D_8008EE50) {
    case 0:
        if (func_800C9414() != 0) {
            return;
        }
        if (func_800A0AD4(arg0, arg0[0xBCA], arg1, 0) == 0) {
            func_8001264C(2);
            return;
        }
        goto label_220b8;

    case 1:
        if (func_800220D4(arg0, 1, arg0[0xBCA], 0) != 0) {
            goto label_1264c_4;
        }
        return;

    case 2:
        if (func_800A0AD4(arg0, 1 - arg0[0xBCA], arg1, 0) == 0) {
            goto label_1264c_4;
        }
label_220b8:
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
        func_800125D8();
        return;
    }
}



