#include "common.h"

void *func_80111268(void *arg0) {
    extern u8 D_7FFFFF[];
    extern u32 D_8013347C;
    extern u32 D_80133480;
    extern s32 D_8013348C;
    extern void * D_801334A0;
    void *sp10;
    void *sp14;
    s16 sp18;
    s16 sp1A;
    s16 sp1C;
    s16 sp1E;
    u8 *var_a0;
    u8 *var_s0;
    s32 var_v0;
    u16 temp_v0_2;
    u32 temp_v0;

    var_s0 = D_7FFFFF;
loop_1:
    if (StGetNext(&sp10, &sp14) != 0) {
        if (var_s0 == NULL) {
            var_a0 = "strnext error";
            goto block_9;
        }
        goto loop_1;
    }
    if ((u32) M2C_FIELD(sp14, u32 *, 8) >= (u32) D_80133480) {
        M2C_FIELD(D_801334A0, s32 *, 0x34) = 1;
    }
    if (M2C_FIELD(sp10, s32 *, 0) == M2C_FIELD(sp14, s32 *, 0x14)) {
        if (M2C_FIELD(sp10, s32 *, 4) != M2C_FIELD(sp14, s32 *, 0x18)) {
            goto block_8;
        }
        D_8013347C = M2C_FIELD(sp14, u32 *, 8);
        if (M2C_FIELD(D_801334A0, s32 *, 0x3C) == M2C_FIELD(sp14, u16 *, 0x10)) {
            if (M2C_FIELD(D_801334A0, s32 *, 0x40) != M2C_FIELD(sp14, u16 *, 0x12)) {
                goto block_12;
            }
        } else {
block_12:
            sp18 = 0;
            sp1A = 0;
            sp1C = 0x280;
            sp1E = 0x1E0;
            slpm_ClearImage(&sp18, 0, 0, 0);
            M2C_FIELD(D_801334A0, s32 *, 0x3C) = (s32) M2C_FIELD(sp14, u16 *, 0x10);
            M2C_FIELD(D_801334A0, s32 *, 0x40) = (s32) M2C_FIELD(sp14, u16 *, 0x12);
            slpm_printf("movie.c:%x-%x\n", M2C_FIELD(sp14, u16 *, 0x10), M2C_FIELD(sp14, u16 *, 0x12));
        }
        if (D_8013348C & 1) {
            temp_v0 = M2C_FIELD(D_801334A0, s32 *, 0x3C) * 3;
            var_v0 = (s32) (temp_v0 + (temp_v0 >> 0x1F)) >> 1;
        } else {
            var_v0 = (s32) (u16) M2C_FIELD(D_801334A0, s32 *, 0x3C);
        }
        M2C_FIELD(arg0, s16 *, 0x1C) = (s16) var_v0;
        M2C_FIELD(arg0, s16 *, 0x14) = (s16) var_v0;
        temp_v0_2 = (u16) M2C_FIELD(D_801334A0, s32 *, 0x40);
        M2C_FIELD(arg0, u16 *, 0x1E) = temp_v0_2;
        M2C_FIELD(arg0, u16 *, 0x16) = temp_v0_2;
        M2C_FIELD(arg0, u16 *, 0x2A) = (u16) M2C_FIELD(D_801334A0, s32 *, 0x40);
        return sp10;
    }
block_8:
    StFreeRing(sp10, sp14);
    var_a0 = "strnext header is wrong!\n";
block_9:
    slpm_printf(var_a0);
    return NULL;
}
