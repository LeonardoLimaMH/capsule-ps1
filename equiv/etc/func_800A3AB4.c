#include "common.h"

void func_800A3AB4(void *arg0) {
    extern M2C_UNK D_80065390[];
    extern M2C_UNK D_8008ED68[];
    extern M2C_UNK D_800B3B38[];
    extern M2C_UNK D_800B3B88[];
    u32 temp_a1;

    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 1);
    switch (M2C_FIELD(D_8008ED68, u16 *, 0xDC)) {  /* irregular */
    case 19:
        if (M2C_FIELD(D_8008ED68, u16 *, 0xE0) != 0) {
            if (M2C_FIELD(D_8008ED68, u16 *, 0xDC) == 0x1B) {
            case 27:
                if (M2C_FIELD(D_8008ED68, u16 *, 0xE0) == 4) {
                    goto block_4;
                }
            }
        } else {
block_4:
            temp_a1 = M2C_FIELD(arg0, s32 *, 0x84);
            switch (temp_a1) {                      /* switch 1; irregular */
            case 1:                                 /* switch 1 */
                M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
                if (M2C_FIELD(arg0, s32 *, 0x84) == temp_a1) {
                    M2C_FIELD(arg0, s32 *, 0x18) = func_8001A434(M2C_FIELD(arg0, s32 *, 0x7C) + *(M2C_FIELD(arg0, s32 *, 0x80) + D_800B3B88), D_80065390);
                    return;
                }
                return;
            case 2:                                 /* switch 1 */
                if (M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x80) * 2) + D_800B3B38), s16 *, 8) != 0) {
                case 0:                             /* switch 1 */
                    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
                }
                break;
            }
        }
        break;
    }
}
