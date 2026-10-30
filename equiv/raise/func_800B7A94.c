#include "common.h"

void func_800B7A94(void) {
    extern M2C_UNK D_80063940[];
    extern u16 D_8006AF80[];
    extern M2C_UNK D_8006D670[];
    extern M2C_UNK D_8008ED68[];
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_80091620[];
    extern s16 D_800EEB90[];
    extern M2C_UNK D_800EEB94[];
    extern void * D_800EEC48[];
    void *sp28;
    u16 sp30;
    s16 sp38;
    u16 sp40;
    s16 temp_a2;
    s16 temp_s0;
    u32 temp_a0;
    u32 temp_v0;
    s32 var_s3;
    s32 var_s5;
    s32 var_s6;
    s32 var_v0;
    u16 temp_fp;
    u16 temp_v1;
    u32 temp_s7;
    void *temp_s4;

    var_s5 = 0;
    var_s3 = 0;
    if (((*D_8006AF80) != 0xFFFF) && ((M2C_FIELD((*D_800EEC48), s32 *, 0x38) & 1) != 1)) {
        var_s6 = 0;
        sp40 = (u16) ((u32) (M2C_FIELD(D_8008ED68, u32 *, 0x108) + ((u32) M2C_FIELD(D_8008ED68, u32 *, 0x108) >> 0x1F)) >> 1);
        temp_s7 = (u32) (M2C_FIELD(D_8008ED68, u32 *, 0x10C) + ((u32) M2C_FIELD(D_8008ED68, u32 *, 0x10C) >> 0x1F)) >> 1;
        do {
            temp_v0 = func_800AECC8(var_s6 & 0xFFFF);
            switch (temp_v0) {                      /* irregular */
            case -1:
                break;
            case 0:
                var_s5 = -8;
                var_s3 = -4;
block_12:
                if (temp_v0 != 2) {
                default:
                    temp_a0 = (var_s6 & 0xFFFF) * 0x1A8;
                    temp_fp = *(u16 *)(temp_a0 + (u8 *)D_80091618);
                    temp_a2 = M2C_FIELD((((temp_v0 != (*D_800EEB90)) * 4) + (u8 *)D_800EEB94), s16 *, 2);
                    sp38 = temp_a2;
                    temp_s4 = (temp_fp * 0x3C) + (u8 *)D_80063940;
                    temp_v1 = ((u32) M2C_FIELD(temp_s4, u32 *, 8) >> 0xC) & 3;
                    sp30 = temp_v1;
                    sp28 = (temp_v1 * 8) + (u8 *)D_8006D670;
                    if ((temp_a2 == 5) || (temp_v0 == 0)) {
                        func_8001F1A8((s16) (var_s5 - (sp40 - 0x59)), (s16) (var_s3 - (temp_s7 - 0x41)), 0, 1, 0, temp_a0 + (u8 *)D_80091620, 0, 8, (s32) temp_a2);
                    }
                    if ((s16) (u16) sp38 == 5) {
                        temp_s0 = var_s5 - (sp40 - 0x59);
                        func_8001F1A8(temp_s0, (s16) (var_s3 - (temp_s7 - 0x55)), 0, 0, 0, temp_s4, 0, 9, (s32) (s16) (u16) sp38);
                        func_8001F7A4(temp_s0, (s16) (var_s3 - (temp_s7 - 0x64)), 0, 0, ((u32) M2C_FIELD(((temp_fp * 0x3C) + (u8 *)D_80063940), u32 *, 8) >> 8) & 0xF, (s32) (s16) (u16) sp38);
                        func_80018EF4((s16) (var_s5 - (sp40 - 0x5E)), (s16) (var_s3 - (temp_s7 - 0x75)), sp30, 1, (s32) (s16) (u16) sp38);
                        if (sp30 == 1) {
                            var_v0 = 4;
                        } else {
                            var_v0 = 3;
                        }
                        func_8001F1A8((s16) (var_s5 - (sp40 - 0x6E)), (s16) (var_s3 - (temp_s7 - 0x77)), 0, 0, var_v0, (void *) (s16) (u16) sp38);
                    }
                } else {
                case 2:
                }
                func_800B55B8(temp_v0, var_s6 & 0xFFFF);
                break;
            case 1:
                var_s5 = 8;
                if (M2C_FIELD((((*D_8006AF80) * 0x1A8) + (u8 *)D_80091618), u16 *, 0x8A) == 0xFFFF) {
                    var_s5 = 0;
                    var_s3 = 0;
                } else {
                    var_s3 = 0xC;
                }
                goto block_12;
            }
            var_s6 += 1;
        } while ((u32) (var_s6 & 0xFFFF) < 6U);
    }
}
