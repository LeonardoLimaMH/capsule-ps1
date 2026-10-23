#include "common.h"

s32 func_800A2A90(void) {
    extern u16 D_8006AF80[];
    extern M2C_UNK D_8008ED68[];
    extern s32 D_8008EDE8[];
    extern s32 D_8008EDF0[];
    extern u8 D_8008F702[];
    extern M2C_UNK D_80091618[];
    extern u8 D_800F2CD0[];
    extern u16 D_800F2CD2[];
    extern M2C_UNK D_800F2CF8[];
    s32 temp_a2;
    s32 temp_v1;
    s32 var_v0;
    void *temp_v0;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_12;
    void *temp_v0_13;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;

    temp_v0 = ((*D_8006AF80) * 0x1A8) + (*D_80091618);
    temp_a2 = M2C_FIELD(temp_v0, s32 *, 0xCC);
    if (M2C_FIELD((*D_8008ED68), u8 *, 0x99A) != 1) {
        if (M2C_FIELD((*D_8008ED68), s32 *, 0x88) & 0x10) {
            temp_v0_2 = (((*D_8006AF80) & 0xFFFF) * 0x1A8) + (*D_80091618);
            (*D_800F2CD0) = 1;
            M2C_FIELD(temp_v0_2, u16 *, 0x15A) = (u16) (M2C_FIELD(temp_v0_2, u16 *, 0x15A) + 1);
            if (temp_a2 == ((M2C_FIELD(temp_v0, s32 *, 0xCC) / 30) * 0x1E)) {
                (*D_800F2CD0) = 0x11;
                M2C_FIELD((*D_800F2CF8), u16 *, 0) = (u16) (M2C_FIELD((*D_800F2CF8), u16 *, 0) + 1);
            }
        }
        if ((*D_8008EDF0) & 0x80) {
            temp_v0_3 = (((*D_8006AF80) & 0xFFFF) * 0x1A8) + (*D_80091618);
            (*D_800F2CD0) = 2;
            M2C_FIELD(temp_v0_3, u16 *, 0x15C) = (u16) (M2C_FIELD(temp_v0_3, u16 *, 0x15C) + 1);
            if (temp_a2 == ((M2C_FIELD(temp_v0, s32 *, 0xCC) / 30) * 0x1E)) {
                (*D_800F2CD0) = 0x12;
                M2C_FIELD((*D_800F2CF8), u16 *, 2) = (u16) (M2C_FIELD((*D_800F2CF8), u16 *, 2) + 1);
            }
        }
        if ((*D_8008EDF0) & 0x20) {
            temp_v0_4 = (((*D_8006AF80) & 0xFFFF) * 0x1A8) + (*D_80091618);
            (*D_800F2CD0) = 3;
            M2C_FIELD(temp_v0_4, u16 *, 0x15E) = (u16) (M2C_FIELD(temp_v0_4, u16 *, 0x15E) + 1);
            if (temp_a2 == ((M2C_FIELD(temp_v0, s32 *, 0xCC) / 30) * 0x1E)) {
                (*D_800F2CD0) = 0x13;
                M2C_FIELD((*D_800F2CF8), u16 *, 4) = (u16) (M2C_FIELD((*D_800F2CF8), u16 *, 4) + 1);
            }
        }
        if ((*D_8008EDF0) & 0x40) {
            temp_v0_5 = (((*D_8006AF80) & 0xFFFF) * 0x1A8) + (*D_80091618);
            (*D_800F2CD0) = 4;
            M2C_FIELD(temp_v0_5, u16 *, 0x160) = (u16) (M2C_FIELD(temp_v0_5, u16 *, 0x160) + 1);
            if (temp_a2 == ((M2C_FIELD(temp_v0, s32 *, 0xCC) / 30) * 0x1E)) {
                (*D_800F2CD0) = 0x14;
                M2C_FIELD((*D_800F2CF8), u16 *, 6) = (u16) (M2C_FIELD((*D_800F2CF8), u16 *, 6) + 1);
            }
        }
        if ((*D_8008EDF0) & 4) {
            temp_v0_6 = (((*D_8006AF80) & 0xFFFF) * 0x1A8) + (*D_80091618);
            (*D_800F2CD0) = 5;
            M2C_FIELD(temp_v0_6, u16 *, 0x162) = (u16) (M2C_FIELD(temp_v0_6, u16 *, 0x162) + 1);
            if (temp_a2 == ((M2C_FIELD(temp_v0, s32 *, 0xCC) / 30) * 0x1E)) {
                (*D_800F2CD0) = 0x15;
                M2C_FIELD((*D_800F2CF8), u16 *, 6) = (u16) (M2C_FIELD((*D_800F2CF8), u16 *, 6) + 1);
            }
        }
        if ((*D_8008EDF0) & 1) {
            temp_v0_7 = (((*D_8006AF80) & 0xFFFF) * 0x1A8) + (*D_80091618);
            (*D_800F2CD0) = 6;
            M2C_FIELD(temp_v0_7, u16 *, 0x164) = (u16) (M2C_FIELD(temp_v0_7, u16 *, 0x164) + 1);
            if (temp_a2 == ((M2C_FIELD(temp_v0, s32 *, 0xCC) / 30) * 0x1E)) {
                (*D_800F2CD0) = 0x16;
                M2C_FIELD((*D_800F2CF8), u16 *, 0xA) = (u16) (M2C_FIELD((*D_800F2CF8), u16 *, 0xA) + 1);
            }
        }
        if ((*D_8008EDF0) & 8) {
            temp_v0_8 = (((*D_8006AF80) & 0xFFFF) * 0x1A8) + (*D_80091618);
            (*D_800F2CD0) = 7;
            M2C_FIELD(temp_v0_8, u16 *, 0x166) = (u16) (M2C_FIELD(temp_v0_8, u16 *, 0x166) + 1);
            if (temp_a2 == ((M2C_FIELD(temp_v0, s32 *, 0xCC) / 30) * 0x1E)) {
                (*D_800F2CD0) = 0x17;
                M2C_FIELD((*D_800F2CF8), u16 *, 0xC) = (u16) (M2C_FIELD((*D_800F2CF8), u16 *, 0xC) + 1);
            }
        }
        if ((*D_8008EDF0) & 2) {
            temp_v0_9 = (((*D_8006AF80) & 0xFFFF) * 0x1A8) + (*D_80091618);
            (*D_800F2CD0) = 8;
            M2C_FIELD(temp_v0_9, u16 *, 0x168) = (u16) (M2C_FIELD(temp_v0_9, u16 *, 0x168) + 1);
            if (temp_a2 == ((M2C_FIELD(temp_v0, s32 *, 0xCC) / 30) * 0x1E)) {
                (*D_800F2CD0) = 0x18;
                M2C_FIELD((*D_800F2CF8), u16 *, 0xE) = (u16) (M2C_FIELD((*D_800F2CF8), u16 *, 0xE) + 1);
            }
        }
        if ((*D_8008EDF0) & 0x1000) {
            temp_v0_10 = (((*D_8006AF80) & 0xFFFF) * 0x1A8) + (*D_80091618);
            (*D_800F2CD0) = 9;
            M2C_FIELD(temp_v0_10, u16 *, 0x16A) = (u16) (M2C_FIELD(temp_v0_10, u16 *, 0x16A) + 1);
            if (temp_a2 == ((M2C_FIELD(temp_v0, s32 *, 0xCC) / 30) * 0x1E)) {
                (*D_800F2CD0) = 0x19;
                M2C_FIELD((*D_800F2CF8), u16 *, 0x10) = (u16) (M2C_FIELD((*D_800F2CF8), u16 *, 0x10) + 1);
            }
        }
        if ((*D_8008EDF0) & 0x2000) {
            temp_v0_11 = (((*D_8006AF80) & 0xFFFF) * 0x1A8) + (*D_80091618);
            (*D_800F2CD0) = 0xA;
            M2C_FIELD(temp_v0_11, u16 *, 0x16C) = (u16) (M2C_FIELD(temp_v0_11, u16 *, 0x16C) + 1);
            if (temp_a2 == ((M2C_FIELD(temp_v0, s32 *, 0xCC) / 30) * 0x1E)) {
                (*D_800F2CD0) = 0x1A;
                M2C_FIELD((*D_800F2CF8), u16 *, 0x12) = (u16) (M2C_FIELD((*D_800F2CF8), u16 *, 0x12) + 1);
            }
        }
        if ((*D_8008EDF0) & 0x4000) {
            temp_v0_12 = (((*D_8006AF80) & 0xFFFF) * 0x1A8) + (*D_80091618);
            (*D_800F2CD0) = 0xB;
            M2C_FIELD(temp_v0_12, u16 *, 0x16E) = (u16) (M2C_FIELD(temp_v0_12, u16 *, 0x16E) + 1);
            if (temp_a2 == ((M2C_FIELD(temp_v0, s32 *, 0xCC) / 30) * 0x1E)) {
                (*D_800F2CD0) = 0x1B;
                M2C_FIELD((*D_800F2CF8), u16 *, 0x14) = (u16) (M2C_FIELD((*D_800F2CF8), u16 *, 0x14) + 1);
            }
        }
        if ((*D_8008EDF0) & 0x8000) {
            temp_v0_13 = (((*D_8006AF80) & 0xFFFF) * 0x1A8) + (*D_80091618);
            (*D_800F2CD0) = 0xC;
            M2C_FIELD(temp_v0_13, u16 *, 0x170) = (u16) (M2C_FIELD(temp_v0_13, u16 *, 0x170) + 1);
            if (temp_a2 == ((M2C_FIELD(temp_v0, s32 *, 0xCC) / 30) * 0x1E)) {
                (*D_800F2CD0) = 0x1C;
                M2C_FIELD((*D_800F2CF8), u16 *, 0x16) = (u16) (M2C_FIELD((*D_800F2CF8), u16 *, 0x16) + 1);
            }
        }
    }
    if ((*D_800F2CD0) != (*D_800F2CD0)) {
        (*D_800F2CD2) = 0;
    }
    func_800D6978((*D_8006AF80), (*D_800F2CD0), (*D_800F2CD2), (*D_8006AF80));
    if ((*D_8008F702) != 1) {
        temp_v1 = (*D_800F2CD0) & 0xF;
        (*D_800F2CD2) += 1;
        switch (temp_v1) {
        case 1:
            var_v0 = (*D_8008EDE8) & 0x10;
block_66:
            if (var_v0 == 0) {
            default:
                func_800A3434();
            }
            break;
        case 2:
            var_v0 = (*D_8008EDE8) & 0x80;
            goto block_66;
        case 3:
            var_v0 = (*D_8008EDE8) & 0x20;
            goto block_66;
        case 4:
            var_v0 = (*D_8008EDE8) & 0x40;
            goto block_66;
        case 5:
            var_v0 = (*D_8008EDE8) & 4;
            goto block_66;
        case 6:
            var_v0 = (*D_8008EDE8) & 1;
            goto block_66;
        case 7:
            var_v0 = (*D_8008EDE8) & 8;
            goto block_66;
        case 8:
            var_v0 = (*D_8008EDE8) & 2;
            goto block_66;
        case 9:
            var_v0 = (*D_8008EDE8) & 0x1000;
            goto block_66;
        case 10:
            var_v0 = (*D_8008EDE8) & 0x2000;
            goto block_66;
        case 11:
            var_v0 = (*D_8008EDE8) & 0x4000;
            goto block_66;
        case 12:
            var_v0 = (*D_8008EDE8) & 0x8000;
            goto block_66;
        }
    }
    return 0;
}
