#include "common.h"

void func_8009E700(void) {
    extern u16 D_8008EE48[];
    switch ((*D_8008EE48)) {                           /* irregular */
    case 0:
        func_8001A49C(0x801C16EC);
        func_80012578();
        return;
    case 1:
        func_80012508();
        return;
    }
}
