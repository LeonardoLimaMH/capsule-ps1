#include "common.h"

void slpm_DrawPrim(void *arg0) {
    extern void * D_80131B2C;
    u8 temp_s1;

    temp_s1 = M2C_FIELD(arg0, u8 *, 3);
    M2C_FIELD(D_80131B2C, M2C_UNK (**)(M2C_UNK), 0x3C)(0);
    M2C_FIELD(D_80131B2C, M2C_UNK (**)(void *, u8), 0x14)(arg0 + 4, temp_s1);
}
