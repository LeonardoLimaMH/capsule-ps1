#include "common.h"

void func_800AB690(void) {
    extern u8 D_8002E38C[];
    extern u8 D_8008ED68[];
    extern u16 D_800B3D22[];
    extern u8 D_800B3D46[];
    extern int func_8009C970();
    M2C_UNK *var_a0;
    u16 temp_s0;

    temp_s0 = M2C_FIELD(D_8008ED68, u16 *, 0xE0);
    switch (temp_s0) {                              /* irregular */
    case 0:
        func_8001AD74(2);
        func_800339D8(-3, 0);
        func_80033974((*D_800B3D22));
        func_80012578();
        return;
    case 1:
        if (M2C_FIELD(D_8008ED68, s32 *, 0xA68) == 0) {
            if (M2C_FIELD(D_800B3D46, u8 *, 0) != 0) {
                func_800AC20C(0);
            }
            if (M2C_FIELD(D_800B3D46, u8 *, 1) != 0) {
                func_800AC20C(1);
            }
            if (M2C_FIELD(D_8008ED68, s32 *, 0xA1C) == 3) {
                M2C_FIELD(D_8008ED68, s32 *, 0xA18) = (s32) temp_s0;
                var_a0 = D_8002E38C;
            } else {
                M2C_FIELD(D_8008ED68, s32 *, 0xA18) = 3;
                var_a0 = &func_8009C970;
            }
            func_80012200(var_a0);
        }
        return;
    }
}
