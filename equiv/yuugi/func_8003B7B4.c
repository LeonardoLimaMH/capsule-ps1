#include "common.h"

void func_8003B7B4(void *arg0, s32 arg1, s32 arg2, u8 arg3) {
    extern u8 D_80078C9C;
    extern M2C_UNK D_800937D0[];
    extern M2C_UNK D_800944B8[];
    M2C_UNK *var_t2;
    M2C_UNK *var_t2_2;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_t4;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1;
    s32 var_t1;
    s32 var_t1_2;
    s32 var_t1_3;
    s32 var_v1;
    u32 temp_v0_2;
    u8 temp_v1_3;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_v0;
    void *temp_v0_3;
    void *temp_v1_2;
    void *temp_v1_4;
    void *temp_v1_5;

    temp_a1 = arg1 & 0xF0;
    temp_t4 = (arg1 & 0xF) | (D_80078C9C * 0x10);
    switch (temp_a1) {                              /* irregular */
    case 0x80:
        func_80039724(temp_t4 & 0xFF, arg2 & 0xFF, arg3 & 0xFF);
        return;
    case 0x90:
        temp_a2 = arg3 & 0xFF;
        temp_a0 = temp_t4 & 0xFF;
        if (temp_a2 != 0) {
            func_80038CA8(temp_a0, arg2 & 0xFF, temp_a2);
            return;
        }
        func_80039724(temp_a0, arg2 & 0xFF, 0);
        return;
    case 0xA0:
        func_800398B4(temp_t4 & 0xFF, arg2 & 0xFF, arg3 & 0xFF);
        return;
    case 0xB0:
        var_v1 = arg2 & 0xFF;
        if (var_v1 == 0x63) {
            temp_v1 = arg3 & 0xFF;
            if (temp_v1 == 0x14) {
                temp_v1_2 = ((s32) D_80078C9C * 0x2AC) + (*D_800944B8);
                if (M2C_FIELD(temp_v1_2, u16 *, 0x2A0) != 0) {
                    var_t1 = 0;
                    if (M2C_FIELD(temp_v1_2, u16 *, 0x2A2) != 0) {
                        var_t2 = (*D_800944B8);
                        do {
                            temp_a1_2 = ((s32) D_80078C9C * 0x2AC) + var_t2;
                            M2C_FIELD(temp_a1_2, u8 *, 0x22) = arg3;
                            M2C_FIELD(temp_a1_2, u8 *, 0x21) = (u8) M2C_FIELD(temp_a1_2, u8 *, 0x20);
                            M2C_FIELD(temp_a1_2, u8 *, 0x26) = (u8) M2C_FIELD(temp_a1_2, u8 *, 0x25);
                            M2C_FIELD(temp_a1_2, u16 *, 0x1A) = (u16) M2C_FIELD(temp_a1_2, u16 *, 0x18);
                            M2C_FIELD(temp_a1_2, s32 *, 4) = (s32) M2C_FIELD(temp_a1_2, s32 *, 0);
                            M2C_FIELD(temp_a1_2, u16 *, 0x1E) = (u16) M2C_FIELD(temp_a1_2, u16 *, 0x1C);
                            var_t1 += 1;
                            var_t2 += 0x28;
                        } while (var_t1 < (s32) M2C_FIELD((((s32) D_80078C9C * 0x2AC) + (*D_800944B8)), u16 *, 0x2A2));
                    }
                    temp_v0 = ((s32) D_80078C9C * 0x2AC) + (*D_800944B8);
                    M2C_FIELD(temp_v0, s32 *, 0x29C) = (s32) M2C_FIELD(temp_v0, s32 *, 0x298);
                } else {
                    M2C_FIELD(arg0, u8 *, 0x22) = 0x7FU;
                    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0);
                }
                goto block_37;
            }
            var_v1 = arg2 & 0xFF;
            if (temp_v1 == 0x1E) {
                temp_v1_3 = M2C_FIELD(arg0, u8 *, 0x22);
                temp_v0_2 = temp_v1_3 & 0xFF;
                if (temp_v0_2 != 0) {
                    if (temp_v0_2 < 0x7FU) {
                        M2C_FIELD(arg0, u8 *, 0x22) = (u8) (temp_v1_3 - 1);
                    }
                    temp_v1_4 = ((s32) D_80078C9C * 0x2AC) + (*D_800944B8);
                    if (M2C_FIELD(temp_v1_4, u16 *, 0x2A0) != 0) {
                        var_t1_2 = 0;
                        if (M2C_FIELD(temp_v1_4, u16 *, 0x2A2) != 0) {
                            var_t2_2 = (*D_800944B8);
                            do {
                                temp_a1_3 = ((s32) D_80078C9C * 0x2AC) + var_t2_2;
                                M2C_FIELD(temp_a1_3, u8 *, 0x20) = (u8) M2C_FIELD(temp_a1_3, u8 *, 0x21);
                                M2C_FIELD(temp_a1_3, u8 *, 0x25) = (u8) M2C_FIELD(temp_a1_3, u8 *, 0x26);
                                M2C_FIELD(temp_a1_3, u16 *, 0x18) = (u16) M2C_FIELD(temp_a1_3, u16 *, 0x1A);
                                M2C_FIELD(temp_a1_3, s32 *, 0) = (s32) M2C_FIELD(temp_a1_3, s32 *, 4);
                                M2C_FIELD(temp_a1_3, u16 *, 0x1C) = (u16) M2C_FIELD(temp_a1_3, u16 *, 0x1E);
                                var_t1_2 += 1;
                                var_t2_2 += 0x28;
                            } while (var_t1_2 < (s32) M2C_FIELD((((s32) D_80078C9C * 0x2AC) + (*D_800944B8)), u16 *, 0x2A2));
                        }
                        temp_v0_3 = ((s32) D_80078C9C * 0x2AC) + (*D_800944B8);
                        M2C_FIELD(temp_v0_3, s32 *, 0x298) = (s32) M2C_FIELD(temp_v0_3, s32 *, 0x29C);
                    } else {
                        M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 4);
                    }
                }
block_37:
                var_v1 = arg2 & 0xFF;
            }
        }
        var_a0 = temp_t4 & 0xFF;
        if (var_v1 == 6) {
            var_a0 = temp_t4 & 0xFF;
            if (M2C_FIELD((((temp_t4 & 0xFF) * 0x54) + (*D_800937D0)), u8 *, 0x24) == 0x14) {
                temp_v1_5 = ((s32) D_80078C9C * 0x2AC) + (*D_800944B8);
                if (M2C_FIELD(temp_v1_5, u16 *, 0x2A0) != 0) {
                    var_t1_3 = 0;
                    if (M2C_FIELD(temp_v1_5, u16 *, 0x2A2) != 0) {
                        var_a1 = 0;
                        do {
                            M2C_FIELD((var_a1 + ((s32) D_80078C9C * 0x2AC) + (*D_800944B8)), u8 *, 0x22) = arg3;
                            var_t1_3 += 1;
                            var_a1 += 0x28;
                        } while (var_t1_3 < (s32) M2C_FIELD((((s32) D_80078C9C * 0x2AC) + (*D_800944B8)), u16 *, 0x2A2));
                        var_a0 = temp_t4 & 0xFF;
                    } else {
                        var_a0 = temp_t4 & 0xFF;
                    }
                    goto block_48;
                }
                M2C_FIELD(arg0, u8 *, 0x22) = arg3;
                return;
            }
        }
block_48:
        func_80039E60(var_a0, arg2 & 0xFF, arg3 & 0xFF);
        return;
    case 0xE0:
        func_8003A5C8(temp_t4 & 0xFF, arg2 & 0xFF, arg3 & 0xFF);
        return;
    case 0xC0:
        func_8003A594(temp_t4 & 0xFF, arg2 & 0xFF);
        return;
    case 0xD0:
        func_8003A5C0(temp_t4 & 0xFF, arg2 & 0xFF);
        return;
    }
}
