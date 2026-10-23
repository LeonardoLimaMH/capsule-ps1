#include "common.h"

void func_80100900(void) {
    extern M2C_UNK D_8002E4D0[];
    extern M2C_UNK D_80069AD4[];
    extern M2C_UNK D_8008ED68[];
    M2C_FIELD(D_80069AD4, u16 *, 0xEA) = (u16) (M2C_FIELD(D_80069AD4, u16 *, 0xEA) + 8);
    func_8002CC74();
    if (M2C_FIELD(D_8008ED68, s32 *, 0xA68) == 0) {
        M2C_FIELD(D_8008ED68, s32 *, 0xA18) = 3;
        M2C_FIELD(D_8008ED68, s32 *, 0xA1C) = 0;
        M2C_FIELD(D_8008ED68, s32 *, 0xA24) = 1;
        func_80012200(D_8002E4D0);
    }
}
