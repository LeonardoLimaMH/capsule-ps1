#include "common.h"

void func_800A0718(void) {
    extern u16 D_8008EE48[];
    func_80012A20(func_80019F30(0x20014, 7), 1, 0, 0);
    func_80012A20(func_80019F30(0x50014, 3), 1, 0, 0);
    if ((*D_8008EE48) != 0) {
        func_80012544(0x15);
        func_800125AC(1);
        return;
    }
    func_80012508();
}
