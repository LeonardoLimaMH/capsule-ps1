#include "common.h"

void func_8009E6AC(void *arg0) {
    extern int func_80012508();
    func_8001A464(M2C_FIELD(arg0, u8 *, 0x5D4) + 0x15, 0x801C16EC);
    func_80019F30(M2C_FIELD(arg0, u8 *, 0x5D4) + 0x15, func_80012508);
    func_80012508();
}
