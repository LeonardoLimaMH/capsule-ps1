#include "common.h"

void func_800AD4D8(void *arg0) {
    extern u16 D_8008EE4C[];
    extern u16 D_8008EE50[];
    extern s32 D_801187D0[];
    extern s32 D_801187D8[];
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a2;
    void *temp_s0;
    void *temp_s0_2;

    switch ((*D_8008EE4C)) {
    case 0:
        temp_s0 = arg0 + 0x5D0;
        M2C_FIELD(temp_s0, s8 *, 0x615) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x61F) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x610) = 0;
        M2C_FIELD(temp_s0, u8 *, 0x5FA) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x5FA) ^ 1);
        func_8009BEE0(temp_s0);
        func_8001A998(temp_s0 + ((M2C_FIELD(temp_s0, u8 *, 0x5FA) * 6) + 0x5EC), 6);
        func_800CA87C(arg0);
        func_800C8BF4(arg0);
        func_800CACC4(arg0);
        func_800CAD74(arg0);
        func_800125D8();
        return;
    case 1:
        switch ((*D_8008EE50)) {                       /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            temp_v0 = func_800A0E60(arg0, M2C_FIELD(arg0, u8 *, 0xBCA), 0);
            (*D_801187D0) = temp_v0;
            if (temp_v0 != 0) {
                (*D_801187D0) = temp_v0 - 1;
block_26:
                func_800220B8(arg0);
                func_80012628();
                return;
            }
block_27:
            func_8001264C(2);
            return;
        case 1:                                     /* switch 1 */
            var_a2 = (*D_801187D0);
block_29:
            if (func_800220D4(arg0, 1, var_a2, 0) != 0) {
                func_80012628();
                return;
            }
        default:
            return;
        case 2:                                     /* switch 1 */
            func_80012604(2);
            return;
        }
        break;
    case 2:
        func_800AD06C(arg0);
        return;
    case 3:
        if (M2C_FIELD(arg0, u8 *, 0xD77) != 0) {
            M2C_FIELD(arg0, s8 *, 0xBE5) = 2;
            M2C_FIELD(arg0, s8 *, 0xBE6) = 0xFF;
            func_800125D8();
            return;
        }
        break;
    case 4:
        func_800AD240(arg0);
        return;
    case 5:
        func_800AD408(arg0);
        return;
    case 6:
        switch ((*D_8008EE50)) {                       /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            temp_v0_2 = func_800A0E60(arg0, M2C_FIELD(arg0, u8 *, 0xBCA), 1);
            (*D_801187D8) = temp_v0_2;
            if (temp_v0_2 != 0) {
                (*D_801187D8) = temp_v0_2 - 1;
                goto block_26;
            }
            goto block_27;
        case 1:                                     /* switch 2 */
            var_a2 = (*D_801187D8);
            goto block_29;
        case 2:                                     /* switch 2 */
            func_80012604(7);
            return;
        }
        break;
    case 7:
        temp_s0_2 = arg0 + 0x5D0;
        M2C_FIELD(temp_s0_2, s8 *, 0x61C) = func_800CB10C(arg0, temp_s0_2, 1);
        M2C_FIELD(temp_s0_2, s8 *, 0x61D) = func_800CB24C(arg0, temp_s0_2, 1);
        M2C_FIELD(temp_s0_2, s8 *, 0x619) = 1;
        M2C_FIELD(temp_s0_2, s8 *, 0x610) = 1;
        M2C_FIELD(temp_s0_2, s8 *, 0x615) = 1;
        if (M2C_FIELD(temp_s0_2, u8 *, 0x5FA) == M2C_FIELD(temp_s0_2, u8 *, 0xA)) {
            M2C_FIELD(temp_s0_2, u16 *, 0x608) = (u16) (M2C_FIELD(temp_s0_2, u16 *, 0x608) + 1);
        }
        func_800AF9D4(arg0);
        func_800125AC(2);
        break;
    }
}
