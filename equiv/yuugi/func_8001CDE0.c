#include "common.h"

s32 func_8001CDE0(void) {
    extern M2C_UNK D_8008ED68[];
    s32 temp_s1;

    temp_s1 = M2C_FIELD(D_8008ED68, s32 *, 0x950);
    func_8001CB94();
    return M2C_FIELD(D_8008ED68, s32 *, 0x950) != temp_s1;
}
