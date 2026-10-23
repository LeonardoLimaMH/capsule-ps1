#include "common.h"

void func_800255FC(s32 arg0) {
    extern M2C_UNK D_80069E4C[];
    extern u8 D_80085428[];
    extern M2C_UNK D_80100F38[];
    void *temp_v1;

    if (arg0 != 0) {
        switch ((*D_80085428)) {                       /* irregular */
        case 0:
            temp_v1 = ((func_800B1260() & 0xFFFF) * 0x79C) + (*D_80100F38);
            M2C_FIELD((*D_80069E4C), s32 *, 0) = (s32) ((M2C_FIELD(temp_v1, s16 *, 0x33E) - M2C_FIELD((*D_80069E4C), u8 *, 0x11)) * 0x64);
            M2C_FIELD((*D_80069E4C), s32 *, 4) = (s32) ((M2C_FIELD(temp_v1, s16 *, 0x340) - M2C_FIELD((*D_80069E4C), u8 *, 0x10)) * 0x64);
            M2C_FIELD((*D_80069E4C), s32 *, 8) = (s32) ((M2C_FIELD(temp_v1, s16 *, 0x33C) - M2C_FIELD((*D_80069E4C), u8 *, 0x12)) * 0x32);
            return;
        case 1:
            M2C_FIELD((*D_80069E4C), s32 *, 0) = (s32) ((M2C_FIELD((*D_80069E4C), u8 *, 0x14) - M2C_FIELD((*D_80069E4C), u8 *, 0x11)) * 0x64);
            M2C_FIELD((*D_80069E4C), s32 *, 4) = (s32) ((M2C_FIELD((*D_80069E4C), u8 *, 0x15) - M2C_FIELD((*D_80069E4C), u8 *, 0x10)) * 0x64);
            M2C_FIELD((*D_80069E4C), s32 *, 8) = (s32) ((M2C_FIELD((*D_80069E4C), u8 *, 0x1B) - M2C_FIELD((*D_80069E4C), u8 *, 0x12)) * 0x32);
            break;
        }
    }
}
