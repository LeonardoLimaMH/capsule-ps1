#include "common.h"

void func_800EECC0(void *arg0) {
    extern u8 D_80018600[];
    extern s8 D_8008610C[];
    extern u8 D_8008ED68[];
    extern u8 D_801021B4[];
    extern s8 D_8011974D[];
    extern int func_800F52C4();
    u16 sp28;
    u16 sp2C;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_s5;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s8 temp_a1;
    s8 temp_v1_2;
    s8 temp_v1_3;
    u16 temp_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_v0;

    temp_s3 = M2C_FIELD(arg0, s32 *, 0x50);
    (*D_8011974D) = 0;
    if (temp_s3 >= 0x55) {
        func_80013920();
        temp_a0 = M2C_FIELD(arg0, void **, 0x58);
        M2C_FIELD(temp_a0, s32 *, 0x18) = (s32) (M2C_FIELD(temp_a0, s32 *, 0x18) ^ 0x80000000);
        (*D_8008610C) = 1;
        return;
    }
    temp_v1 = (M2C_FIELD(arg0, u16 *, 0x48) + 0x96) - ((temp_s3 * 0xA0) / 100);
    M2C_FIELD(arg0, u16 *, 0x48) = temp_v1;
    if (temp_v1 & 0x8000) {
        M2C_FIELD(arg0, u16 *, 0x48) = 0U;
    }
    var_v0 = temp_s3 < 0x33;
    if (temp_s3 == 0x32) {
        temp_v0 = func_80015B3C(D_80018600, &func_800F52C4, 1);
        M2C_FIELD(temp_v0, s8 *, 0x28) = 0xFF;
        M2C_FIELD(temp_v0, s8 *, 0x29) = 0xFF;
        M2C_FIELD(temp_v0, s8 *, 0x2A) = 0xFF;
        M2C_FIELD(temp_v0, s8 *, 0x30) = 1;
        M2C_FIELD(temp_v0, s8 *, 0x2C) = 0;
        M2C_FIELD(temp_v0, s8 *, 0x2D) = 0;
        M2C_FIELD(temp_v0, s8 *, 0x2E) = 0;
        M2C_FIELD(temp_v0, s16 *, 0x32) = 0xF;
        func_80034AB0(0x76);
        func_80034AB0(0x50);
        temp_a0_2 = M2C_FIELD(arg0, void **, 0x58);
        M2C_FIELD(temp_a0_2, s32 *, 0x18) = (s32) (M2C_FIELD(temp_a0_2, s32 *, 0x18) | 0x80000000);
        var_v0 = temp_s3 < 0x33;
    }
    var_v0_2 = temp_s3 < 0x32;
    if (var_v0 == 0) {
        temp_s5 = M2C_FIELD(D_8008ED68, s32 *, 0xA60);
        var_v0_2 = temp_s3 < 0x32;
        if (temp_s5 == 1) {
            func_800CA268((s16) ((M2C_FIELD(D_8008ED68, u16 *, 0xA3C) + ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x108) / 2)) - 0xA), (s16) ((M2C_FIELD(D_8008ED68, u16 *, 0xA40) + ((s32) M2C_FIELD(D_8008ED68, s32 *, 0x10C) / 2)) - 0x3C), 2, 0xBB8, 0xBB8, 0xA);
            func_8001F524((s16) (M2C_FIELD(D_8008ED68, u16 *, 0xA3C) - 0x14), (s16) (M2C_FIELD(D_8008ED68, u16 *, 0xA40) - 0x3E), 2, 0, M2C_FIELD(arg0, s32 *, 0x5C), temp_s5, 0x1000, 0x1000, 0xA, 0);
            M2C_FIELD(arg0, s16 *, 0x42) = 0x96;
            M2C_FIELD(arg0, s16 *, 0x44) = 0x3C;
            M2C_FIELD(arg0, s16 *, 0x46) = 0x5A;
            func_800FE188(M2C_FIELD(arg0, void **, 0x58), &sp28);
            temp_s0 = 0x55 - temp_s3;
            temp_s1 = temp_s0 / 2;
            sp28 += ((func_800202A4(temp_s0) - temp_s1) * 2) / 3;
            sp2C += ((func_800202A4(temp_s0) - temp_s1) * 2) / 3;
            func_800FF190(M2C_FIELD(arg0, void **, 0x58), &sp28, 0xA);
            temp_a0_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x58), void **, 0x70);
            M2C_FIELD(temp_a0_3, s32 *, 0x34) = (s32) ((M2C_FIELD(temp_a0_3, s32 *, 0x34) & ~0x7F) | ((M2C_FIELD(arg0, s32 *, 0x50) % 2) & 0x7F));
            goto block_13;
        }
    }
    if (var_v0_2 != 0) {
        M2C_FIELD(arg0, s16 *, 0x42) = (s16) (0x258 - (temp_s3 * 9));
        M2C_FIELD(arg0, s16 *, 0x44) = (s16) (0x1F4 - ((temp_s3 * 0x1B8) / 50));
        M2C_FIELD(arg0, s16 *, 0x46) = (s16) (0x258 - ((temp_s3 * 0x1FE) / 50));
        goto block_13;
    }
    var_v0_3 = temp_s3 < 0x32;
    if (temp_s3 >= 0x33) {
        func_8001F1A8((s16) (M2C_FIELD(D_8008ED68, u16 *, 0xA3C) - 0xA), (s16) (M2C_FIELD(D_8008ED68, u16 *, 0xA40) - 0x3C), 1, 0, 0, D_801021B4, 1, 2, 3);
block_13:
        var_v0_3 = temp_s3 < 0x32;
    }
    if (var_v0_3 != 0) {
        M2C_FIELD(arg0, s8 *, 0x34) = (s8) temp_s3;
        M2C_FIELD(arg0, s8 *, 0x35) = (s8) (temp_s3 * 2);
        M2C_FIELD(arg0, s8 *, 0x36) = (s8) temp_s3;
        temp_v1_2 = (temp_s3 * 0xB4) / 50;
        M2C_FIELD(arg0, s8 *, 0x30) = temp_v1_2;
        M2C_FIELD(arg0, s8 *, 0x32) = temp_v1_2;
        M2C_FIELD(arg0, s8 *, 0x31) = (s8) ((temp_s3 << 8) / 50);
    } else {
        temp_s3_2 = M2C_FIELD(arg0, s32 *, 0x50) - 0x32;
        temp_v1_3 = -0x4C - ((temp_s3_2 * 0xB4) / 35);
        M2C_FIELD(arg0, s8 *, 0x30) = temp_v1_3;
        M2C_FIELD(arg0, s8 *, 0x32) = temp_v1_3;
        M2C_FIELD(arg0, s8 *, 0x31) = (s8) -((temp_s3_2 << 8) / 35);
        temp_a1 = 0x32 - ((temp_s3_2 * 0x32) / 35);
        M2C_FIELD(arg0, s8 *, 0x34) = temp_a1;
        M2C_FIELD(arg0, s8 *, 0x36) = temp_a1;
        M2C_FIELD(arg0, s8 *, 0x35) = (s8) (0x64 - ((temp_s3_2 * 0x64) / 35));
    }
    M2C_FIELD(arg0, s32 *, 0x50) = (s32) (M2C_FIELD(arg0, s32 *, 0x50) + 1);
}
