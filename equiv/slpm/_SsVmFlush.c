#include "common.h"

void _SsVmFlush(void) {
    extern u16 D_80137C78[];
    extern u16 D_80137C7A[];
    extern u16 D_80137C7C[];
    extern u8 D_80137C7E[];
    extern u16 D_80137C80[];
    extern u8 D_80137C82[];
    extern u8 D_80137C8E[];
    extern s8 D_80137CA5[];
    extern u8 D_80137CA6[];
    extern u8 D_80137CB2[];
    extern u8 D_80138198[];
    extern M2C_UNK (*D_801381B0)(s32);
    extern u16 D_801381B8[];
    extern M2C_UNK (*D_80138338)(s32);
    extern s32 D_8013833C[];
    extern s32 D_80138340[];
    extern u16 D_80138380[];
    extern u16 D_80138382[];
    extern s8 D_8013847C[];
    extern s8 D_801384B0[];
    s32 sp10;
    s32 sp14;
    u16 sp18;
    u16 sp1A;
    u16 sp24;
    s32 sp2C;
    u16 sp4A;
    u16 sp4C;
    u8 *var_s2;
    s16 var_a1;
    s32 *temp_v0_2;
    s32 *var_v1;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s1;
    s32 var_s1_3;
    s32 var_s2_2;
    s32 var_v0;
    s8 *var_s1_2;
    u16 *var_s2_3;
    u16 *var_s3;
    u16 *var_s4;
    u16 *var_s5;
    u16 *var_s6;
    u16 *var_s7;
    u8 *var_s1_4;

    temp_v0 = ((*D_8013833C) + 1) & 0xF;
    (*D_8013833C) = temp_v0;
    (D_80138340)[temp_v0] = 0;
    var_s0 = 0;
    if ((*D_8013847C) > 0) {
        var_s2 = D_80137C8E;
        var_s1 = 0;
        do {
            slpm_SpuGetVoiceEnvelope(var_s0, var_s2);
            if (*(D_80137C8E + var_s1) == 0) {
                temp_v0_2 = &(D_80138340)[(*D_8013833C)];
                *temp_v0_2 |= 1 << var_s0;
            }
            var_s2 += 0x36;
            var_s0 += 1;
            var_s1 += 0x36;
        } while (var_s0 < (*D_8013847C));
    }
    var_s0_2 = 0;
    if ((*D_801384B0) == 0) {
        var_s2_2 = -1;
        var_v1 = D_80138340;
        do {
            var_s0_2 += 1;
            var_s2_2 &= *var_v1;
            var_v1 += 4;
        } while (var_s0_2 < 0xF);
        var_s0_3 = 0;
        if ((*D_8013847C) > 0) {
            var_s1_2 = D_80137CA5;
            do {
                var_a1 = 1 << var_s0_3;
                if (var_s2_2 & var_a1) {
                    if (*var_s1_2 == 2) {
                        var_v0 = 0;
                        if (var_s0_3 >= 0x10) {
                            var_a1 = 0;
                            var_v0 = 1 << (var_s0_3 - 0x10);
                        }
                        SpuSetNoiseVoice(0, ((var_v0 & 0xFF) << 0x10) | var_a1);
                    }
                    *var_s1_2 = 0;
                }
                var_s0_3 += 1;
                var_s1_2 += 0x36;
            } while (var_s0_3 < (*D_8013847C));
        }
        var_s0_2 = 0;
    }
    var_s1_3 = 0;
    (*D_80137C78) &= ~(*D_80138380);
    (*D_80137C7A) &= ~(*D_80138382);
    do {
        if (*(D_80137CA6 + var_s1_3) != 0) {
            D_80138338(var_s0_2);
        }
        if (*(D_80137CB2 + var_s1_3) != 0) {
            D_801381B0(var_s0_2);
        }
        var_s0_2 += 1;
        var_s1_3 += 0x36;
    } while (var_s0_2 < 0x18);
    var_s0_4 = 0;
    var_s1_4 = D_80138198;
    var_s7 = (u8 *)D_801381B8 + 0xA;
    var_s6 = (u8 *)D_801381B8 + 8;
    var_s5 = (u8 *)D_801381B8 + 6;
    var_s4 = (u8 *)D_801381B8 + 4;
    var_s3 = (u8 *)D_801381B8 + 2;
    var_s2_3 = D_801381B8;
    do {
        sp14 = 0;
        sp10 = 1 << var_s0_4;
        if (*var_s1_4 & 1) {
            sp14 = 3;
            sp18 = *var_s2_3;
            sp1A = *var_s3;
        }
        if (*var_s1_4 & 4) {
            sp14 |= 0x10;
            sp24 = *var_s4;
        }
        if (*var_s1_4 & 8) {
            sp14 |= 0x80;
            sp2C = *var_s5 * 8;
        }
        if (*var_s1_4 & 0x10) {
            sp14 |= 0x60000;
            sp4A = *var_s6;
            sp4C = *var_s7;
        }
        if (sp14 != 0) {
            slpm_SpuSetVoiceAttr(&sp10);
        }
        *var_s1_4 = 0;
        var_s1_4 += 1;
        var_s7 += 0x10;
        var_s6 += 0x10;
        var_s5 += 0x10;
        var_s4 += 0x10;
        var_s3 += 0x10;
        var_s0_4 += 1;
        var_s2_3 += 0x10;
    } while (var_s0_4 < 0x18);
    slpm_SpuSetKey(0, ((u8) (*D_80138382) << 0x10) | (*D_80138380));
    slpm_SpuSetKey(1, ((u8) (*D_80137C7A) << 0x10) | (*D_80137C78));
    slpm_SpuSetReverbVoice(8, ((*D_80137C7E) << 0x10) | (*D_80137C7C));
    SpuSetNoiseVoice(8, ((*D_80137C82) << 0x10) | (*D_80137C80));
    (*D_80138380) = 0;
    (*D_80138382) = 0;
    (*D_80137C78) = 0;
    (*D_80137C7A) = 0;
    (*D_80137C80) = 0;
    (*D_80137C82) = 0;
}
