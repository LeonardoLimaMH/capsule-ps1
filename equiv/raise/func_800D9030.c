#include "common.h"

void *func_800D9030(void) {
    extern u8 D_80018600[];
    extern s16 D_8006AFA6[];
    extern s16 D_80078C20[];
    extern u8 D_800EE630[];
    extern s32 D_800EEB64[];
    extern s32 D_800EEB68[];
    extern u8 D_800EFF58[];
    extern int func_800161C4();
    extern int func_800D926C();
    s32 temp_a3;
    s32 temp_s1;
    s32 temp_v0_2;
    s32 var_v1;
    void *temp_v0;
    void *temp_v0_3;

    temp_v0 = func_80015B3C(&func_800D926C, &func_800161C4, 1);
    if (temp_v0 != NULL) {
        func_80015EF8(temp_v0);
        if ((*D_800EEB64) == 2) {
            var_v1 = M2C_FIELD((((*D_800EEB68) * 4) + D_800EFF58), s32 *, 0x3D4);
        } else {
            var_v1 = (s32) (*D_8006AFA6);
        }
        temp_s1 = M2C_FIELD(D_800EE630, s32 *, 0x18) + M2C_FIELD(((var_v1 * 4) + D_800EFF58), s32 *, 0x398);
        temp_v0_2 = func_80019F30(M2C_FIELD(D_800EE630, s32 *, 0) | 0x70000, temp_s1, D_800EE630);
        func_80015CD0(temp_v0 + 0x14, temp_v0_2, 0);
        M2C_FIELD(temp_v0, s32 *, 0x7C) = temp_s1;
        M2C_FIELD(temp_v0, s32 *, 0x3C) = 4;
        M2C_FIELD(temp_v0, s32 *, 0x1C) = temp_v0_2;
        M2C_FIELD(temp_v0, s32 *, 0x80) = temp_v0_2;
        M2C_FIELD(temp_v0, s16 *, 0x52) = 0;
        M2C_FIELD(temp_v0, s16 *, 0x50) = 0;
        M2C_FIELD(temp_v0, s16 *, 0x76) = 0x40;
        M2C_FIELD(temp_v0, s16 *, 0x74) = 0x40;
        temp_a3 = (M2C_FIELD(temp_v0, s32 *, 0x34) & ~0x100) | (((*D_80078C20) & 1) << 8);
        M2C_FIELD(temp_v0, s32 *, 0x30) = (s32) (((M2C_FIELD(temp_v0, s32 *, 0x30) & ~0x1C0 & ~0x30) | 0x20) & ~8);
        M2C_FIELD(temp_v0, s32 *, 0x34) = temp_a3;
        M2C_FIELD(temp_v0, s32 *, 0x38) = (s32) ((M2C_FIELD(temp_v0, s32 *, 0x38) | 1) & ~0x30 & ~0x40);
        temp_v0_3 = func_80015B3C(D_80018600, &func_800161C4, 1, temp_a3);
        if (temp_v0_3 != NULL) {
            func_80015EF8(temp_v0_3);
            M2C_FIELD(temp_v0_3, s32 *, 0x18) = func_80019F30(0x6000E, 0x102);
            M2C_FIELD(temp_v0, void **, 0x40) = temp_v0_3;
            M2C_FIELD(temp_v0_3, s16 *, 0x52) = 0;
            M2C_FIELD(temp_v0_3, s16 *, 0x50) = 0;
            M2C_FIELD(temp_v0_3, s16 *, 0x76) = 0x40;
            M2C_FIELD(temp_v0_3, s16 *, 0x74) = 0x40;
            M2C_FIELD(temp_v0_3, s32 *, 0x30) = (s32) (((M2C_FIELD(temp_v0_3, s32 *, 0x30) & ~0x1C0 & ~0x30) | 0x20) & ~8);
            M2C_FIELD(temp_v0_3, s32 *, 0x34) = (s32) ((M2C_FIELD(temp_v0_3, s32 *, 0x34) & ~0x100) | (((*D_80078C20) & 1) << 8));
            M2C_FIELD(temp_v0_3, s32 *, 0x38) = (s32) ((M2C_FIELD(temp_v0_3, s32 *, 0x38) | 1) & ~0x30 & ~0x40);
        }
    }
    return temp_v0;
}
