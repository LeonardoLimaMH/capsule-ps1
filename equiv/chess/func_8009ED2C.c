#include "common.h"

s32 func_8009ED2C(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    s32 var_s1;

    var_s1 = 0;
    if (M2C_FIELD(arg0, u8 *, 0x62A) != 0) {
        if (func_8009DD64() != 0) {
            M2C_FIELD(arg0, u8 *, 0x62A) = 0U;
            var_s1 = 1;
        }
        M2C_FIELD((*D_8008ED68), s8 *, 0xA66) = 1;
        func_8002CC74();
        func_8002CD50();
    }
    return var_s1;
}
