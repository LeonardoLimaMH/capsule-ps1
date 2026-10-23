#include "common.h"

void func_8002E4D0(void) {
    extern s8 D_80085428[];
    extern M2C_UNK D_8008ED68[];
    extern M2C_UNK D_80099C08[];
    extern M2C_UNK D_8009A1D4[];
    extern M2C_UNK D_8009C970[];
    extern M2C_UNK D_800A8CAC[];
    extern int func_80012508();
    M2C_UNK *var_a0;

    func_8001DB8C("STEP = %e\n", M2C_FIELD((*D_8008ED68), u16 *, 0xDC));
    switch (M2C_FIELD((*D_8008ED68), u16 *, 0xDC)) {  /* irregular */
    case 0:
        func_80033974(0x8000, 2);
        (*D_80085428) = 3;
        func_80013668();
        func_80012508();
        return;
    case 1:
        func_8001A480(4, 0x80097800);
        func_80019F30(0x110004, func_80012508);
        func_80012508();
        return;
    case 2:
        if ((u32) M2C_FIELD((*D_8008ED68), u32 *, 0xA18) < 2U) {
            if ((M2C_FIELD((*D_8008ED68), u32 *, 0xA18) == 1) && (M2C_FIELD((*D_8008ED68), s32 *, 0xA14) & 1)) {
                func_8001FD98(3, 2);
                return;
            }
            func_8001FD98(4, 2);
            return;
        }
        return;
    case 3:
        if (M2C_FIELD((*D_8008ED68), u32 *, 0xA18) == 1) {
            var_a0 = (*D_8009A1D4);
        } else if (M2C_FIELD((*D_8008ED68), u32 *, 0xA18) == 2) {
            var_a0 = (*D_800A8CAC);
        } else if ((u32) M2C_FIELD((*D_8008ED68), u32 *, 0xA18) >= 3U) {
            var_a0 = (*D_8009C970);
        } else {
            var_a0 = (*D_80099C08);
        }
        func_80012200(var_a0, 2);
        break;
    }
}
