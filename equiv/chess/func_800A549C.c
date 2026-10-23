#include "common.h"

void func_800A549C(s32 arg0) {
    extern u16 D_8008EE50[];
    u8 temp_v1;
    void *temp_a1;
    void *temp_s1;

    temp_a1 = arg0 + 0x5D0;
    temp_v1 = M2C_FIELD(temp_a1, u8 *, 0x5FA);
    temp_s1 = temp_a1 + ((temp_v1 * 0x2E8) + 0x18) + (M2C_FIELD((temp_a1 + temp_v1), u8 *, 0x5FB) * 0x7C);
    switch ((*D_8008EE50)) {                           /* irregular */
    case 0:
        func_800220B8(arg0, temp_a1);
        func_8009FD2C(arg0, temp_s1);
        func_80012628();
        /* fallthrough */
    case 1:
        if (func_800212AC(arg0, 1, 0, 0) != 0) {
            func_80012628();
            return;
        }
        return;
    case 2:
        M2C_FIELD(temp_a1, s8 *, 0x610) = (s8) (*D_8008EE50);
        func_800125AC(3, temp_a1);
        break;
    }
}
