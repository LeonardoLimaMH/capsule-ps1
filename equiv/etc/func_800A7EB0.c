#include "common.h"

void func_800A7EB0(void) {
    extern u8 D_80063940[];
    extern u8 D_8006AF80[];
    extern u8 D_8006AFCC[];
    extern u8 D_80085428[];
    extern u8 D_80091618[];
    extern u8 D_800916CC[];
    extern s32 D_800B3C20[];
    u8 *var_a0_2;
    u8 *var_a0_3;
    u8 *var_a0_4;
    u8 *var_v1;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a1_4;
    s32 var_a1_5;
    s32 var_a3;
    u16 temp_v0_2;
    u32 temp_a0_2;
    u8 *var_a0;
    u8 temp_a3;
    u8 temp_v0;
    void *temp_a0;
    void *temp_a0_3;
    void *temp_a1;
    void *temp_a2;
    void *temp_v0_3;
    void *temp_v1;
    void *temp_v1_2;

    var_a1 = 0;
    temp_a3 = M2C_FIELD(D_80085428, u8 *, 2);
    temp_v1 = (temp_a3 * 0xE) + D_80085428;
    M2C_FIELD(temp_v1, u8 *, 0x50) = (u8) *(((*D_800B3C20) * 0x1A8) + D_80091618);
    do {
        temp_a0 = temp_v1 + var_a1;
        temp_v0 = M2C_FIELD((((*D_800B3C20) * 0x1A8) + D_80091618 + var_a1), u8 *, 8);
        var_a1 += 1;
        M2C_FIELD(temp_a0, u8 *, 0x51) = temp_v0;
    } while (var_a1 < 8);
    var_a1_2 = 0;
    temp_a2 = D_80085428 + (temp_a3 * 0xE);
    var_a0 = ((*D_800B3C20) * 0x1A8) + D_800916CC;
    do {
        temp_v1_2 = temp_a2 + var_a1_2;
        var_a1_2 += 1;
        M2C_FIELD(temp_v1_2, u8 *, 0x59) = (u8) *var_a0;
        var_a0 += 2;
    } while (var_a1_2 < 5);
    M2C_FIELD(D_80085428, u8 *, 2) = (u8) (M2C_FIELD(D_80085428, u8 *, 2) + 1);
    temp_a1 = (*(u16 *)(((*D_800B3C20) * 0x1A8) + D_80091618) * 0x3C) + D_80063940;
    temp_a0_2 = M2C_FIELD(temp_a1, u32 *, 0x14);
    if (((temp_a0_2 >> 5) & 1) != 1) {
        M2C_FIELD(temp_a1, u32 *, 0x14) = (u32) (temp_a0_2 | 0x20);
        M2C_FIELD(D_80085428, u8 *, 4) = (u8) (M2C_FIELD(D_80085428, u8 *, 4) + 1);
    }
    func_80027C14((u16) (*D_800B3C20), temp_a1, temp_a2, temp_a3);
    func_80027E04((u16) (*D_800B3C20));
    temp_a0_3 = ((*D_800B3C20) * 0x1A8) + D_80091618;
    temp_v0_2 = M2C_FIELD(temp_a0_3, u16 *, 0x8A);
    if (temp_v0_2 != 0xFFFF) {
        M2C_FIELD(((temp_v0_2 * 0x1A8) + D_80091618), s16 *, 0x8A) = 0xFFFF;
        M2C_FIELD(((M2C_FIELD(temp_a0_3, u16 *, 0x8A) * 0x1A8) + D_80091618), s16 *, 0x8C) = 0;
    }
    func_80026514((u16) (*D_800B3C20), 0xFFFF);
    var_a3 = 0;
    var_a1_3 = 0;
    var_a0_2 = D_80091618;
    temp_v0_3 = ((*D_800B3C20) * 0x1A8) + D_80091618;
    M2C_FIELD(temp_v0_3, s16 *, 0x19C) = 0;
    M2C_FIELD(temp_v0_3, s16 *, 0x19E) = 0;
    M2C_FIELD(temp_v0_3, s16 *, 0x1A0) = 0;
    M2C_FIELD((D_80085428 + (*D_800B3C20)), s8 *, 0xD7C) = 0;
    do {
        if (M2C_FIELD(var_a0_2, u16 *, 0x10) != 0xFFFF) {
            var_a3 = 1;
        }
        var_a1_3 += 1;
        var_a0_2 += 0x1A8;
    } while (var_a1_3 < 6);
    var_a1_4 = 0;
    if (var_a3 == 0) {
        var_a0_3 = D_8006AFCC;
        M2C_FIELD(D_8006AF80, s16 *, 0) = 0;
        M2C_FIELD(D_8006AF80, s32 *, 4) = 0x20D0;
        do {
            M2C_FIELD(var_a0_3, s32 *, 8) = -1;
            M2C_FIELD(var_a0_3, s32 *, 0x1C) = 0;
            var_a1_4 += 1;
            var_a0_3 += 4;
        } while (var_a1_4 < 5);
        var_a1_5 = 0;
        var_a0_4 = D_8006AFCC;
        var_v1 = D_8006AFCC;
        do {
            M2C_FIELD(var_v1, s16 *, 0x30) = 0;
            M2C_FIELD(var_a0_4, s32 *, 0x48) = 0;
            var_a0_4 += 4;
            M2C_FIELD(var_v1, s16 *, 0x74) = 0;
            var_a1_5 += 1;
            var_v1 += 2;
        } while (var_a1_5 < 0xB);
    }
}
