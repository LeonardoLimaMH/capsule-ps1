#include "common.h"

extern u8 D_800B3B38[];
extern u8 D_800B3B70[];
extern u8 D_800B3B90[];

void func_800A2CC8(s32 first, s32 end) {
    s32 i, j;

    for (i = first; i < end; i++) {
        for (j = 0; j < 6; j++) {
            *(s16 *)(D_800B3B38 + i * 0xC + 0x10 + j * 2) = -1;
            *(s16 *)(D_800B3B70 + i * 0xC + j * 2) = 0;
        }
        for (j = 0x31; j >= 0; j--) {
            D_800B3B90[i * 0x32 + j] = 0;
        }
        *(s16 *)(D_800B3B38 + i * 2 + 4) = 6;
    }
}
