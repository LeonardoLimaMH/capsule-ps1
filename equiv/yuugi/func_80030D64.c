#include "common.h"

extern u8 D_80085428[];
extern s32 D_8008F6B8;

void func_80030D64(void) {
    s32 i;

    func_8001A998(0x801CC000, 0x4000);
    for (i = 0; i < 3; i++) {
        func_80012074(D_80085428, i);
    }
    D_8008F6B8 = 0;
    func_8001CB80();
    func_8001CB78();
}
