#include "common.h"

s32 func_800DCF3C(void *arg0) {
    extern u8 D_80018600[];
    extern u8 D_80063940[];
    extern u8 D_8008ED68[];
    extern u8 D_80119710[];
    extern int func_800F5514();
    extern int func_800FB0A0();
    s32 temp_a0;
    s32 temp_a3;
    s32 var_t2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    void *temp_s1;
    void *temp_t0;
    void *temp_t1;
    void *temp_v0;

    if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
        var_v0_2 = M2C_FIELD(D_80119710, s32 *, 0) + M2C_FIELD(D_8008ED68, u8 *, 0x103);
    } else {
        var_v0_2 = M2C_FIELD(D_80119710, s32 *, 0) + 1;
    }
    M2C_FIELD(D_80119710, s32 *, 0) = var_v0_2;
    if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
        var_v0_3 = M2C_FIELD(D_80119710, s32 *, 4) + M2C_FIELD(D_8008ED68, u8 *, 0x103);
    } else {
        var_v0_3 = M2C_FIELD(D_80119710, s32 *, 4) + 1;
    }
    M2C_FIELD(D_80119710, s32 *, 4) = var_v0_3;
    temp_a0 = M2C_FIELD(D_80119710, s32 *, 8);
    if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
        var_v0_4 = temp_a0 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
    } else {
        var_v0_4 = temp_a0 + 1;
    }
    M2C_FIELD(D_80119710, s32 *, 8) = var_v0_4;
    func_800FE98C(temp_a0, D_8008ED68, D_80119710);
    M2C_FIELD(D_80119710, s8 *, 0x3D) = 0;
    switch (M2C_FIELD(D_8008ED68, u16 *, 0xEC)) {  /* irregular */
    case 0:
        func_8001A998(D_80119710, 0x4C);
        func_800FE7B8();
        temp_t0 = M2C_FIELD(arg0, void **, 0x70);
        var_t2 = (M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0) * 0x3C) + D_80063940), u8 *, 0x13) & 0x3F) * M2C_FIELD(temp_t0, s16 *, 0x52);
        temp_t1 = func_80015B3C(D_80018600, &func_800F5514, 1);
        if (var_t2 < 0) {
            var_t2 += 0xFFF;
        }
        M2C_FIELD(temp_t1, s16 *, 0x28) = (s16) (M2C_FIELD(temp_t0, u16 *, 0x46) + ((s32) (M2C_FIELD(D_8008ED68, u32 *, 0x108) + ((u32) M2C_FIELD(D_8008ED68, u32 *, 0x108) >> 0x1F)) >> 1));
        M2C_FIELD(temp_t1, s8 *, 0x30) = 0xFF;
        M2C_FIELD(temp_t1, s8 *, 0x32) = 2;
        M2C_FIELD(temp_t1, s8 *, 0x33) = 1;
        M2C_FIELD(temp_t1, s8 *, 0x34) = 8;
        M2C_FIELD(temp_t1, s16 *, 0x2C) = 0x64;
        M2C_FIELD(temp_t1, s16 *, 0x36) = 0x64;
        M2C_FIELD(temp_t1, s8 *, 0x2E) = 0;
        M2C_FIELD(temp_t1, s8 *, 0x2F) = 0;
        M2C_FIELD(temp_t1, s16 *, 0x38) = 0x1E;
        temp_a3 = (s32) M2C_FIELD(D_8008ED68, s32 *, 0x10C) / 2;
        M2C_FIELD(temp_t1, s16 *, 0x2A) = (s16) ((M2C_FIELD(temp_t0, u16 *, 0x4A) + temp_a3) - ((s32) ((var_t2 >> 0xC) + ((u32) var_t2 >> 0x1F)) >> 1));
        temp_s1 = func_80015B3C(D_80018600, &func_800FB0A0, 1, temp_a3);
        temp_v0 = func_80015B3C(D_80018600, D_80018600, 1);
        func_80015EF8(temp_v0);
        M2C_FIELD(temp_v0, s32 *, 0x18) = func_80019F30(0x60013, 0x137);
        M2C_FIELD(temp_s1, void **, 0x30) = temp_v0;
        func_800FE188(arg0, temp_s1 + 0x28);
        M2C_FIELD(D_80119710, s32 *, 4) = 0;
        M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
block_16:
        var_v0 = 0;
        return var_v0;
    case 1:
        var_v0 = 1;
        if (M2C_FIELD(D_80119710, s32 *, 4) < 0x3C) {
            goto block_16;
        }
        /* Duplicate return node #17. Try simplifying control flow for better match */
        return var_v0;
    default:
        return 0;
    }
}
