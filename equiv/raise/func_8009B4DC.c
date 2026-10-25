#include "common.h"

s32 func_8009B4DC(void) {
    extern u16 D_8006AF80[];
    extern u8 D_8008ED68[];
    extern s32 D_8008F714[];
    extern u8 D_80091618[];
    extern s32 D_800EFF50[];
    extern s32 D_800F2CA0[];
    M2C_UNK var_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_s2;
    s32 var_s3;
    s32 var_v1;

    var_s2 = 1;
    var_s3 = 0;
    if (M2C_FIELD(D_8008ED68, u8 *, 0x99A) != 1) {
        switch (M2C_FIELD(D_8008ED68, u16 *, 0xE4)) {
        case 0:
            func_8009B088();
            (*D_800F2CA0) = 0;
            func_800125D8();
            break;
        case 1:
            if ((*D_800F2CA0) == 2) {
                func_80099F54();
                func_800125D8();
            }
            break;
        case 3:
            temp_v0 = func_8009B150();
            if (temp_v0 == 2) {
                var_a0 = 4;
                goto block_33;
            }
            var_a0 = 5;
            if (temp_v0 == 1) {
                M2C_FIELD(D_8008ED68, s32 *, 0x9A0) = 0;
                M2C_FIELD(D_8008ED68, s32 *, 0x9AC) = temp_v0;
                goto block_33;
            }
            if (temp_v0 < 0) {
                (*D_8008F714) = 3;
                var_a0 = 8;
block_33:
                func_80012604(var_a0);
            default:
            }
            break;
        case 4:
            temp_v0_2 = func_8009B350((*D_800F2CA0));
            var_s2 = temp_v0_2 != 0;
            if (temp_v0_2 == 2) {
                func_80012604(3);
                var_s2 = 1;
            }
            break;
        case 7:
            var_s0 = 0;
            if (M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x20) {
                func_80034AB0(0x48);
                var_s0 = 1;
                if (M2C_FIELD(D_8008ED68, s32 *, 0x9A0) != 0) {
                    var_s0 = -1;
                }
                goto block_22;
            }
            if (M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x40) {
                func_80034AB0(0x5D);
                var_s0 = -1;
                goto block_22;
            }
            if ((M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x2000) || (var_v1 = 0, ((M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x8000) != 0))) {
                func_80034AB0(0x84);
                M2C_FIELD(D_8008ED68, s32 *, 0x9A0) = (s32) (M2C_FIELD(D_8008ED68, s32 *, 0x9A0) ^ 1);
block_22:
                var_v1 = var_s0;
            }
            if (var_v1 > 0) {
                (*D_8008F714) = 2;
                func_800125D8();
            } else if (var_v1 < 0) {
                (*D_8008F714) = 0;
                func_800125D8();
            }
            break;
        case 9:
            switch (M2C_FIELD(D_8008ED68, s32 *, 0x9AC)) { /* switch 1; irregular */
            case 0:                                 /* switch 1 */
                var_a0 = 2;
                goto block_33;
            case 2:                                 /* switch 1 */
                func_800B8700(0x18, (*D_8006AF80), 0);
                func_80013928((*D_800EFF50));
                var_a0 = 0;
                var_s3 = M2C_FIELD(D_8008ED68, s32 *, 0x99C) + 1;
                goto block_33;
            case 3:                                 /* switch 1 */
                func_800B8700(0x18, (*D_8006AF80), 0);
                var_s3 = -1;
                func_80013928((*D_800EFF50));
                var_a0 = 0;
                M2C_FIELD((((*D_8006AF80) * 0x1A8) + D_80091618), s16 *, 0x8A) = 0xFFFF;
                goto block_33;
            }
            break;
        }
        (*D_800F2CA0) = func_800B8898((u16) M2C_FIELD(D_8008ED68, s32 *, 0x99C), *(s16 *)((M2C_FIELD(D_8008ED68, s32 *, 0x99C) * 0x1A8) + D_80091618), var_s2);
    }
    return var_s3;
}
