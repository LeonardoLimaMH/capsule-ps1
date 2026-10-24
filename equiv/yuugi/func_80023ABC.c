#include "common.h"

void func_80023ABC(void) {
    extern M2C_UNK D_80069A5C[];
    extern s32 D_80078C04;
    func_800121B4(M2C_FIELD(((D_80078C04 * 0x18) + D_80069A5C), s32 *, 4));
    func_800121C4();
}
