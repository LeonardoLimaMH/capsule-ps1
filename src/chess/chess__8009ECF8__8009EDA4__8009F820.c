#include "ghidra.h"
#include "matching.h"
#include "common.h"

void func_8009F820(void *arg0) {
    extern u8 D_80085428[];
    u16 temp_v1;
    u32 temp_v0;
    u32 temp_v0_2;
    u8 *p = D_80085428;

    temp_v1 = M2C_FIELD(arg0, u16 *, 0x7A);
    switch (temp_v1) {
    case 0:
        M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
        M2C_FIELD(arg0, s32 *, 0x38) = (M2C_FIELD(arg0, s32 *, 0x38) & ~1) | 8;
        M2C_FIELD(arg0, u16 *, 0x7A) = M2C_FIELD(arg0, u16 *, 0x7A) + 1;
    case 1:
        temp_v0 = M2C_FIELD(arg0, u32 *, 0x3C) + 1;
        M2C_FIELD(arg0, u32 *, 0x3C) = temp_v0;
        if (temp_v0 >= 0x1AU) {
            M2C_FIELD(arg0, s32 *, 0x38) = M2C_FIELD(arg0, s32 *, 0x38) & ~8;
            M2C_FIELD(arg0, u16 *, 0x7A) = M2C_FIELD(arg0, u16 *, 0x7A) + 1;
            func_80012628();
        }
        break;
    case 2:
        if (p[0xD77] != 0) {
            M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
            M2C_FIELD(arg0, s32 *, 0x38) = M2C_FIELD(arg0, s32 *, 0x38) | 8;
            M2C_FIELD(arg0, u16 *, 0x6A) = -M2C_FIELD(arg0, u16 *, 0x6A);
            M2C_FIELD(arg0, u16 *, 0x6E) = -M2C_FIELD(arg0, u16 *, 0x6E);
            M2C_FIELD(arg0, u16 *, 0x7A) = M2C_FIELD(arg0, u16 *, 0x7A) + 1;
    case 3:
            temp_v0_2 = M2C_FIELD(arg0, u32 *, 0x3C) + 1;
            M2C_FIELD(arg0, u32 *, 0x3C) = temp_v0_2;
            if (temp_v0_2 >= 0x1AU) {
                func_80012628();
                func_800185F8(arg0);
            }
        }
        break;
    }
}








