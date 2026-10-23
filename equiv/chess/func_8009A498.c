#include "common.h"

void func_8009A498(void *arg0) {
    extern u16 D_8008EE48[];
    extern M2C_UNK D_801010B0[];
    M2C_UNK var_a1;
    s32 var_s0;
    u8 temp_v1;

    switch ((*D_8008EE48)) {
    case 0:
        func_80013668();
        func_8009B23C(arg0);
        M2C_FIELD(arg0, s8 *, 0xBE8) = 0;
        func_80012578();
        return;
    case 1:
        var_s0 = 0;
        if (M2C_FIELD(arg0, u8 *, 0x5D0) == 0) {
            temp_v1 = M2C_FIELD(arg0, u8 *, 0x5D4);
            var_s0 = 2;
            if (temp_v1 != 7) {
                var_s0 = temp_v1 == 6;
            }
        }
        if (M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x5D9) * 0x34) + (*D_801010B0)), u8 *, 8) == 0) {
            var_a1 = 0;
        } else {
            var_a1 = 1;
        }
        func_80014D30(0, var_a1, var_s0);
        func_8009BFD4(arg0, 0, var_s0);
        func_80012578();
        return;
    case 2:
        func_8009BFD4(arg0, 2, 0);
        func_8009BFD4(arg0, 3, 0);
        M2C_FIELD(arg0, s16 *, 0xC) = 0;
        func_80012578();
        return;
    case 3:
        M2C_FIELD(arg0, s8 *, 0xBE8) = 1;
        func_8001611C(0x1000);
        func_8001AD48(8);
        func_80012578();
        return;
    case 4:
        func_80012508();
        /* fallthrough */
    default:
        return;
    }
}
