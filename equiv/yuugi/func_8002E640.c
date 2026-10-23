#include "common.h"

void func_8002E640(void) {
    extern s16 D_80085434[];
    extern u16 D_8008EE44[];
    extern M2C_UNK D_800AA020[];
    extern int func_80012508();
    func_800152C8();
    switch ((*D_8008EE44)) {                           /* irregular */
    case 0:
        func_80013668();
        func_8001611C(0x1000);
        func_80012508();
        return;
    case 1:
        func_8001A480(4, 0x80097800);
        func_80019F30(0x110004, func_80012508);
        (*D_80085434) = 0;
        func_80012508();
        return;
    case 3:
        func_80012200((*D_800AA020));
        /* fallthrough */
    case 2:
        return;
    }
}
