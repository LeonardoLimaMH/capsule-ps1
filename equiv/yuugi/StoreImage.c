#include "common.h"

void StoreImage(s32 arg0, M2C_UNK arg1) {
    extern void * D_80078914[];
    func_80049BC0("StoreImage", arg0);
    M2C_FIELD((*D_80078914), M2C_UNK (**)(s32, s32, M2C_UNK, M2C_UNK), 8)(M2C_FIELD((*D_80078914), s32 *, 0x1C), arg0, 8, arg1);
}
