#include "common.h"

s32 func_800C8368(s32 arg0, void *arg1, s32 arg2, s32 arg3) {
    extern u16 D_8008EE54[];
    s32 ret;
    u8 *temp_s0;
    s32 temp_s6;

    temp_s0 = (u8 *)arg1 + (arg2 * 0x2E8 + 0x18) + (arg3 * 0x7C);
    temp_s6 = *(s32 *)(temp_s0 + 0x70);
    ret = 0;

    switch (D_8008EE54[0]) {
    case 0:
        func_800CAA44(arg0, temp_s0);
        temp_s0[0x6B] = (temp_s0[0xE] * 9) / 10;
        *(u8 *)((u8 *)arg1 + 0x715) = 0;
        if (temp_s0[0x6B] == 0) {
            temp_s0[0x6B] = 1;
        }
        *(s16 *)((u8 *)arg1 + 0x710) = temp_s0[0x6B] - temp_s0[0xE];
        func_800C471C(arg0, temp_s6, arg2, arg3);
        *(u8 *)((u8 *)arg1 + 0x70E) = 0;
        *(u8 *)((u8 *)arg1 + 0x70D) = 0;
        func_800C44BC(arg0, temp_s6, arg2, arg3, 0);
        *(u8 *)((u8 *)arg1 + 0x7A4) = 0;
        func_80012668();
        break;
    case 1:
        func_800B3218(arg0, 0);
        if (*(u8 *)((u8 *)arg1 + 0x7A4) >= 0x29U) {
            func_80012668();
        }
        break;
    case 2:
        if (func_800B3218(arg0, 1) != 0) {
            *(u8 *)((u8 *)arg1 + 0x70D) = 1;
            ret = 1;
        }
        break;
    }
    return ret;
}
