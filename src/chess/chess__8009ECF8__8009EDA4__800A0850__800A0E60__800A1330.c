#include "ghidra.h"
#include "matching.h"
#include "common.h"

s32 func_800A1330(u8 *arg0, u32 arg1) {
    extern s32 D_80065310[];
    register u8 *p asm("a2") = arg0 + arg1;
    register u32 id asm("v1") = p[0x5E4];
    register u32 index asm("a2");
    register s32 *table asm("v1");
    register u32 offset asm("v0");

    if (id == 0xFF) {
        return 0;
    }
    if (arg1 != arg0[0xBCA]) {
        return 0;
    }
    index = id;
    if (index >= 8) {
        arg1 = 0;
    } else {
        arg1 = arg1 * 0x980 - 0x5580;
    }
    table = D_80065310;
    offset = index * 4;
    offset = (u32)table + offset;
    *(s32 *)(arg0 + 0x14) = *(s32 *)(*(s32 *)offset + arg1 + 0x74) + arg1;
    return 1;
}
