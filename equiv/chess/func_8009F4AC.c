#include "common.h"

void func_8009F4AC(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    extern u16 D_8008EE4C[];
    extern u16 D_8008EE50[];
    s32 temp_s2;
    s32 temp_v1;
    s32 var_s2;
    u8 temp_a1;
    u8 temp_s1;
    void *temp_a0;
    void *temp_s0;
    void *temp_s0_2;

    switch ((*D_8008EE4C)) {
    case 0:
        func_8009E448(arg0);
        return;
    case 1:
        func_8009E798(arg0, arg0 + 0x5D0);
        return;
    case 2:
        func_8009EA04(arg0 + 0x5D0);
        return;
    case 3:
        temp_s0 = arg0 + 0x5D0;
        temp_s1 = M2C_FIELD(temp_s0, u8 *, 0x5FA);
        temp_s2 = M2C_FIELD(temp_s0, u8 *, 0x624) - 5;
        if (M2C_FIELD(temp_s0, u8 *, 0x62A) != 0) {
            if (func_8009DD64(temp_s0) != 0) {
                M2C_FIELD(temp_s0, u8 *, 0x62A) = 0U;
            }
            if (M2C_FIELD(temp_s0, u8 *, 0x62A) == 0) {
                goto block_9;
            }
        } else {
block_9:
            if (func_8009DED8(temp_s0, temp_s1, temp_s2) != 0) {
                func_8009ECF8(temp_s0);
                func_80012604(4);
            }
        }
        M2C_FIELD((*D_8008ED68), s8 *, 0xA66) = 1;
        func_8002CC74();
        func_8002CD50();
        return;
    case 4:
        var_s2 = 0;
        temp_s0_2 = arg0 + 0x5D0;
        if (M2C_FIELD(temp_s0_2, u8 *, 0x62A) != 0) {
            if (func_8009DD64(temp_s0_2) != 0) {
                M2C_FIELD(temp_s0_2, u8 *, 0x62A) = 0U;
                var_s2 = 1;
            }
            M2C_FIELD((*D_8008ED68), s8 *, 0xA66) = 1;
            func_8002CC74();
            func_8002CD50();
        }
        if (var_s2 != 0) {
            M2C_FIELD(arg0, s8 *, 0xBF4) = 2;
            func_80012604(2);
            return;
        }
    default:
        return;
    case 5:
        temp_a0 = arg0 + 0x5D0;
        temp_a1 = M2C_FIELD(temp_a0, u8 *, 0x5FA);
        switch (M2C_FIELD((*D_8008ED68), u16 *, 0xE8)) { /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            M2C_FIELD(temp_a0, s8 *, 0x624) = 0xFE;
            func_80012628(temp_a0, temp_a1, 2, (*D_8008ED68));
            return;
        case 1:                                     /* switch 1 */
            M2C_FIELD(temp_a0, u8 *, 0x7A7) = 0U;
            func_8009D0AC(temp_a0, temp_a1, (*D_8008ED68));
            func_80012628();
            return;
        case 2:                                     /* switch 1 */
            temp_v1 = M2C_FIELD(((temp_a1 * 0x10) + (*D_8008ED68)), s32 *, 0x88);
            if ((temp_v1 & 0x20) || (temp_v1 & 0x40)) {
                M2C_FIELD(temp_a0, u8 *, 0x7A7) = 1U;
                func_80012628(temp_a0, temp_a1, 2, (*D_8008ED68));
                return;
            }
            break;
        case 3:                                     /* switch 1 */
            if (M2C_FIELD(temp_a0, u8 *, 0x7A7) == 2) {
                M2C_FIELD(temp_a0, s8 *, 0x624) = 8;
block_51:
                func_80012604(1);
                return;
            }
            break;
        }
        break;
    case 6:
        func_8009EDA4(arg0);
        return;
    case 7:
        func_8009EFB0(arg0);
        return;
    case 8:
        func_8009F25C(arg0);
        return;
    case 9:
        switch ((*D_8008EE50)) {                       /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            M2C_FIELD(arg0, s8 *, 0xBF4) = 0xFE;
            func_8002E708();
            func_80012628();
            return;
        case 1:                                     /* switch 2 */
            if (func_8002E714() == 4) {
                M2C_FIELD(arg0, s8 *, 0xBF4) = 0xC;
                goto block_51;
            }
            break;
        }
        break;
    case 10:
        switch ((*D_8008EE50)) {                       /* switch 3; irregular */
        case 0:                                     /* switch 3 */
            M2C_FIELD(arg0, s8 *, 0xBF4) = 0xFE;
            func_800220B8(arg0);
            func_80012628();
            return;
        case 1:                                     /* switch 3 */
            if (func_8002243C(arg0) != 0) {
                func_80012628();
                return;
            }
            break;
        case 2:                                     /* switch 3 */
            M2C_FIELD(arg0, s8 *, 0xBF4) = 0xD;
            goto block_51;
        }
        break;
    case 11:
        M2C_FIELD(arg0, s8 *, 0xBF4) = 0;
        func_800125AC(2);
        break;
    }
}
