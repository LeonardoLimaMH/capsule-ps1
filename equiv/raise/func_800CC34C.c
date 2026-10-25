#include "common.h"

extern s32 D_800F19C8[2][6][3];
extern u8 D_80103CE8[8][8];

s32 func_800CC34C(void) {
    s32 i, j, k;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 6; j++)
            for (k = 2; k >= 0; k--) D_800F19C8[i][j][k] = 0;
    for (i = 0; i < 8; i++)
        for (k = 7; k >= 0; k--) D_80103CE8[i][k] = 0;
    return 0;
}
