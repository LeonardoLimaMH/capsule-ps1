#include "common.h"

void func_800C0658(void) {
    extern M2C_UNK D_80085428[];
    extern s32 D_800EEBA8[];
    extern s16 D_800F0708[];
    extern s16 D_800F0710[];
    extern M2C_UNK D_80100E60[];
    if ((*D_800F0710) != 0) {
        switch (M2C_FIELD((*D_80100E60), s16 *, 0)) { /* irregular */
        case 0:
            if ((*D_800EEBA8) != 0x2A) {
                func_800C0898();
block_17:
                M2C_FIELD((*D_80100E60), s16 *, 0) = (s16) ((u16) M2C_FIELD((*D_80100E60), s16 *, 0) + 1);
                return;
            }
            break;
        case 1:
            switch (M2C_FIELD((*D_80100E60), s16 *, 8)) { /* switch 1; irregular */
            case 2:                                 /* switch 1 */
            case 0:                                 /* switch 1 */
                if (func_800220D4((*D_80085428), 0, 0, 2) != 0) {
                    M2C_FIELD((*D_80100E60), s16 *, 0) = (s16) ((u16) M2C_FIELD((*D_80100E60), s16 *, 0) + 1);
                    return;
                }
                break;
            case 1:                                 /* switch 1 */
                if (func_800220D4((*D_80085428), 0, 0, 3) != 0) {
                    goto block_17;
                }
                break;
            }
            break;
        case 2:
            (*D_800F0710) = 0;
            if ((*D_800F0708) == 1) {
                (*D_800F0708) = 0;
            }
            M2C_FIELD((*D_80100E60), s16 *, 0) = 0;
            if (func_800C0888() == 0) {
                (*D_800F0710) = 1;
            }
            break;
        }
    }
}
