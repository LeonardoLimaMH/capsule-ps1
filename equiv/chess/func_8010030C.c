#include "common.h"

void func_8010030C(void) {
    extern M2C_UNK D_80085428[];
    extern u16 D_8008EE48[];
    extern int func_80012578();
    switch ((*D_8008EE48)) {                           /* irregular */
    case 0:
        M2C_FIELD(D_80085428, s8 *, 0x5D9) = 0xA;
        func_8001A464(0xA, 0x80120000);
        func_8001A464(func_800CA474(D_80085428), 0x8012AC9C);
        func_8001A464(func_800CA480(D_80085428), 0x8012EA88);
        func_8001A480(0x1B, 0x80120000);
        func_80019F30(0x12001B, func_80012578);
        func_80012578();
        return;
    case 2:
        func_8001A49C(0x80120000);
        func_8001A49C(0x8012AC9C);
        func_8001A49C(0x8012EA88);
        func_80012508();
        /* fallthrough */
    case 1:
        return;
    }
}
