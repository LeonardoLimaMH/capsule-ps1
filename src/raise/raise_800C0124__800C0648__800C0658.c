#include "common.h"

void func_800C0658(void) {
    extern u8 D_80085428[];
    extern s32 D_800EEBA8[];
    extern s16 D_800F0708[];
    extern s16 D_800F0710[];
    extern s16 D_80100E60[];
    if (D_800F0710[0] != 0) {
        switch (D_80100E60[0]) {
        case 0:
            if (D_800EEBA8[0] != 0x2A) {
                func_800C0898();
                D_80100E60[0]++;
            }
            break;
        case 1:
            switch (D_80100E60[4]) {
            case 2:
            case 0:
                if (func_800220D4(D_80085428, 0, 0, 2) != 0) D_80100E60[0]++;
                break;
            case 1:
                if (func_800220D4(D_80085428, 0, 0, 3) != 0) D_80100E60[0]++;
                break;
            }
            break;
        case 2:
            D_800F0710[0] = 0;
            if (D_800F0708[0] == 1) D_800F0708[0] = 0;
            D_80100E60[0] = 0;
            if (func_800C0888() == 0) D_800F0710[0] = 1;
            break;
        }
    }
}
