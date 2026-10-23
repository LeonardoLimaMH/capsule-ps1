#include "common.h"

void func_8009A30C(void *arg0, s32 arg1) {
    extern M2C_UNK D_8008ED68[];
    extern s32 D_8008F780[];
    extern s32 D_8008F7D0[];
    extern void * D_801187C0[];
    s32 temp_a0;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0xE);
    switch (temp_v1) {
    case 0:
        func_8001FD98(2);
        (*D_801187C0) = func_8001ADF8(1, 0, 2, 1);
block_13:
block_14:
        M2C_FIELD(arg0, u8 *, 0xE) = (u8) (M2C_FIELD(arg0, u8 *, 0xE) + 1);
        return;
    case 1:
        temp_a0 = func_8001FD98(2);
        if ((M2C_FIELD(arg0, u8 *, 0xF) == 1) && (temp_a0 != 0)) {
            M2C_FIELD((*D_801187C0), s32 *, 0x38) = 4;
            goto block_13;
        }
    default:
        return;
    case 2:
        if ((*D_8008F7D0) == 0) {
            M2C_FIELD(arg0, u8 *, 0xF) = 2U;
            goto block_14;
        }
        break;
    case 3:
        func_80015A74();
        if ((M2C_FIELD(arg0, u8 *, 0xF) == 3) || (arg1 != 0)) {
            if (arg1 != 0) {
                (*D_8008F780) = 1;
                func_80034AB0(0x48);
            }
            func_8001AD74(4);
            goto block_13;
        }
        break;
    case 4:
        if ((M2C_FIELD((*D_8008ED68), s32 *, 0xA68) == 0) && (func_80020EB4() != 0)) {
            M2C_FIELD(arg0, s8 *, 0xBE8) = 0;
            func_8001E310();
            func_80033974(0);
            func_80033974(0x8000);
            M2C_FIELD((*D_8008ED68), s8 *, 0x102) = 0;
            func_80013668();
            func_8001FD74();
        }
        break;
    }
}
