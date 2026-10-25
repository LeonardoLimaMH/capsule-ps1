#include "common.h"

s32 func_800BFBD8(u16 arg0, u16 arg1, s16 arg2) {
    extern void * D_8008ED68[];
    extern s32 D_8008ED80[];
    extern u16 D_800F066E[];
    extern s16 D_800F0678[];
    extern s16 D_800F067A[];
    extern s16 D_800F067E[];
    extern s16 D_800F0684[];
    extern s16 D_800F0686[];
    extern u8 D_800F0688[];
    extern u8 D_80100DC0[];
    s32 sp10;
    s32 sp14;
    u16 sp18;
    s16 var_a3;
    s16 var_v0_2;
    s16 var_v0_3;
    s32 temp_v1;
    s32 var_s2;
    s32 var_s4;
    s32 var_v0;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_7;
    u32 temp_a0;
    u32 temp_s0;
    u32 var_a1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;

    sp18 = arg0;
    var_a3 = (*D_800F0686);
    if ((*D_800F0686) < 0) {
        var_a3 = (*D_800F0686) + 0xFFF;
    }
    var_s2 = 0;
    var_s4 = 0x80;
    sp14 = (s32) (s16) ((*D_800F0686) - ((var_a3 >> 0xC) << 0xC));
    M2C_FIELD(D_80100DC0, u16 *, 0) = arg0;
    M2C_FIELD(D_80100DC0, u16 *, 2) = arg1;
    M2C_FIELD(D_80100DC0, s16 *, 4) = arg2;
    M2C_FIELD(D_80100DC0, s16 *, 0xC) = arg2;
    M2C_FIELD(D_80100DC0, u16 *, 0x10) = arg0;
    M2C_FIELD(D_80100DC0, u16 *, 0x12) = arg1;
    M2C_FIELD(D_80100DC0, s16 *, 0x14) = arg2;
    M2C_FIELD(D_80100DC0, s16 *, 0x1C) = arg2;
    do {
        sp10 = sp14;
        if (var_s2 != 0x1F) {
            temp_v1 = var_s4 + (*D_800F0686);
            var_v0 = temp_v1;
            if (temp_v1 < 0) {
                var_v0 = temp_v1 + 0xFFF;
            }
            var_v0_2 = temp_v1 - ((var_v0 >> 0xC) << 0xC);
        } else {
            var_v0_3 = (*D_800F0686);
            if ((*D_800F0686) < 0) {
                var_v0_3 = (*D_800F0686) + 0xFFF;
            }
            var_v0_2 = (*D_800F0686) - ((var_v0_3 >> 0xC) << 0xC);
        }
        sp14 = (s32) var_v0_2;
        var_v0_4 = (*D_800F0684) * rcos(sp10);
        if (var_v0_4 < 0) {
            var_v0_4 += 0xFFF;
        }
        M2C_FIELD(D_80100DC0, u16 *, 8) = (u16) (sp18 + (var_v0_4 >> 0xC));
        var_v0_5 = (*D_800F0684) * rsin(sp10);
        if (var_v0_5 < 0) {
            var_v0_5 += 0xFFF;
        }
        M2C_FIELD(D_80100DC0, u16 *, 0xA) = (u16) (arg1 + (var_v0_5 >> 0xC));
        var_v0_6 = (*D_800F0684) * rcos(sp14);
        if (var_v0_6 < 0) {
            var_v0_6 += 0xFFF;
        }
        M2C_FIELD(D_80100DC0, u16 *, 0x18) = (u16) (sp18 + (var_v0_6 >> 0xC));
        var_v0_7 = (*D_800F0684) * rsin(sp14);
        if (var_v0_7 < 0) {
            var_v0_7 += 0xFFF;
        }
        M2C_FIELD(D_80100DC0, u16 *, 0x1A) = (u16) (arg1 + (var_v0_7 >> 0xC));
        temp_s0 = M2C_FIELD((*D_8008ED68), u32 *, 0x1090);
        var_a1 = 0;
        if (temp_s0 != 0) {
            temp_a0 = temp_s0 + 0x24;
            if ((u32) ((*D_8008ED68) + 0x4594) >= temp_a0) {
                var_a1 = temp_a0;
            }
        }
        M2C_FIELD((*D_8008ED68), u32 *, 0x1090) = var_a1;
        SetPolyG4((void *) temp_s0, (void *) var_a1);
        SetSemiTrans((void *) temp_s0, 1);
        temp_v1_2 = ((var_s2 & 7) * 0x10) + D_800F0688;
        M2C_FIELD(temp_s0, u8 *, 4) = (u8) M2C_FIELD(temp_v1_2, u8 *, 0);
        M2C_FIELD(temp_s0, u8 *, 5) = (u8) M2C_FIELD(temp_v1_2, u8 *, 1);
        temp_v1_3 = temp_v1_2 + 4;
        M2C_FIELD(temp_s0, u8 *, 6) = (u8) M2C_FIELD(temp_v1_2, u8 *, 2);
        M2C_FIELD(temp_s0, u8 *, 0xC) = (u8) M2C_FIELD(temp_v1_3, u8 *, 0);
        M2C_FIELD(temp_s0, u8 *, 0xD) = (u8) M2C_FIELD(temp_v1_3, u8 *, 1);
        temp_v1_4 = temp_v1_3 + 4;
        M2C_FIELD(temp_s0, u8 *, 0xE) = (u8) M2C_FIELD(temp_v1_3, u8 *, 2);
        M2C_FIELD(temp_s0, u8 *, 0x14) = (u8) M2C_FIELD(temp_v1_4, u8 *, 0);
        M2C_FIELD(temp_s0, u8 *, 0x15) = (u8) M2C_FIELD(temp_v1_4, u8 *, 1);
        temp_v1_5 = temp_v1_4 + 4;
        M2C_FIELD(temp_s0, u8 *, 0x16) = (u8) M2C_FIELD(temp_v1_4, u8 *, 2);
        M2C_FIELD(temp_s0, u8 *, 0x1C) = (u8) M2C_FIELD(temp_v1_5, u8 *, 0);
        M2C_FIELD(temp_s0, u8 *, 0x1D) = (u8) M2C_FIELD(temp_v1_5, u8 *, 1);
        M2C_FIELD(temp_s0, u8 *, 0x1E) = (u8) M2C_FIELD(temp_v1_5, u8 *, 2);
        M2C_FIELD(temp_s0, u16 *, 8) = (u16) M2C_FIELD(D_80100DC0, u16 *, 0);
        M2C_FIELD(temp_s0, u16 *, 0xA) = (u16) M2C_FIELD(D_80100DC0, u16 *, 2);
        M2C_FIELD(temp_s0, u16 *, 0x10) = (u16) M2C_FIELD(D_80100DC0, u16 *, 8);
        M2C_FIELD(temp_s0, u16 *, 0x12) = (u16) M2C_FIELD(D_80100DC0, u16 *, 0xA);
        M2C_FIELD(temp_s0, u16 *, 0x18) = (u16) M2C_FIELD(D_80100DC0, u16 *, 0x10);
        M2C_FIELD(temp_s0, u16 *, 0x1A) = (u16) M2C_FIELD(D_80100DC0, u16 *, 0x12);
        M2C_FIELD(temp_s0, u16 *, 0x20) = (u16) M2C_FIELD(D_80100DC0, u16 *, 0x18);
        M2C_FIELD(temp_s0, u16 *, 0x22) = (u16) M2C_FIELD(D_80100DC0, u16 *, 0x1A);
        AddPrim((arg2 * 4) + (*D_8008ED68) + 0x78, (void *) temp_s0);
        func_80018610((*D_800F066E), arg2 + 2);
        if (((*D_800F067E) == 1) && !((*D_8008ED80) & 2)) {
            (*D_800F0686) = (u16) (*D_800F0686) + 0x80;
        }
        var_s2 += 1;
        var_s4 += 0x80;
    } while (var_s2 < 0x20);
    if ((*D_800F0678) == 1) {
        if (!((*D_8008ED80) & 0xE)) {
            if ((*D_800F067A) != (*D_800F0678)) {
                if ((*D_800F067A) != 3) {

                } else {
                    (*D_800F067A) = (*D_800F0678);
                }
            } else {
                (*D_800F067A) = 3;
            }
        }
        (*D_800F066E) = GetTPage(0, (*D_800F067A), 0, 0);
    }
    return 0;
}
