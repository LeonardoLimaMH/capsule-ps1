#include "common.h"

void func_8009F1C4(s32 arg0) {
    extern u16 D_8006AF80[];
    extern s16 D_80078C22[];
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_80100F38[];
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_v1;

    switch (arg0) {                                 /* irregular */
    case 0:
        temp_a0 = ((*D_8006AF80) * 0x79C) + (u8 *)D_80100F38;
        if (((*D_80078C22) + 1) < M2C_FIELD(temp_a0, s16 *, 0x338)) {
            M2C_FIELD(temp_a0, s16 *, 0x338) = (s16) ((u16) M2C_FIELD(temp_a0, s16 *, 0x338) - 1);
        }
        break;
    case 1:
        temp_a0_2 = ((*D_8006AF80) * 0x79C) + (u8 *)D_80100F38;
        if (M2C_FIELD(temp_a0_2, s16 *, 0x338) < 8) {
            M2C_FIELD(temp_a0_2, s16 *, 0x338) = (s16) ((u16) M2C_FIELD(temp_a0_2, s16 *, 0x338) + 1);
        }
        break;
    case 2:
        temp_a0_3 = ((*D_8006AF80) * 0x79C) + (u8 *)D_80100F38;
        if (((*D_80078C22) + 1) < M2C_FIELD(temp_a0_3, s16 *, 0x336)) {
            M2C_FIELD(temp_a0_3, s16 *, 0x336) = (s16) ((u16) M2C_FIELD(temp_a0_3, s16 *, 0x336) - 1);
        }
        break;
    case 3:
        temp_a0_4 = ((*D_8006AF80) * 0x79C) + (u8 *)D_80100F38;
        if (M2C_FIELD(temp_a0_4, s16 *, 0x336) < 8) {
            M2C_FIELD(temp_a0_4, s16 *, 0x336) = (s16) ((u16) M2C_FIELD(temp_a0_4, s16 *, 0x336) + 1);
        }
        break;
    }
    temp_v1 = ((*D_8006AF80) * 0x79C) + (u8 *)D_80100F38;
    func_800A99AC(M2C_FIELD(temp_v1, s16 *, 0x336) - 1, M2C_FIELD(temp_v1, s16 *, 0x338) - 1, M2C_FIELD((((*D_8006AF80) * 0x1A8) + (u8 *)D_80091618), u16 *, 0x10));
    func_80034AB0(0x84);
}
