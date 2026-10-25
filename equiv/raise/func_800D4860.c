#include "common.h"

s32 func_800D4860(s32 arg0) {
    extern u16 D_8006AF80[];
    extern s16 D_80078C26[];
    extern s16 D_80078C28[];
    extern s32 D_80078C34[];
    extern s32 D_80078C38[];
    extern u8 D_80091618[];
    extern s32 D_800EEBA8[];
    extern u16 D_800EF2D8[];
    extern u8 D_800F1D14[];
    extern u8 D_80100F38[];
    M2C_UNK var_a3;
    s32 temp_v0_2;
    s32 var_s1;
    u16 *temp_v1;
    u16 temp_s0;
    u16 temp_s0_2;
    u16 temp_s0_3;
    u16 temp_v0;

    if ((*D_80078C28) != 0) {
        return 0;
    }
    temp_v1 = D_800F1D14 + 2;
    temp_v0 = *temp_v1;
    if (temp_v0 != 0) {
        *temp_v1 = temp_v0 - 1;
        return 0;
    }
    *temp_v1 = 0x10;
    temp_s0 = (*D_800EF2D8);
    (*D_8006AF80) = temp_s0;
    if (arg0 != 0) {
        var_s1 = 1;
        if (arg0 != 1) {

        } else {
            do {
                temp_v0_2 = func_800B1260(var_s1);
                temp_s0_2 = temp_v0_2 & 0xFFFF;
                if (temp_s0_2 != 0xFFFF) {
                    func_800D4404(M2C_FIELD(((temp_s0_2 * 0x1A8) + D_80091618), u16 *, 0x10), var_s1);
                    func_800CD288(var_s1, 1);
                    func_800B4C40(temp_s0_2);
                    func_800B53D4(var_s1, temp_s0_2);
                    func_800C60E0(var_s1, 1);
                    func_800C62A4(var_s1, 1);
                    func_800C5EFC(var_s1, 1);
                    func_800B9F50(var_s1 & 0xFFFF);
                    if (var_s1 == 1) {
                        SpuInitHot();
                    } else {
                        raise_SpuInit();
                    }
                    func_800A1F44(var_s1, 0, 0);
                    temp_s0_3 = temp_v0_2 & 0xFFFF;
                    func_800E11A0(var_s1, temp_s0_3);
                    M2C_FIELD(((temp_s0_3 * 0x79C) + D_80100F38), s16 *, 0x386) = 0;
                }
                var_s1 -= 1;
            } while (var_s1 >= 0);
        }
    } else {
        func_800D4404(M2C_FIELD(((temp_s0 * 0x1A8) + D_80091618), u16 *, 0x10), 1);
        func_800CD288(1, 1);
        func_800C60E0(1, 1);
        func_800C62A4(1, 1);
        func_800C5EFC(1, 1);
        func_800B4C40(temp_s0);
        func_800B53D4(1, temp_s0);
        func_800B9F50(1);
        SpuInitHot();
        func_800A1F44(1, 0, 0);
        func_800E11A0(1, temp_s0);
        M2C_FIELD(((temp_s0 * 0x79C) + D_80100F38), s16 *, 0x386) = 0;
    }
    func_800B6FA0();
    var_a3 = 0xC;
    if ((*D_80078C26) == 3) {
        var_a3 = 0xA;
    }
    func_80024990(M2C_FIELD((((*D_8006AF80) * 0x1A8) + D_80091618), s32 *, 0x18C), 1, 0x32, var_a3);
    (*D_800EEBA8) = 0;
    if ((*D_80078C34) == 0x7006) {
        func_800282A0((*D_80078C38));
    }
    return 1;
}
