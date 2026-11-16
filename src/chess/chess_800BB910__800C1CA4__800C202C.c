#include "ghidra.h"
#include "common.h"

u8 func_800C202C(u8 *arg0, u8 arg1, u8 arg2) {
    extern u8 *func_800A8E84(u8 *);
    extern s32 func_800D7CFC(u8, u8);
    extern s32 func_800D7F64(u8, u8);
    extern s32 func_800D80F8(u8, u8);
    extern s32 func_800D7E94(u8, u8);
    u8 ret;

    switch ((s32)((*(u32 *)(func_800A8E84(arg0) + 0x10) >> 2) & 0x1F)) {
    case 1:
        ret = func_800D7CFC(arg1, arg2);
        break;
    case 0x13:
        ret = func_800D7F64(arg1, arg2);
        break;
    case 6:
        ret = func_800D80F8(arg1, arg2);
        break;
    default:
        ret = func_800D7E94(arg1, arg2);
        break;
    }
    return ret;
}
