#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B1700);

#include "common.h"

s32 func_800B1940(void) {
    extern s32 D_800EEB88[];
    extern s16 D_80103D38[];
    s32 var_v0;

    if ((*D_800EEB88) == 0) {
        (*D_800EEB88) = 8;
        func_800CD288((*D_80103D38), 0);
        func_800C60E0((*D_80103D38), 0);
        func_800C62A4((*D_80103D38), 0);
        func_800C5EFC((*D_80103D38), 0);
        var_v0 = 1;
        if ((*D_80103D38) == 1) {
            func_800E20A8();
            func_800CD418(0, 1);
            return 1;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return var_v0;
    }
    (*D_800EEB88) -= 1;
    var_v0 = 0;
    return var_v0;
}

extern u8 D_800EEB9C[];
extern s32 D_800EE5D0[], D_800F2DBC[];
extern u8 *D_800F2DC0[];
extern s32 func_80019F30(s32, s32);
extern void func_80015CD0(void *, s32, s32);
void func_800B19E0(u16 a0) {
    typedef struct { u8 pad[0x780]; s32 unk780; } S_EEB9C;
    typedef struct { u8 pad[0x79C]; } S_80100F38;
    extern S_80100F38 D_80100F38[];
    extern u8 D_800EEB9C[];
    extern s32 D_800EE5D0[], D_800F2DBC[];
    extern u8 *D_800F2DC0[];
    extern s32 func_80019F30(s32, s32);
    extern void func_80015CD0(void *, s32, s32);
    register u8 *base asm("a1") = (u8 *)D_80100F38;
    s32 offset = a0 * 0x79C;
    u8 **q = (u8 **)((u8 *)&D_80100F38[a0] + 0x194);
    s16 *s = (s16 *)((u8 *)&D_80100F38[a0] + 0x356);
    s32 i = 0;
    s32 r;
    *(s32 *)(base + offset + 0x190) = D_800F2DBC[0];
    do {
        s32 *data = D_800EE5D0;
        *q = D_800F2DC0[i];
        r = func_80019F30(D_800EE5D0[0] | 0x70000, data[6] + ((S_EEB9C *)D_800EEB9C)->unk780 + *s);
        func_80015CD0(*q + 0x14, r, 0);
        *(u16 *)(*q + 0x66) = 0;
        *(s32 *)(*q + 0x30) &= ~0x1C0;
        i++;
        *(s32 *)(*q + 0x30) = (*(s32 *)(*q + 0x30) & ~0x30) | 0x20;
        *(s32 *)(*q + 0x7C) = ((S_EEB9C *)D_800EEB9C)->unk780 + *s;
        q++;
        s++;
    } while (i < 6);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B1B3C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B1DEC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B1E7C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B1EBC);

void func_800B2094(void) {

}

void func_800B209C(void) {

}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B20A4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B21F0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B24B8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B284C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B2984);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B2C64);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B2EA4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B3008);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B3204);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B34FC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B3824);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B3C38);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B3D44);

#include "common.h"

s32 func_800B3E44(s32 arg0, s32 arg1) {
    extern s32 D_8006AF84[];
    extern M2C_UNK D_8006AFCC[];
    extern s16 D_80078C28[];
    s32 temp_s0;
    s32 temp_s1;

    temp_s0 = (*D_8006AF84);
    if ((M2C_GFIELD(D_8006AFCC, u16, 0x36) == 0) && ((*D_80078C28) == 0)) {
        temp_s1 = arg0 & 0xFFFF;
        if (func_800E13C8(temp_s1, arg1 & 0xFFFF) != 0) {
            if (temp_s0 >= 0x4B0) {
                if (temp_s0 != ((temp_s0 / 1200) * 0x4B0)) {
                    if (temp_s0 == ((temp_s0 / 600) * 0x258)) {
                        if (func_800202A4(0x1E0) == 0xF0) {
                            M2C_GFIELD(D_8006AFCC, u16, 0x36) = 2U;
                            func_800D1CC4(temp_s1, 0x13, 0, 0);
                            return 1;
                        }
                        goto block_8;
                    }
                    /* Duplicate return node #9. Try simplifying control flow for better match */
                    return 0;
                }
                goto block_8;
            }
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return 0;
        }
block_8:
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

#include "common.h"

s32 func_800B3F54(s32 arg0, s32 arg1) {
    extern s32 D_8006AF84[];
    extern M2C_UNK D_8006AFCC[];
    extern s16 D_80078C28[];
    s32 temp_s0;
    s32 temp_s1;

    temp_s0 = (*D_8006AF84);
    if ((M2C_GFIELD(D_8006AFCC, u16, 0x38) == 0) && ((*D_80078C28) == 0)) {
        temp_s1 = arg0 & 0xFFFF;
        if (func_800E13C8(temp_s1, arg1 & 0xFFFF) != 0) {
            if (temp_s0 >= 0x4B0) {
                if (temp_s0 != ((temp_s0 / 1200) * 0x4B0)) {
                    if (temp_s0 == ((temp_s0 / 600) * 0x258)) {
                        if (func_800202A4(0x12C0) == 0x960) {
                            M2C_GFIELD(D_8006AFCC, u16, 0x38) = 2U;
                            func_800D1CC4(temp_s1, 0x14, 0, 0);
                            return 1;
                        }
                        goto block_8;
                    }
                    /* Duplicate return node #9. Try simplifying control flow for better match */
                    return 0;
                }
                goto block_8;
            }
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return 0;
        }
block_8:
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B4064);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B418C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B4390);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B44B8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B1700", func_800B4588);
