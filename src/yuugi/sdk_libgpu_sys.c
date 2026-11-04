#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys", ResetGraph);

u8 SetGraphDebug(s32 level) {
    extern u8 D_8007891E[];
    extern char D_80011218[];
    extern void (*D_80078918[])();
    register u8 *p asm("v1") = D_8007891E;
    u8 old = *p;

    *p = level;
    level &= 0xFF;
    if (level != 0) {
        (*D_80078918)(D_80011218, p[0], p[-2], p[1]);
    }
    return old;
}

u8 SetGraphQueue(s32 queue) {
    extern u8 D_8007891D[];
    extern void (*D_80078918[])();
    extern char D_80011244[];
    extern void (**D_80078914[])();
    extern void DMACallback(s32, void *);
    u8 *p = D_8007891D;
    u8 old = p[0];

    if (p[1] >= 2) {
        (*D_80078918)(D_80011244, queue);
    }
    if (queue != p[0]) {
        D_80078914[0][13](1);
        p[0] = queue;
        DMACallback(2, 0);
    }
    return old;
}

u8 GetGraphDebug(void) {
    extern u8 D_8007891E[];
    return (*D_8007891E);
}

s32 DrawSyncCallback(s32 arg0) {
    typedef struct {
        u8 level;
        u8 pad[9];
        s32 cb;
    } GpuSys;
    extern GpuSys D_8007891E[];
    extern void (*D_80078918[])(char *, s32);
    extern char D_80011258[];
    GpuSys *s = D_8007891E;
    s32 old;

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
