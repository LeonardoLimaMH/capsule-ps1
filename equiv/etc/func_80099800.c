/* rand-mem: 0x8008EDF0 2 0xFF */
/* rand-mem: 0x8008EE00 2 0xFF */
/* rand-mem: 0x800B3ACC 1 5 */
/* rand-mem: 0x800859F3 1 6 */
#include "common.h"

extern u8 D_8008ED68[], D_80085428[];
extern u8 D_800AEF08[];
extern s16 D_800B3ACC;
extern void D_8001FF50(void);
extern void func_8009C970(void), func_800A4A28(void);
extern s32 func_8002E714(s32), func_8002E708(void);
extern s32 func_8001F1A8(s32, s32, s32, s32, s32, void *, s32, s32, s32);
extern s32 func_80034AB0(s32);
extern void func_80034BD8(s32, s32);
extern void func_80033974(s32);
extern void func_80013668(void);
extern s32 func_80012200(void (*)(void));

#define PAD (*(u32 *)(D_8008ED68 + 0x88))
#define REP (*(u32 *)(D_8008ED68 + 0x98))

static void sel(s16 v) {
    func_80034AB0(0x84);
    D_800B3ACC = v;
}

s32 func_80099800(void) {
    u32 a;
    s16 c;
    if (D_80085428[0x5CB] != 4) return func_8002E714(-0x80);
    func_8001F1A8(-0x80, 0x50, 0, 1, 0, D_800AEF08 + D_800B3ACC * 36, 1, 0x12, 3);
    a = PAD;
    if ((a & 0x1000) || (REP & 0x1000)) {
        c = D_800B3ACC;
        if (c == 2) sel(0);
        else if (c == 3) sel(1);
    } else if ((a & 0x4000) || (REP & 0x4000)) {
        c = D_800B3ACC;
        if (c == 0) sel(2);
        else if (c == 1) sel(3);
    } else if ((a & 0x8000) || (REP & 0x8000)) {
        c = D_800B3ACC;
        if (c == 1) sel(0);
        else if (c == 3) sel(2);
    } else if ((a & 0x2000) || (REP & 0x2000)) {
        c = D_800B3ACC;
        if (c == 0) sel(1);
        else if (c == 2) sel(3);
    }
    if (!(PAD & 0x830) && !(REP & 0x830)) return 0;
    func_80034AB0(0x48);
    c = D_800B3ACC;
    switch (c) {
    case 0:
        func_80034BD8(-3, 0);
        func_80033974(0x7003);
        func_80013668();
        D_80085428[0] = 0;
        return func_80012200(D_8001FF50);
    case 1:
        func_80034BD8(-3, 0);
        func_80033974(0x7003);
        func_80013668();
        D_80085428[0] = c;
        return func_80012200(func_8009C970);
    case 2:
        func_80034BD8(-3, 0);
        func_80033974(0x7003);
        func_80013668();
        return func_80012200(func_800A4A28);
    case 3: {
        s32 r = func_8002E708();
        D_80085428[0x5CB] = 0;
        D_800B3ACC = 0;
        return r;
    }
    }
    return c < 2 ? 1 : 3;
}
