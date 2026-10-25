#include "common.h"

void func_800DDA78(void *arg0) {
    extern u8 D_80018600[];
    extern int func_800DD920();
    void *temp_v0;

    temp_v0 = func_80015B3C(&func_800DD920, D_80018600, 1);
    M2C_FIELD(temp_v0, void **, 0x14) = arg0;
    func_800FE188(arg0, temp_v0 + 0x2C);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) | 0x80000000);
}
