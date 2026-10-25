#include "common.h"

extern volatile u8 *D_8007334C, *D_80073358, *D_80073354, *D_80073350;
extern s32 D_8007324C[], D_8007314C[];
extern u8 D_800730A5, D_80073364[];
extern s32 D_80073094, D_80073098, D_8007309C, D_80073090;
extern u8 *D_800730AC[];
extern u8 D_80094C18[], D_80094C20[], D_80094C28[];
extern u8 D_800110C8[], D_800110D4[], D_800110F0[], D_80011104[];

static void copy8(u8 *dst, u8 *src) {
    s32 i;

    for (i = 7; i != -1; i--) {
        *dst++ = *src++;
    }
}

s32 func_800459CC(void) {
    u8 res[8];
    u8 intr;
    s32 s1 = 0;
    s32 n, i;

    *D_8007334C = 1;
    intr = *D_80073358 & 7;
    if (intr == 0) {
        return 0;
    }
    while ((*D_80073358 & 7) != intr) {
        intr = *D_80073358 & 7;
    }
    for (n = 0; n < 8; n++) {
        if (!(*D_8007334C & 0x20)) {
            break;
        }
        res[n] = *D_80073350;
    }
    for (i = n; i < 8; i++) {
        res[i] = 0;
    }
    *D_8007334C = 1;
    *D_80073358 = 7;
    *D_80073354 = 7;
    if (intr != 3 || D_8007324C[D_800730A5] != 0) {
        if (!(D_80073094 & 0x10) && (res[0] & 0x10)) {
            D_8007309C++;
        }
        s1 = res[0] & 0x1D;
        D_80073094 = res[0];
        D_80073098 = res[1];
    }
    if (intr == 5 && D_80073090 > 0) {
        printf(D_800110C8);
        if (D_80073090 > 0) {
            printf(D_800110D4, D_800730AC[D_800730A5], D_80073094, D_80073098);
        }
    }
    switch (intr) {
    case 3:
        if (s1 != 0) {
            D_80073364[0] = 5;
            copy8(D_80094C18, res);
            return 2;
        }
        if (D_8007314C[D_800730A5] != 0) {
            D_80073364[0] = 3;
            copy8(D_80094C18, res);
            return 1;
        }
        D_80073364[0] = 2;
        copy8(D_80094C18, res);
        return 2;
    case 2:
        D_80073364[0] = s1 != 0 ? 5 : 2;
        copy8(D_80094C18, res);
        return 2;
    case 1:
        if (s1 != 0 && n == 1) {
            s1 = 0;
        }
        D_80073364[1] = s1 != 0 ? 5 : 1;
        copy8(D_80094C20, res);
        *D_8007334C = 0;
        *D_80073358 = 0;
        return 4;
    case 4:
        D_80073364[2] = 4;
        D_80073364[1] = D_80073364[2];
        copy8(D_80094C28, res);
        copy8(D_80094C20, res);
        return 4;
    case 5:
        D_80073364[1] = 5;
        D_80073364[0] = D_80073364[1];
        copy8(D_80094C18, res);
        copy8(D_80094C20, res);
        return 6;
    }
    puts(D_800110F0);
    printf(D_80011104, intr);
    return 0;
}
