#include "common.h"

extern u8 D_80069AD4[];
extern u8 D_80069E4C[];
extern s32 D_8006AF30[];
extern s16 D_80078C28, D_80078C2A, D_80078C2C;

void func_80024990(u8 *o, s32 a1, s32 a2, s32 a3) {
    s32 i;

    func_800254A0();
    *(s32 *)(o + 0x54) = 0;
    *(s32 *)(o + 0x50) |= 8;
    *(s32 *)(D_80069AD4 + 0x178) = a1 == 2 ? 4 : 5;
    D_80078C28 = a1;
    D_80078C2A = a2;
    D_80078C2C = a3;
    *(s32 *)(D_80069E4C + 0x50) = D_8006AF30[a3];
    for (i = 0; i < 0x18; i++) {
        D_80069E4C[0x38 + i] = D_80069AD4[0xD8 + i];
    }
}
