#include "common.h"

void func_8002E2AC(void) {
    extern s16 D_80085434[];
    extern u16 D_8008EE44[];
    extern M2C_UNK D_80099394[];
    extern int func_80012508();
    switch ((*D_8008EE44)) {                           /* irregular */
    case 0:
        func_80033974(0x8000);
        func_80013668();
        func_80012508();
        return;
    case 1:
        func_8001A480(4, 0x80097800);
        func_80019F30(0x110004, func_80012508);
        (*D_80085434) = 0;
        func_80012508();
        return;
    case 2:
        func_8001FD98(4);
        return;
    case 3:
        if (func_8001FD98(4) != 0) {
            func_80012200((*D_80099394));
        }
        return;
    }
}
