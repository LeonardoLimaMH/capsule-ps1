#include "common.h"

void func_800CA2C8(s32 arg0, s32 arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5) {
    extern M2C_UNK D_8008ED68[];
    func_800CA00C(1, (s16) (arg0 + ((s32) M2C_FIELD((*D_8008ED68), s32 *, 0x108) / 2)), (s16) (arg1 + ((s32) M2C_FIELD((*D_8008ED68), s32 *, 0x10C) / 2)), arg2, (s32) arg3, (s32) (s16) arg4, arg5, 1);
}
