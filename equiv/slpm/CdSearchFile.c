#include "common.h"

void *CdSearchFile(void *arg0, s8 *arg1) {
    extern s32 D_80131D28[];
    extern s32 D_80131D34[];
    extern s32 D_80132048[];
    extern u8 D_80134F18[];
    s8 sp10;
    u8 *var_a0_2;
    u8 *var_s3;
    s32 var_a0;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_v0_2;
    s8 *var_a1;
    s8 *var_s0_2;
    s8 *var_s1;
    s8 var_v0;
    u8 var_v1;
    void *var_s0;

    if ((*D_80132048) != (*D_80131D34)) {
        if (func_80118CDC() != 0) {
            (*D_80132048) = (*D_80131D34);
            goto block_3;
        }
        /* Duplicate return node #38. Try simplifying control flow for better match */
        return NULL;
    }
block_3:
    if (*arg1 != 0x5C) {
        return NULL;
    }
    sp10 = 0;
    var_a0 = 1;
    var_s0_2 = arg1;
    var_s2 = 0;
loop_7:
    var_v0 = *var_s0_2;
    var_v1 = (u8) *var_s0_2;
    var_s1 = &sp10;
    if (var_v0 != 0x5C) {
loop_9:
        var_v0_2 = var_s2 < 8;
        if (var_v1 != 0) {
            var_s0_2 += 1;
            *var_s1 = (s8) var_v1;
            var_v1 = (u8) *var_s0_2;
            var_s1 += 1;
            if (*var_s0_2 == 0x5C) {
                var_v0 = *var_s0_2;
                goto block_12;
            }
            goto loop_9;
        }
    } else {
block_12:
        var_v0_2 = var_s2 < 8;
        if (var_v0 != 0) {
            var_s0_2 += 1;
            *var_s1 = 0;
            var_a0 = func_80118FA0(var_a0, &sp10);
            if (var_a0 != -1) {
                var_s2 += 1;
                if (var_s2 >= 8) {
                    goto block_15;
                }
                goto loop_7;
            }
            sp10 = 0;
block_15:
            var_v0_2 = var_s2 < 8;
        }
    }
    if (var_v0_2 == 0) {
        if ((*D_80131D28) > 0) {
            slpm_printf("%s: path level (%d) error\n", arg1, var_s2);
            return NULL;
        }
        goto block_37;
    }
    if (sp10 == 0) {
        var_a1 = arg1;
        if ((*D_80131D28) > 0) {
            var_a0_2 = "%s: dir was not found\n";
            goto block_36;
        }
        goto block_37;
    }
    *var_s1 = 0;
    if (func_80119044(var_a0) == 0) {
        if ((*D_80131D28) > 0) {
            slpm_printf("CdSearchFile: disc error\n");
            return NULL;
        }
        /* Duplicate return node #38. Try simplifying control flow for better match */
        return NULL;
    }
    var_s2_2 = 0;
    if ((*D_80131D28) >= 2) {
        slpm_printf("CdSearchFile: searching %s...\n", &sp10);
        var_s2_2 = 0;
    }
    var_s0 = D_80134F18 - 8;
    var_s3 = D_80134F18;
    var_s1_2 = 0;
loop_28:
    if (*(D_80134F18 + var_s1_2) != 0) {
        if (func_80118CBC(var_s3, &sp10) != 0) {
            if ((*D_80131D28) >= 2) {
                slpm_printf("%s:  found\n", &sp10);
            }
            M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(var_s0, s32 *, 0);
            M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(var_s0, s32 *, 4);
            M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(var_s0, s32 *, 8);
            M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(var_s0, s32 *, 0xC);
            M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(var_s0, s32 *, 0x10);
            M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(var_s0, s32 *, 0x14);
            return var_s0;
        }
        var_s0 += 0x18;
        var_s3 += 0x18;
        var_s2_2 += 1;
        var_s1_2 += 0x18;
        if (var_s2_2 >= 0x40) {
            goto block_34;
        }
        goto loop_28;
    }
block_34:
    var_a1 = &sp10;
    if ((*D_80131D28) > 0) {
        var_a0_2 = "%s: not found\n";
block_36:
        slpm_printf(var_a0_2, var_a1);
    }
block_37:
    return NULL;
}
