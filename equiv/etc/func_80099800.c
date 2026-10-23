#include "common.h"

void func_80099800(void) {
    extern M2C_UNK D_8001FF50[];
    extern M2C_UNK D_80085428[];
    extern M2C_UNK D_8008ED68[];
    extern M2C_UNK D_800AEF08[];
    extern s16 D_800B3ACC[];
    extern M2C_UNK func_8009C970[];
    extern M2C_UNK func_800A4A28[];
    s16 temp_s0;

    if (M2C_FIELD((*D_80085428), u8 *, 0x5CB) != 4) {
        func_8002E714(-0x80);
        return;
    }
    func_8001F1A8(-0x80, 0x50, 0, 1, 0, ((*D_800B3ACC) * 0x24) + (*D_800AEF08), 1, 0x12, 3);
    if ((M2C_FIELD((*D_8008ED68), s32 *, 0x88) & 0x1000) || (M2C_FIELD((*D_8008ED68), s32 *, 0x98) & 0x1000)) {
        if ((*D_800B3ACC) != 2) {
            if ((*D_800B3ACC) == 3) {
                goto block_21;
            }
        } else {
            goto block_15;
        }
    } else if ((M2C_FIELD((*D_8008ED68), s32 *, 0x88) & 0x4000) || (M2C_FIELD((*D_8008ED68), s32 *, 0x98) & 0x4000)) {
        if ((*D_800B3ACC) != 0) {
            if ((*D_800B3ACC) == 1) {
                goto block_23;
            }
        } else {
            goto block_17;
        }
    } else if ((M2C_FIELD((*D_8008ED68), s32 *, 0x88) & 0x8000) || (M2C_FIELD((*D_8008ED68), s32 *, 0x98) & 0x8000)) {
        if ((*D_800B3ACC) == 1) {
block_15:
            func_80034AB0(0x84);
            (*D_800B3ACC) = 0;
        } else if ((*D_800B3ACC) == 3) {
block_17:
            func_80034AB0(0x84);
            (*D_800B3ACC) = 2;
        }
    } else if ((M2C_FIELD((*D_8008ED68), s32 *, 0x88) & 0x2000) || (M2C_FIELD((*D_8008ED68), s32 *, 0x98) & 0x2000)) {
        if ((*D_800B3ACC) == 0) {
block_21:
            func_80034AB0(0x84);
            (*D_800B3ACC) = 1;
        } else if ((*D_800B3ACC) == 2) {
block_23:
            func_80034AB0(0x84);
            (*D_800B3ACC) = 3;
        }
    }
    if ((M2C_FIELD((*D_8008ED68), s32 *, 0x88) & 0x830) || (M2C_FIELD((*D_8008ED68), s32 *, 0x98) & 0x830)) {
        func_80034AB0(0x48);
        temp_s0 = (*D_800B3ACC);
        switch (temp_s0) {                          /* irregular */
        case 0:
            func_80034BD8(-3, 0);
            func_80033974(0x7003);
            func_80013668();
            M2C_FIELD((*D_80085428), s8 *, 0) = 0;
            func_80012200((*D_8001FF50));
            return;
        case 1:
            func_80034BD8(-3, 0);
            func_80033974(0x7003);
            func_80013668();
            M2C_FIELD((*D_80085428), s8 *, 0) = (s8) temp_s0;
            func_80012200((*func_8009C970));
            return;
        case 2:
            func_80034BD8(-3, 0);
            func_80033974(0x7003);
            func_80013668();
            func_80012200((*func_800A4A28));
            return;
        case 3:
            func_8002E708();
            M2C_FIELD((*D_80085428), u8 *, 0x5CB) = 0U;
            (*D_800B3ACC) = 0;
            break;
        }
    }
}
