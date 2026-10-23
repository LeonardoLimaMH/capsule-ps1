#include "common.h"

void func_8009EC40(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    s32 temp_s2;
    u8 temp_s1;

    temp_s1 = M2C_FIELD(arg0, u8 *, 0x5FA);
    temp_s2 = M2C_FIELD(arg0, u8 *, 0x624) - 5;
    if (M2C_FIELD(arg0, u8 *, 0x62A) != 0) {
        if (func_8009DD64() != 0) {
            M2C_FIELD(arg0, u8 *, 0x62A) = 0U;
        }
        if (M2C_FIELD(arg0, u8 *, 0x62A) == 0) {
            goto block_4;
        }
    } else {
block_4:
        if (func_8009DED8(arg0, temp_s1, temp_s2) != 0) {
            func_8009ECF8(arg0);
            func_80012604(4);
        }
    }
    M2C_FIELD(D_8008ED68, s8 *, 0xA66) = 1;
    func_8002CC74();
    func_8002CD50();
}
