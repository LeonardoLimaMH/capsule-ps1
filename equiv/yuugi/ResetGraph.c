#include "common.h"

extern u8 D_800111E4[], D_800788D4[], D_8007891C[], D_80011204[];
extern u8 D_8007899C[], D_800789A8[];
extern u8 *D_80078914;
extern s32 (*D_80078918)();
extern void func_8004C7C0(), ResetCallback(), func_8004FDCC();
extern u8 func_8004BEDC();

int ResetGraph(int mode) {
    switch (mode & 7) {
    case 0:
    case 3:
        printf(D_800111E4, D_800788D4, D_8007891C);
    case 5:
        func_8004C7C0(D_8007891C, 0, 0x80);
        ResetCallback();
        func_8004FDCC((u32)D_80078914 & 0xFFFFFF);
        D_8007891C[0] = func_8004BEDC(mode);
        D_8007891C[1] = 1;
        *(u16 *)(D_8007891C + 4) = *(u16 *)(D_8007899C + D_8007891C[0] * 4);
        *(u16 *)(D_8007891C + 6) = *(u16 *)(D_800789A8 + D_8007891C[0] * 4);
        func_8004C7C0(D_8007891C + 0x10, -1, 0x5C);
        func_8004C7C0(D_8007891C + 0x6C, -1, 0x14);
        return D_8007891C[0];
    }
    if (D_8007891C[2] >= 2) {
        D_80078918(D_80011204, mode);
    }
    return (*(s32 (**)())(D_80078914 + 0x34))(1);
}
