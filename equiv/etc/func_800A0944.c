#include "common.h"

void func_800A0944(void) {
    extern M2C_UNK D_8002E38C[];
    extern s32 D_8008F780[];
    extern M2C_UNK D_800B3B38[];
    s16 temp_v0;

    func_8001611C(M2C_FIELD(D_800B3B38, s16 *, 8));
    temp_v0 = (u16) M2C_FIELD(D_800B3B38, s16 *, 8) - 0x80;
    M2C_FIELD(D_800B3B38, s16 *, 8) = temp_v0;
    if ((temp_v0 << 0x10) <= 0) {
        (*D_8008F780) = 0;
        func_80012200(D_8002E38C);
    }
}
