#include "common.h"

void _spu_FiDMA(void) {
    extern void * D_80071598[];
    extern M2C_UNK (*D_800715D0)(M2C_UNK);
    extern s32 D_800715E8[];
    u32 var_v1;

    if ((*D_800715E8) == 0) {
        _spu_Fw1ts();
    }
    M2C_FIELD((*D_80071598), u16 *, 0x1AA) = (u16) (M2C_FIELD((*D_80071598), u16 *, 0x1AA) & 0xFFCF);
    if (M2C_FIELD((*D_80071598), u16 *, 0x1AA) & 0x30) {
        var_v1 = 1;
loop_4:
        if (var_v1 < 0xF01U) {
            var_v1 += 1;
            if (M2C_FIELD((*D_80071598), u16 *, 0x1AA) & 0x30) {
                goto loop_4;
            }
        }
    }
    if (D_800715D0 != NULL) {
        D_800715D0(0xF0000000);
        return;
    }
    func_8004FE2C(0xF0000009, 0x20);
}
