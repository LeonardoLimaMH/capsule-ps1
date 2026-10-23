#include "common.h"

s32 MoveImage(void *arg0, s32 arg1, s32 arg2) {
    extern void * D_80078914;
    extern M2C_UNK D_800789BC;
    s32 var_v0;

    func_80049BC0("MoveImage", arg0);
    var_v0 = -1;
    if (M2C_FIELD(arg0, s16 *, 4) != 0) {
        if (M2C_FIELD(arg0, s16 *, 6) == 0) {
            return -1;
        }
        M2C_FIELD(D_800789BC, s32 *, 4) = (s32) ((arg2 << 0x10) | (arg1 & 0xFFFF));
        M2C_FIELD(D_800789BC, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0);
        M2C_FIELD(D_800789BC, s32 *, 8) = (s32) M2C_FIELD(arg0, s16 *, 4);
        var_v0 = M2C_FIELD(D_80078914, s32 (**)(s32, void *, M2C_UNK, M2C_UNK), 8)(M2C_FIELD(D_80078914, s32 *, 0x18), D_800789BC - 8, 0x14, 0);
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
