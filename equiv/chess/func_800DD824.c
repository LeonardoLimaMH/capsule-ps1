#include "common.h"

void func_800DD824(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s16 arg3, s32 arg4) {
    extern u8 D_80018600[];
    extern u8 D_80063940[];
    extern int func_800DD4D8();
    s32 temp_v0_2;
    s32 temp_v0_3;
    void *temp_v0;

    temp_v0 = func_80015B3C(&func_800DD4D8, D_80018600, 1);
    M2C_FIELD(temp_v0, void **, 0x14) = arg0;
    M2C_FIELD(temp_v0, s16 *, 0x1A) = arg3;
    M2C_FIELD(temp_v0, s16 *, 0x18) = (s16) arg4;
    func_800FE188(arg0, temp_v0 + 0x2C);
    func_800FE21C(arg1, arg2, temp_v0 + 0x34);
    temp_v0_2 = -(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0) * 0x3C) + D_80063940), u8 *, 0x13) & 0x3F);
    temp_v0_3 = (s32) (temp_v0_2 + ((u32) temp_v0_2 >> 0x1F)) >> 1;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x74), s8 *, 0x57) = (s8) temp_v0_3;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x70), s8 *, 0x57) = (s8) temp_v0_3;
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) | 0x80000000 | 0x10000000);
}
