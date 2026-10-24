#include "common.h"

extern s16 D_800ED88E;
extern u8 D_800EFF58[];

s32 func_800BBF3C(void) {
    *(s32 *)(D_800EFF58 + 0x84) = 0;
    *(s32 *)(D_800EFF58 + 0x88) = 0x20;
    *(s32 *)(D_800EFF58 + 0x8C) = 0;
    if (D_800ED88E == 0) {
        *(s32 *)(D_800EFF58 + 0x90) = 0;
        func_8001A998(D_800EFF58 + 0x94, 0x80);
    }
    *(s32 *)(D_800EFF58 + 0x32C) = 0;
    *(s32 *)(D_800EFF58 + 0x330) = 4;
    return 4;
}
