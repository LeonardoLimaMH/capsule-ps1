#include "common.h"

void func_800C7070(s32 arg0, M2C_UNK arg1) {
    extern M2C_UNK D_80100F38[];
    if ((u32) (M2C_FIELD((((func_800B1260(arg1) & 0xFFFF) * 0x79C) + (*D_80100F38)), u16 *, 0x2BA) - 4) >= 2U) {
        func_800C6C48(arg0, arg1);
        return;
    }
    func_800C6E5C(arg0, arg1);
}
