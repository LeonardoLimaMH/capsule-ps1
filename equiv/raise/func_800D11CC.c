#include "common.h"

extern u8 D_80085428[];
extern void func_800A5E54();

s32 func_800D11CC(void) {
    D_80085428[0xF] = 0;
    D_80085428[0xE] = 0;
    *(s16 *)(D_80085428 + 0xA) = 0;
    func_80012200(func_800A5E54);
    D_80085428[0xBE8] = 1;
    return 1;
}
