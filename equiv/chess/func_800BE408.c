#include "common.h"

void func_800BE408(s32 arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x5D0;
    func_8001A998(arg0 + 0xCB0, 0x2B);
    func_8001A998(arg0 + 0xCDC, 6);
    func_8001A998(arg0 + 0xCE2, 4);
    M2C_FIELD(temp_s1, s8 *, 0x712) = 0;
    M2C_FIELD(temp_s1, s8 *, 0x713) = 0xFF;
    func_800125D8();
}
