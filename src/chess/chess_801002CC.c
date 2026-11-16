#include "common.h"

#include "common.h"

/* objeto de peça usado por func_80100AF4 */
typedef struct {
    u8 _p0[0x18];
    s32 f18;
    u8 _p1[0x1C];
    s32 f38;
    u8 _p2[0x1C];
    u8 f58;
    u8 f59;
    u8 f5A;
} S80100AF4;

extern void func_80012578();

void func_801002CC(void) {
    extern u16 D_8008EE44[];
    extern u8 D_80102870[];
    (*(void (**)())(((*D_8008EE44) * 4) + D_80102870))();
}

void func_8010030C(void) {
    extern u16 D_8008EE48[];
    extern u8 D_80085428[];
    u8 *p = D_80085428;
    switch ((s32)D_8008EE48[0]) {
    case 1:
        break;
    case 0:
        p[0x5D9] = 10;
        func_8001A464(10, 0x80120000);
        func_8001A464(func_800CA474(p), 0x8012AC9C);
        func_8001A464(func_800CA480(p), 0x8012EA88);
        func_8001A480(0x1B, 0x80120000);
        func_80019F30(0x12001B, func_80012578);
        func_80012578();
        break;
    case 2:
        func_8001A49C(0x80120000);
        func_8001A49C(0x8012AC9C);
        func_8001A49C(0x8012EA88);
        func_80012508();
        break;
    }
}
