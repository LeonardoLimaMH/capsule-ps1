#include "common.h"

void func_800129DC(void) {
    extern M2C_UNK D_8008ED68[];
    func_800131C0();
    VSync(M2C_FIELD(D_8008ED68, u8 *, 0x103));
}
