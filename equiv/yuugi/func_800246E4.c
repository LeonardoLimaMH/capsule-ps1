#include "common.h"

extern s32 D_80069E6C[];
extern s32 D_8006AF70[];
extern s16 D_80078C24, D_80078C26, D_80078C28, D_80078C2A, D_80078C2C, D_80078C30;
extern s16 D_800EFA4A, D_800EFA4C, D_800EFA4E;

s32 func_800246E4(void) {
    D_80069E6C[0] = 0;
    D_80069E6C[1] = 0;
    D_80069E6C[2] = 0;
    ((s16 *)D_80069E6C)[8] = 0;
    ((s16 *)D_80069E6C)[9] = 0;
    ((s16 *)D_80069E6C)[10] = 0;
    D_8006AF70[0] = 0;
    D_8006AF70[1] = 0;
    D_8006AF70[2] = 0;
    D_80078C24 = 0;
    D_80078C26 = 0;
    D_80078C28 = 0;
    D_80078C2A = 0;
    D_80078C2C = 0;
    D_80078C30 = 0;
    D_800EFA4A = 0;
    D_800EFA4C = 0;
    D_800EFA4E = 0x3C;
    return 0x3C;
}
