#include "common.h"

void slpm_ClearImage(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    extern void * D_80131B2C[];
    func_80113C78("ClearImage", arg0);
    M2C_FIELD((*D_80131B2C), M2C_UNK (**)(s32, s32, M2C_UNK, s32), 8)(M2C_FIELD((*D_80131B2C), s32 *, 0xC), arg0, 8, ((arg3 & 0xFF) << 0x10) | ((arg2 & 0xFF) << 8) | (arg1 & 0xFF));
}
