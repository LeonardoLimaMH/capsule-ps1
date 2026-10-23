#include "common.h"

void slpm__spu_FiDMA(void) {
    extern void * D_801333D4[];
    extern M2C_UNK (*D_8013340C)(M2C_UNK);
    extern s32 D_80133424[];
    u32 var_v1;

    if ((*D_80133424) == 0) {
        slpm__spu_Fw1ts();
    }
    M2C_FIELD((*D_801333D4), u16 *, 0x1AA) = (u16) (M2C_FIELD((*D_801333D4), u16 *, 0x1AA) & 0xFFCF);
    if (M2C_FIELD((*D_801333D4), u16 *, 0x1AA) & 0x30) {
        var_v1 = 1;
loop_4:
        if (var_v1 < 0xF01U) {
            var_v1 += 1;
            if (M2C_FIELD((*D_801333D4), u16 *, 0x1AA) & 0x30) {
                goto loop_4;
            }
        }
    }
    if (D_8013340C != NULL) {
        D_8013340C(0xF0000000);
        return;
    }
    func_80116A84(0xF0000009, 0x20);
}
