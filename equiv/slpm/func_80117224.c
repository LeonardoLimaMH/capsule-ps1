#include "common.h"

extern volatile u8 *D_80131FE4, *D_80131FF0, *D_80131FEC, *D_80131FE8;
extern s32 D_80131EE4[], D_80131DE4[];
extern u8 D_80131D3D, D_80131FFC[];
extern s32 D_80131D2C, D_80131D30, D_80131D34, D_80131D28;
extern u8 *D_80131D44[];
extern u8 D_80134ED8[], D_80134EE0[], D_80134EE8[];
extern u8 D_80110770[], D_8011077C[], D_80110798[], D_801107AC[];

static void copy8(u8 *dst, u8 *src) {
    s32 i;

    for (i = 7; i != -1; i--) {
        *dst++ = *src++;
    }
}

s32 func_80117224(void) {
    u8 res[8];
    u8 intr;
    s32 s1 = 0;
    s32 n, i;

    *D_80131FE4 = 1;
    intr = *D_80131FF0 & 7;
    if (intr == 0) {
        return 0;
    }
    while ((*D_80131FF0 & 7) != intr) {
        intr = *D_80131FF0 & 7;
    }
    for (n = 0; n < 8; n++) {
        if (!(*D_80131FE4 & 0x20)) {
            break;
        }
        res[n] = *D_80131FE8;
    }
    for (i = n; i < 8; i++) {
        res[i] = 0;
    }
    *D_80131FE4 = 1;
    *D_80131FF0 = 7;
    *D_80131FEC = 7;
    if (intr != 3 || D_80131EE4[D_80131D3D] != 0) {
        if (!(D_80131D2C & 0x10) && (res[0] & 0x10)) {
            D_80131D34++;
        }
        s1 = res[0] & 0x1D;
        D_80131D2C = res[0];
        D_80131D30 = res[1];
    }
    if (intr == 5 && D_80131D28 > 0) {
        slpm_printf(D_80110770);
        if (D_80131D28 > 0) {
            slpm_printf(D_8011077C, D_80131D44[D_80131D3D], D_80131D2C, D_80131D30);
        }
    }
    switch (intr) {
    case 3:
        if (s1 != 0) {
            D_80131FFC[0] = 5;
            copy8(D_80134ED8, res);
            return 2;
        }
        if (D_80131DE4[D_80131D3D] != 0) {
            D_80131FFC[0] = 3;
            copy8(D_80134ED8, res);
            return 1;
        }
        D_80131FFC[0] = 2;
        copy8(D_80134ED8, res);
        return 2;
    case 2:
        D_80131FFC[0] = s1 != 0 ? 5 : 2;
        copy8(D_80134ED8, res);
        return 2;
    case 1:
        if (s1 != 0 && n == 1) {
            s1 = 0;
        }
        D_80131FFC[1] = s1 != 0 ? 5 : 1;
        copy8(D_80134EE0, res);
        *D_80131FE4 = 0;
        *D_80131FF0 = 0;
        return 4;
    case 4:
        D_80131FFC[2] = 4;
        D_80131FFC[1] = D_80131FFC[2];
        copy8(D_80134EE8, res);
        copy8(D_80134EE0, res);
        return 4;
    case 5:
        D_80131FFC[1] = 5;
        D_80131FFC[0] = D_80131FFC[1];
        copy8(D_80134ED8, res);
        copy8(D_80134EE0, res);
        return 6;
    }
    slpm_puts(D_80110798);
    slpm_printf(D_801107AC, intr);
    return 0;
}
