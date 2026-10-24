#include "common.h"

void func_8003C7C8(void) {
    extern M2C_UNK D_800949A8[];
    SpuInit();
    func_80038890();
    func_8003C73C();
    SpuInitMalloc(0x10, D_800949A8);
}
