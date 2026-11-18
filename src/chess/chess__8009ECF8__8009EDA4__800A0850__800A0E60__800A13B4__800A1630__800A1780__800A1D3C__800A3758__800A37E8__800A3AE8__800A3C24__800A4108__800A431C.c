#include "ghidra.h"
#include "matching.h"
#include "common.h"

void func_800A431C(u8 *arg0) {
    extern u8 D_80085428[];
    extern u8 D_8008ED68[];
    extern u8 D_80100C18[];
    s32 temp_a2;
    s32 temp_a1;
    s32 count;
    u8 *p;
    s32 value;
    s32 result;
    u8 *base = D_80085428;

    temp_a2 = *(s32 *)(arg0 + 0x5C);
    temp_a1 = *(s32 *)(arg0 + 0x70);
    if (base[0xD77] != 0) {
        func_800185F8(arg0);
        return;
    }
    count = *(s32 *)(arg0 + 0x54);
    if (D_8008ED68[0x103] >= 2U) {
        count += D_8008ED68[0x103];
    } else {
        count += 1;
    }
    *(s32 *)(arg0 + 0x54) = count;
    if (base[0xD78] == temp_a1) {
        p = D_80100C18 + temp_a2 * 4;
        value = rsin(((u32)(count << 12) / 120) & 0x7FF);
        arg0[0x38] = (value * (s32)p[0]) / 0x1000;
        arg0[0x39] = (value * (s32)p[1]) / 0x1000;
        result = (value * (s32)p[2]) / 0x1000;
    } else {
        p = D_80100C18 + temp_a2 * 4;
        value = rsin(((u32)(count << 12) / 120) & 0x7FF);
        arg0[0x38] = (value * (s32)p[0]) / 0x4000;
        arg0[0x39] = (value * (s32)p[1]) / 0x4000;
        result = (value * (s32)p[2]) / 0x4000;
    }
    arg0[0x3A] = result;
}
