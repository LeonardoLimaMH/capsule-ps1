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

void func_8010053C(void) {
    extern u16 D_8008EE48[];
    extern u8 D_800859F0[];
    extern s32 D_80119768[];
    switch ((s32)D_8008EE48[0]) {
    case 0:
        D_80119768[0] = 0;
        if (D_800859F0[0] & 4) func_80012578();
        else func_80012508();
        break;
    case 1:
        if (func_80019654()) func_80012578();
        break;
    case 2:
        func_800338DC(0x701F);
        func_80012578();
        break;
    case 3:
        if (D_800859F0[0] & 4) {
            if (func_800337EC() & 0x80) func_80012508();
        } else func_80012508();
        break;
    }
}
