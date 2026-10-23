#include "common.h"

void func_800DF67C(u32 arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    s32 temp_v0;
    s32 var_v0;
    s32 var_v0_2;

    temp_v0 = arg0 < 8U;
    if (arg1 == 0) {
        if (temp_v0 != 0) {
            switch (arg0) {                         /* switch 1 */
            case 0:                                 /* switch 1 */
                *arg2 = 7;
                var_v0 = -0x17;
                break;
            case 1:                                 /* switch 1 */
                var_v0_2 = -3;
                goto block_21;
            case 2:                                 /* switch 1 */
                *arg2 = -0xA;
                var_v0 = -0x1B;
                break;
            case 3:                                 /* switch 1 */
                *arg2 = -7;
                var_v0 = -0x1C;
                break;
            case 4:                                 /* switch 1 */
                *arg2 = -0xB;
                var_v0 = -0x17;
                break;
            case 5:                                 /* switch 1 */
                *arg2 = -8;
                var_v0 = -0x20;
                break;
            case 6:                                 /* switch 1 */
                *arg2 = 0xA;
                var_v0 = -0x1B;
                break;
            case 7:                                 /* switch 1 */
                *arg2 = 0xD;
                var_v0 = -0x1C;
                break;
            }
            goto block_22;
        }
    } else if (temp_v0 != 0) {
        switch (arg0) {                             /* switch 2 */
        case 0:                                     /* switch 2 */
            *arg2 = -7;
            var_v0 = -0x17;
            break;
        case 1:                                     /* switch 2 */
            *arg2 = -0xD;
            var_v0 = -0x1C;
            break;
        case 2:                                     /* switch 2 */
            *arg2 = -0xA;
            var_v0 = -0x1B;
            break;
        case 3:                                     /* switch 2 */
            *arg2 = 8;
            var_v0 = -0x20;
            break;
        case 4:                                     /* switch 2 */
            *arg2 = 0xB;
            var_v0 = -0x17;
            break;
        case 5:                                     /* switch 2 */
            *arg2 = 7;
            var_v0 = -0x1C;
            break;
        case 6:                                     /* switch 2 */
            *arg2 = 0xA;
            var_v0 = -0x1B;
            break;
        case 7:                                     /* switch 2 */
            var_v0_2 = 3;
block_21:
            *arg2 = var_v0_2;
            var_v0 = -0x18;
            break;
        }
block_22:
        *arg3 = var_v0;
    }
}
