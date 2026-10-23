#include "common.h"

void func_800B8A0C(void *arg0) {
    extern u16 D_8008EE4C[];
    extern u16 D_8008EE50[];
    u16 temp_v0;
    u16 temp_v0_2;
    u8 temp_a0;
    u8 temp_a2;
    u8 temp_a3;
    u8 temp_s0_2;
    u8 temp_s0_3;
    u8 temp_s2;
    u8 temp_v1;
    u8 var_v0;
    void *temp_a1;
    void *temp_s0;
    void *temp_s3;
    void *temp_v1_2;

    switch ((*D_8008EE4C)) {
    case 0:
        temp_a1 = arg0 + 0x5D0;
        temp_a2 = M2C_FIELD(temp_a1, u8 *, 0x5FA);
        temp_a0 = M2C_FIELD(temp_a1, u8 *, 0x716);
        temp_a3 = M2C_FIELD((temp_a1 + temp_a2), u8 *, 0x5FB);
        switch ((*D_8008EE50)) {                       /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            if ((u32) (temp_a0 - 5) < 2U) {
block_18:
                func_80012628();
                return;
            }
block_12:
            func_800125D8();
            return;
        case 1:                                     /* switch 1 */
            if (temp_a0 == 5) {
                var_v0 = func_800C8368(arg0, temp_a1, temp_a2, temp_a3);
            } else {
                var_v0 = func_800C8528(arg0, temp_a1, temp_a2, temp_a3);
            }
block_40:
            if (var_v0 != 0) {
                goto block_12;
            }
        default:
            return;
        }
        break;
    case 1:
        func_800B80E4(arg0);
        return;
    case 2:
        temp_s0 = arg0 + 0x5D0;
        temp_v1 = M2C_FIELD(temp_s0, u8 *, 0x5FA);
        temp_v1_2 = temp_s0 + ((temp_v1 * 0x2E8) + 0x18) + (M2C_FIELD((temp_s0 + temp_v1), u8 *, 0x5FB) * 0x7C);
        func_800B7D64(arg0, M2C_FIELD(temp_v1_2, u8 *, 0x15), M2C_FIELD(temp_v1_2, u8 *, 0x16), M2C_FIELD(temp_s0, u8 *, 0x716));
        M2C_FIELD(temp_s0, s8 *, 0x610) = 4;
        goto block_12;
    case 3:
        temp_s0_2 = M2C_FIELD(arg0, u8 *, 0xCE6);
        switch ((*D_8008EE50)) {                       /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            if (M2C_FIELD(arg0, u8 *, 0xCE7) != 0) {
                func_800220B8(arg0);
                func_8009FD78(arg0, temp_s0_2);
                goto block_18;
            }
            break;
        case 1:                                     /* switch 2 */
            var_v0 = func_800212AC(arg0, 1, 2, 1);
            goto block_40;
        }
        break;
    case 4:
        if (M2C_FIELD(arg0, u8 *, 0xCE7) != 2) {
            return;
        }
        goto block_12;
    case 5:
        func_800B81E0(arg0);
        return;
    case 6:
        temp_s3 = arg0 + 0x5D0;
        temp_s2 = M2C_FIELD(temp_s3, u8 *, 0x5FA);
        temp_s0_3 = M2C_FIELD((temp_s3 + temp_s2), u8 *, 0x5FB);
        switch ((*D_8008EE50)) {                       /* switch 3; irregular */
        case 0:                                     /* switch 3 */
            func_800A87C8(arg0, temp_s2, temp_s0_3, 2);
            func_800CB9F4(temp_s3, temp_s2, temp_s0_3);
            M2C_FIELD(arg0, u16 *, 0xC) = 0U;
            goto block_18;
        case 1:                                     /* switch 3 */
            temp_v0 = M2C_FIELD(arg0, u16 *, 0xC);
            M2C_FIELD(arg0, u16 *, 0xC) = (u16) (temp_v0 + 1);
            if (temp_v0 >= 0x29U) {
                func_800CABDC(arg0, temp_s3 + ((temp_s2 * 0x2E8) + 0x18) + (temp_s0_3 * 0x7C), 0x10000);
                goto block_18;
            }
            break;
        case 2:                                     /* switch 3 */
            var_v0 = M2C_FIELD(temp_s3, u8 *, 0x720);
            goto block_40;
        }
        break;
    case 7:
        switch ((*D_8008EE50)) {                       /* switch 4; irregular */
        case 0:                                     /* switch 4 */
            M2C_FIELD(arg0, u16 *, 0xC) = 0U;
            goto block_18;
        case 1:                                     /* switch 4 */
            temp_v0_2 = M2C_FIELD(arg0, u16 *, 0xC);
            M2C_FIELD(arg0, u16 *, 0xC) = (u16) (temp_v0_2 + 1);
            if (temp_v0_2 >= 0x3DU) {
                func_80012604(0xA);
                return;
            }
            break;
        }
        break;
    case 8:
        var_v0 = func_8002367C(arg0, M2C_FIELD(arg0, u8 *, 0xCE8), -1, -1);
        goto block_40;
    case 9:
        func_800B8310(arg0);
        return;
    case 10:
        func_800B8478(arg0);
        return;
    case 11:
        func_800A4C3C(arg0);
        return;
    case 12:
        func_800A4CB0(arg0, 1);
        return;
    case 13:
        func_800B862C(arg0);
        break;
    }
}
