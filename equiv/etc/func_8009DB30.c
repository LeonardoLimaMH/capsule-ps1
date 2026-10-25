/* rand-mem: 0x8008EDF0 2 0xFF */
/* rand-mem: 0x8008EE00 2 0xFF */
/* rand-mem: 0x800B3B38 1 2 */
/* rand-mem: 0x800B3B40 1 4 */
/* rand-mem: 0x800B3B44 1 3 */
#include "common.h"

extern u8 D_8008ED68[];
extern s16 D_800B3B38[];
extern char D_800B2758[], D_800B294C[], D_800B2958[];
extern u16 D_800B3C14;
extern void D_8002E2AC(void);
extern s32 func_8001F1A8(s32, s32, s32, s32, s32, char *, s32, s32, s32);
extern s32 func_80034AB0(s32);
extern void func_8001D748(void), func_80013668(void), func_80034BD8(s32, s32), func_80033974(s32);
extern s32 func_80012544(s32), func_80012508(void), func_80012200(void (*)(void));

#define PAD (*(u32 *)(D_8008ED68 + 0x88))
#define REP (*(u32 *)(D_8008ED68 + 0x98))
#define B D_800B3B38

static void snd_sel(s16 v) {
    func_80034AB0(0x84);
    B[4] = v;
}

s32 func_8009DB30(u8 *p) {
    u8 *s = p + 0x5D0;
    u32 a, r;
    s16 v;
    func_8001F1A8(-0x80, 0x50, 0, 1, 0, D_800B2758 + B[4] * 36, 1, 0x12, 3);
    if (B[0] != 0) {
        func_8001F1A8(-0x20, -0x18, B[6] == 0 ? 3 : 0, 1, 0, D_800B294C, 1, 5, 3);
        func_8001F1A8(-0x20, 0, B[6] == 1 ? 3 : 0, 1, 0, D_800B2958, 1, 5, 3);
    }
    if (B[0] != 0) {
        if ((PAD & 0x5000) || (REP & 0x5000)) {
            func_80034AB0(0x84);
            B[6] ^= 1;
        }
    } else {
        a = PAD;
        if ((a & 0xF000) || (REP & 0xF000)) {
            v = B[4];
            if (v == 1) {
                if ((a & 0x1000) || ((r = REP) & 0x1000)) snd_sel(0);
                else if ((a & 0x2000) || (r & 0x2000)) snd_sel(2);
            } else if (v == 0) {
                if ((a & 0xC000) || ((r = REP) & 0xC000)) snd_sel(1);
                else if ((a & 0x6000) || (r & 0x6000)) snd_sel(2);
            } else if (v == 2) {
                if ((a & 0x1000) || ((r = REP) & 0x1000)) snd_sel(0);
                else if ((a & 0x8000) || (r & 0x8000)) snd_sel(1);
            }
        }
    }
    a = PAD;
    if (!(a & 0x830) && !((r = REP) & 0x830)) {
        if (!(a & 0xC0) && !(r & 0xC0)) return 0;
        func_80034AB0(0x5D);
        v = B[0];
        if (v != 0) {
            B[0] = 0;
            return v;
        }
        func_80013668();
        func_80034BD8(-3, 0);
        func_80033974(D_800B3C14);
        return func_80012200(D_8002E2AC);
    }
    if (B[0] == 0) {
        func_80034AB0(0x48);
        v = B[4];
        if (v == 1) {
            s[0] = 1;
            s[0x11] = 1;
            goto finish;
        }
        if (v == 0) {
            u8 n = s[6];
            s[0] = 0;
            s[0x11] = 1;
            B[6] = n < 2 ? 0 : 1;
            B[0] = 1;
            return 1;
        }
        if (v == 2) {
            s[0] = 2;
            s[0x11] = 0;
            s[0x15] = 0xFF;
            B[0] = 0;
            B[6] = 0;
            B[4] = 0;
            func_8001D748();
            return func_80012544(0x13);
        }
        return v < 2 ? 1 : 0xFF;
    }
    s[1] = B[6];
    v = B[6];
    if (v == 0) {
        func_80034AB0(0x48);
        s[0x15] = 0;
        s[4] = 0;
        goto finish;
    }
    if (v != 1) return 1;
    if (s[6] < 2) return func_80034AB0(0x4C);
    func_80034AB0(0x48);
    s[0x15] = s[4];
finish:
    B[0] = 0;
    B[6] = 0;
    B[4] = 0;
    return func_80012508();
}
