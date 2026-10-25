#include "common.h"

void slpm_StoreImage(s32 arg0, M2C_UNK arg1) {
    extern void * D_80131B2C[];
    func_80113C78("StoreImage", arg0);
    M2C_FIELD((*D_80131B2C), M2C_UNK (**)(s32, s32, M2C_UNK, M2C_UNK), 8)(M2C_FIELD((*D_80131B2C), s32 *, 0x1C), arg0, 8, arg1);
}
