#include "common.h"

void func_800A5714(void *arg0) {
    extern u16 D_8008EE50[];
    extern s32 D_801187C8[];
    u8 temp_v1;
    void *temp_a1;
    void *temp_s1;

    temp_a1 = arg0 + 0x5D0;
    temp_v1 = M2C_FIELD(temp_a1, u8 *, 0x5FA);
    temp_s1 = temp_a1 + ((temp_v1 * 0x2E8) + 0x18) + (M2C_FIELD((temp_a1 + temp_v1), u8 *, 0x5FB) * 0x7C);
    switch ((*D_8008EE50)) {
    case 0:
        if (func_800C9414((*D_8008EE50), temp_a1) == 0) {
            if (M2C_FIELD(temp_s1, u8 *, 0x6A) != 0) {
                func_80012628();
                return;
            }
block_8:
            func_8001264C(4);
            return;
        }
    default:
        return;
    case 1:
        (*D_801187C8) = 0;
        func_800220B8(arg0, temp_a1);
        M2C_FIELD(arg0, s16 *, 0x1E) = 0x20;
        func_80012628();
        /* fallthrough */
    case 2:
        func_8009F98C(arg0, temp_s1);
        M2C_FIELD(arg0, s8 *, 0x10) = 1;
        func_80012628();
        /* fallthrough */
    case 3:
        if (func_800212AC(arg0, 1, 0, 0) != 0) {
            goto block_8;
        }
        break;
    case 4:
        M2C_FIELD(temp_a1, s8 *, 0x610) = 2;
        func_800125AC(3, temp_a1);
        break;
    }
}
