#include "ghidra.h"
#include "matching.h"
#include "common.h"








s32 func_800A7BB4(s32 param_1, u32 param_2, u8 *param_3) {
    s32 iVar2 = 0;

    switch (param_2 & 0x7F) {
    case 0:
        break;
    case 1:
        if (param_3[0x27] == 0) {
            if (*param_3 == 0xC) {
                if (param_3[0x29] != 0) {
                    iVar2 = param_1 + 0xE3;
                    break;
                }
            }
            iVar2 = param_1 * 3;
        } else {
            switch (*param_3) {
            case 0x47:
                iVar2 = param_1 + 0xE8;
                break;
            case 0x31:
                iVar2 = param_1 + 0x100;
                break;
            case 0x48:
                iVar2 = param_1 + 0xE0;
                break;
            default:
                iVar2 = param_1 + 0xD8;
                break;
            }
        }
        break;
    case 2:
        iVar2 = param_1 * 3 + 0x3F;
        break;
    case 4:
        iVar2 = 0x57;
        break;
    case 5:
        iVar2 = 0x5D;
        break;
    case 6:
        iVar2 = param_1 * 3 + 0x9C;
        break;
    case 7:
    case 8:
    case 9:
        iVar2 = param_1 * 3 + 0xB4;
        break;
    }
    return iVar2;
}

