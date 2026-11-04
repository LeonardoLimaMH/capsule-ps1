#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", ResetGraph);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", SetGraphDebug);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", SetGraphQueue);

u8 GetGraphDebug(void) {
    extern u8 D_8007891E[];
    return (*D_8007891E);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", DrawSyncCallback);

s32 SetDispMask(s32 mask) {
    extern u8 D_8007891E[];
    extern void (*D_80078918[])();
    extern char D_80011274[];
    extern s32 (**D_80078914[])();
    extern void func_8004C7C0(void *, s32, s32);
    u8 *p = D_8007891E;
    s32 (**f)();

    if (p[0] >= 2) {
        (*D_80078918)(D_80011274, mask);
    }
    if (mask == 0) {
        func_8004C7C0(p + 0x6A, -1, 0x14);
    }
    f = *D_80078914;
    return f[4](mask != 0 ? 0x3000000 : 0x3000001);
}
