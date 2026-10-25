#include "common.h"

void func_800B4AAC(s32 arg0) {
    extern u16 D_8006AF80[];
    extern u8 D_8008ED68[];
    extern u8 D_80091618[];
    extern s16 D_800EEB90[];
    extern u8 D_800EEB94[];
    extern u8 D_80100F38[];
    s16 temp_v0;
    s32 var_a2;
    s32 var_a3;
    s32 var_t0;
    s32 var_t1;
    s32 var_t4;
    void **var_a1;
    void *temp_t2;
    void *temp_v1;

    temp_t2 = (arg0 * 0x79C) + D_80100F38;
    if (arg0 == (*D_8006AF80)) {
        var_t4 = 1;
        if (M2C_FIELD(((arg0 * 0x1A8) + D_80091618), u16 *, 0x8A) == 0xFFFF) {
            var_t1 = 0;
            var_t0 = 0;
        } else {
            var_t1 = 8;
            var_t0 = 0xC;
        }
    } else {
        var_t4 = 0;
        var_t1 = -8;
        var_t0 = -4;
    }
    var_a1 = temp_t2 + 0x194;
    var_a3 = 0;
    var_a2 = 0x10;
    M2C_FIELD(M2C_FIELD(temp_t2, void **, 0x190), s16 *, 0x46) = (s16) (var_t1 - (((s32) M2C_FIELD(D_8008ED68, s32 *, 0x108) / 2) - 0x2C));
    M2C_FIELD(M2C_FIELD(temp_t2, void **, 0x190), s16 *, 0x4A) = (s16) (var_t0 - (((s32) M2C_FIELD(D_8008ED68, s32 *, 0x10C) / 2) - 0x38));
    temp_v1 = ((var_t4 != (*D_800EEB90)) * 4) + D_800EEB94;
    M2C_FIELD(M2C_FIELD(temp_t2, void **, 0x190), u16 *, 0x4E) = (u16) M2C_FIELD(temp_v1, u16 *, 0);
    do {
        M2C_FIELD(*var_a1, s16 *, 0x46) = (s16) ((var_t1 - ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x108) / 2)) + 0x104);
        var_a3 += 1;
        temp_v0 = (var_t0 - (((s32) M2C_FIELD(D_8008ED68, s32 *, 0x10C) / 2) - 0x38)) + var_a2;
        var_a2 += 0x12;
        M2C_FIELD(*var_a1, s16 *, 0x4A) = temp_v0;
        M2C_FIELD(*var_a1, u16 *, 0x4E) = (u16) M2C_FIELD(temp_v1, u16 *, 2);
        var_a1 += 4;
    } while (var_a3 < 6);
}
