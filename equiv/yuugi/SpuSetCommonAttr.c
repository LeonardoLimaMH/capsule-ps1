#include "common.h"

void SpuSetCommonAttr(void *arg0) {
    extern void * D_80071598[];
    s16 temp_a2;
    s16 temp_a3;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 var_v0_3;
    s16 var_v0_4;
    s16 var_v0_5;
    s16 var_v0_6;
    s32 temp_t1;
    s32 temp_t2;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_v0;
    s32 var_v0_2;
    u16 var_a2;
    u16 var_a2_2;
    u16 var_t0;
    u16 var_t0_2;

    var_a2 = 0;
    temp_t1 = M2C_FIELD(arg0, s32 *, 0);
    temp_t2 = temp_t1 == 0;
    var_t0 = 0;
    if (temp_t2 == 0) {
        if (temp_t1 & 1) {
            if (temp_t1 & 4) {
                goto block_3;
            }
            goto block_12;
            goto block_13;
        }
    } else {
block_3:
        temp_v1 = M2C_FIELD(arg0, s16 *, 8);
        switch (temp_v1) {                          /* switch 1 */
        case 1:                                     /* switch 1 */
            var_a1 = 0x8000;
            break;
        case 2:                                     /* switch 1 */
            var_a1 = 0x9000;
            break;
        case 3:                                     /* switch 1 */
            var_a1 = 0xA000;
            break;
        case 4:                                     /* switch 1 */
            var_a1 = 0xB000;
            break;
        case 5:                                     /* switch 1 */
            var_a1 = 0xC000;
            break;
        case 6:                                     /* switch 1 */
            var_a1 = 0xD000;
            break;
        case 7:                                     /* switch 1 */
            var_a1 = 0xE000;
            break;
        default:                                    /* switch 1 */
block_12:
            var_a2 = M2C_FIELD(arg0, u16 *, 4);
            var_a1 = 0;
            break;
        }
block_13:
        var_v0 = var_a2 & 0x7FFF;
        if (var_a1 != 0) {
            temp_a3 = (s16) M2C_FIELD(arg0, u16 *, 4);
            var_a2_2 = 0x7F;
            if (temp_a3 < 0x80) {
                var_a2_2 = 0;
                if (temp_a3 >= 0) {
                    var_a2_2 = M2C_FIELD(arg0, u16 *, 4);
                }
            }
            var_v0 = var_a2_2 & 0x7FFF;
        }
        M2C_FIELD((*D_80071598), s16 *, 0x180) = (s16) (var_v0 | var_a1);
    }
    if (temp_t2 == 0) {
        if (temp_t1 & 2) {
            if (temp_t1 & 8) {
                goto block_22;
            }
            goto block_31;
            goto block_32;
        }
    } else {
block_22:
        temp_v1_2 = M2C_FIELD(arg0, s16 *, 0xA);
        switch (temp_v1_2) {                        /* switch 2 */
        case 1:                                     /* switch 2 */
            var_a1_2 = 0x8000;
            break;
        case 2:                                     /* switch 2 */
            var_a1_2 = 0x9000;
            break;
        case 3:                                     /* switch 2 */
            var_a1_2 = 0xA000;
            break;
        case 4:                                     /* switch 2 */
            var_a1_2 = 0xB000;
            break;
        case 5:                                     /* switch 2 */
            var_a1_2 = 0xC000;
            break;
        case 6:                                     /* switch 2 */
            var_a1_2 = 0xD000;
            break;
        case 7:                                     /* switch 2 */
            var_a1_2 = 0xE000;
            break;
        default:                                    /* switch 2 */
block_31:
            var_t0 = M2C_FIELD(arg0, u16 *, 6);
            var_a1_2 = 0;
            break;
        }
block_32:
        var_v0_2 = var_t0 & 0x7FFF;
        if (var_a1_2 != 0) {
            temp_a2 = (s16) M2C_FIELD(arg0, u16 *, 6);
            var_t0_2 = 0x7F;
            if (temp_a2 < 0x80) {
                var_t0_2 = 0;
                if (temp_a2 >= 0) {
                    var_t0_2 = M2C_FIELD(arg0, u16 *, 6);
                }
            }
            var_v0_2 = var_t0_2 & 0x7FFF;
        }
        M2C_FIELD((*D_80071598), s16 *, 0x182) = (s16) (var_v0_2 | var_a1_2);
    }
    if ((temp_t2 != 0) || (temp_t1 & 0x40)) {
        M2C_FIELD((*D_80071598), u16 *, 0x1B0) = (u16) M2C_FIELD(arg0, u16 *, 0x10);
    }
    if ((temp_t2 != 0) || (temp_t1 & 0x80)) {
        M2C_FIELD((*D_80071598), u16 *, 0x1B2) = (u16) M2C_FIELD(arg0, u16 *, 0x12);
    }
    if ((temp_t2 != 0) || (temp_t1 & 0x400)) {
        M2C_FIELD((*D_80071598), u16 *, 0x1B4) = (u16) M2C_FIELD(arg0, u16 *, 0x1C);
    }
    if ((temp_t2 != 0) || (temp_t1 & 0x800)) {
        M2C_FIELD((*D_80071598), u16 *, 0x1B6) = (u16) M2C_FIELD(arg0, u16 *, 0x1E);
    }
    if ((temp_t2 != 0) || (temp_t1 & 0x100)) {
        if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
            var_v0_3 = M2C_FIELD((*D_80071598), u16 *, 0x1AA) & 0xFFFB;
        } else {
            var_v0_3 = M2C_FIELD((*D_80071598), u16 *, 0x1AA) | 4;
        }
        M2C_FIELD((*D_80071598), s16 *, 0x1AA) = var_v0_3;
    }
    if ((temp_t2 != 0) || (temp_t1 & 0x200)) {
        if (M2C_FIELD(arg0, s32 *, 0x18) == 0) {
            var_v0_4 = M2C_FIELD((*D_80071598), u16 *, 0x1AA) & 0xFFFE;
        } else {
            var_v0_4 = M2C_FIELD((*D_80071598), u16 *, 0x1AA) | 1;
        }
        M2C_FIELD((*D_80071598), s16 *, 0x1AA) = var_v0_4;
    }
    if ((temp_t2 != 0) || (temp_t1 & 0x1000)) {
        if (M2C_FIELD(arg0, s32 *, 0x20) == 0) {
            var_v0_5 = M2C_FIELD((*D_80071598), u16 *, 0x1AA) & 0xFFF7;
        } else {
            var_v0_5 = M2C_FIELD((*D_80071598), u16 *, 0x1AA) | 8;
        }
        M2C_FIELD((*D_80071598), s16 *, 0x1AA) = var_v0_5;
    }
    if ((temp_t2 != 0) || (temp_t1 & 0x2000)) {
        if (M2C_FIELD(arg0, s32 *, 0x24) == 0) {
            var_v0_6 = M2C_FIELD((*D_80071598), u16 *, 0x1AA) & 0xFFFD;
        } else {
            var_v0_6 = M2C_FIELD((*D_80071598), u16 *, 0x1AA) | 2;
        }
        M2C_FIELD((*D_80071598), s16 *, 0x1AA) = var_v0_6;
    }
}
