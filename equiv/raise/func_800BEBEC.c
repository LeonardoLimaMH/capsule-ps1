#include "common.h"

s32 func_800BEBEC(void) {
    extern M2C_UNK D_800EEB9C[];
    extern u16 D_800F062A[];
    extern void * D_800FAE10[];
    extern void * D_800FDE08[];
    u8 var_v1;
    u8 var_v1_2;
    u8 var_v1_3;

    if ((*D_800F062A) != 0) {
        (*D_800F062A) -= 1;
        M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x764), u8 *, 0x58) = (u8) (M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x764), u8 *, 0x58) + 8);
        var_v1 = M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x764), u8 *, 0x58);
        if ((u32) (var_v1 & 0xFF) < 0x80U) {
            var_v1 = 0x80;
        }
        M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x764), u8 *, 0x58) = var_v1;
        M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x764), u8 *, 0x59) = (u8) (M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x764), u8 *, 0x59) + 8);
        var_v1_2 = M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x764), u8 *, 0x59);
        if ((u32) (var_v1_2 & 0xFF) < 0x80U) {
            var_v1_2 = 0x80;
        }
        M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x764), u8 *, 0x59) = var_v1_2;
        M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x764), u8 *, 0x5A) = (u8) (M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x764), u8 *, 0x5A) + 8);
        var_v1_3 = M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x764), u8 *, 0x5A);
        if ((u32) (var_v1_3 & 0xFF) < 0x80U) {
            var_v1_3 = 0x80;
        }
        M2C_FIELD(M2C_FIELD(D_800EEB9C, void **, 0x764), u8 *, 0x5A) = var_v1_3;
        return 0;
    }
    M2C_FIELD((*D_800FDE08), s32 *, 0x38) = (s32) (M2C_FIELD((*D_800FDE08), s32 *, 0x38) & ~8);
    M2C_FIELD((*D_800FAE10), s32 *, 0x38) = (s32) (M2C_FIELD((*D_800FAE10), s32 *, 0x38) & ~8);
    return 1;
}
