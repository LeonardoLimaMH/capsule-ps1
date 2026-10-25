#include "common.h"

void func_800478D0(void) {
    extern M2C_UNK D_800733BC[];
    if (M2C_FIELD(D_800733BC, s32 *, 0) == 1) {
        DsFlush();
        ER_clear();
        if (M2C_FIELD(D_800733BC, s32 *, -0x14) & 1) {
            DsDataCallback(M2C_FIELD(D_800733BC, s32 *, -0xC));
        }
        func_80044BC4(1, 0);
        DsCommand(9, 0, 0, -1);
    }
    M2C_FIELD(D_800733BC, s32 *, 0) = 0;
}
