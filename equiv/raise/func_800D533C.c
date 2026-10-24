#include "common.h"

void func_800D533C(void) {
    extern M2C_UNK D_8006AF80[];
    extern M2C_UNK D_80091618[];
    extern s32 D_800F1D18[];
    s16 temp_v0;
    s32 temp_a1;
    s32 temp_hi;
    s32 temp_v0_2;

    temp_hi = MULT_HI(M2C_FIELD(D_8006AF80, s32 *, 4), 0x1B4E81B5);
    temp_a1 = M2C_FIELD(D_8006AF80, s32 *, 4) % 1200;
    switch (temp_a1) {                              /* irregular */
    case 0x12C:
        if ((*D_800F1D18) == -1) {
            (*D_800F1D18) = (s32) M2C_FIELD(D_8006AF80, u16 *, 0);
        }
        if ((func_800AECC8((u16) (*D_800F1D18), temp_a1, D_8006AF80, temp_hi) != -1) && (func_800E14C4((u16) (*D_800F1D18)) == 0) && (func_800E1388((u16) (*D_800F1D18)) != 0) && (M2C_FIELD((((*D_800F1D18) * 0x1A8) + D_80091618), s32 *, 0xC4) >= 0xE11)) {
            temp_v0 = func_800E7B80((s16) (*D_800F1D18));
            if (temp_v0 != -1) {
                func_800C0810(temp_v0, (u16) (*D_800F1D18));
                return;
            }
        }
        return;
    case 0x384:
        if ((*D_800F1D18) == -1) {
            (*D_800F1D18) = (s32) M2C_FIELD(D_8006AF80, u16 *, 0);
        }
        temp_v0_2 = func_800AECC8((u16) (*D_800F1D18), temp_a1, D_8006AF80, temp_hi);
        if (temp_v0_2 != -1) {
            if (M2C_FIELD((((*D_800F1D18) * 0x1A8) + D_80091618), s32 *, 0xC4) >= 0xE10) {
                func_800D262C(temp_v0_2, (*D_800F1D18));
            }
        }
        (*D_800F1D18) = ((*D_800F1D18) + 1) % 6;
        break;
    }
}
