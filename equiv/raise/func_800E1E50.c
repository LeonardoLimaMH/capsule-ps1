#include "common.h"

s32 func_800E1E50(void) {
    extern u16 D_8006AF80[];
    extern s16 D_80078C20[];
    extern s16 D_80078C26[];
    extern s16 D_80078C28[];
    extern s32 D_80078C34[];
    extern s32 D_80078C38[];
    extern M2C_UNK D_80091618[];
    extern M2C_UNK D_800EEB9C[];
    extern u16 D_800F1F54[];
    extern M2C_UNK D_800F2D30[];
    extern M2C_UNK D_80100F38[];
    M2C_UNK var_a3;
    s32 temp_v1;
    u16 temp_a0;

    if ((*D_80078C28) != 0) {
        return 0;
    }
    temp_v1 = (*D_800F1F54) & 0xFFFF;
    if (temp_v1 != 0) {
        if (temp_v1 == 4) {
            (*D_80078C20) = (*D_80078C20) == 0;
        }
        (*D_800F1F54) -= 1;
        return 0;
    }
    (*D_800F1F54) = 8;
    (*D_8006AF80) = M2C_FIELD(D_800EEB9C, u16 *, 0x73C);
    temp_a0 = *(((*D_8006AF80) * 0x1A8) + D_80091618);
    if (*(temp_a0 + D_800F2D30) == 0xFF) {
        func_8001A49C(func_800A0E6C(temp_a0, D_800F1F54));
    }
    func_800E2AA0(M2C_FIELD((((*D_8006AF80) * 0x1A8) + D_80091618), u16 *, 0x10), 1, 0);
    func_800CD288(1, 1);
    var_a3 = 8;
    if ((*D_80078C26) == 3) {
        var_a3 = 6;
    }
    func_80024990(M2C_FIELD((((*D_8006AF80) * 0x1A8) + D_80091618), s32 *, 0x18C), 1, 0x32, var_a3);
    M2C_FIELD(D_800EEB9C, s32 *, 0xC) = 0;
    func_800B9F50(1);
    SpuInitHot();
    func_800A1F44(1, 1, 0);
    func_800C60E0(1, 1);
    func_800C62A4(1, 1);
    func_800C5EFC(1, 1);
    func_800B4C40((*D_8006AF80));
    func_800B6FA0();
    func_800B53D4(1, (*D_8006AF80));
    func_800E11A0(1, (*D_8006AF80));
    M2C_FIELD((((*D_8006AF80) * 0x79C) + D_80100F38), s16 *, 0x386) = 0;
    if ((*D_80078C34) == 0x7006) {
        func_800282A0((*D_80078C38));
    }
    return 1;
}
