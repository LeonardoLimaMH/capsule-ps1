/* rand-mem: 0x8008EDF0 2 0xFF */
/* rand-mem: 0x8008EE48 1 3 */
/* rand-mem: 0x800B3B40 1 9 */
/* rand-mem: 0x800B3B64 1 2 */
#include "common.h"

extern u8 D_8008ED68[];
extern u32 D_8008EDF0;
extern s16 D_800B3B38[];
extern u8 D_80078C6C[], D_80078C6D[], D_80078C6F[];
extern char D_800B28A0[];
extern void func_80020844(s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 func_8001F1A8(s32, s32, s32, s32, s32, char *, s32, s32, s32);
extern s32 func_80034AB0(s32);
extern s32 func_800220D4(u8 *, s32, s32, s32);
extern void func_800220B8(u8 *), func_800A2588(s32);
extern s32 func_8001F8B0(s32, s32);
extern s32 func_80012578(void), func_80012508(void), func_80012544(s32);

#define B D_800B3B38
#define SND() func_80034AB0(0x84)

s32 func_8009ECF4(u8 *p) {
    s32 i, tx, ty, c;
    u32 pad;
    s16 sel;
    u16 e;
    for (i = 0; i < 8; i++) {
        u8 f = p[0x5D6];
        if (!(f & D_80078C6C[i])) continue;
        if (f & 0x80) {
            s32 base = (i & 3) * 72;
            s32 s0 = (i == 1 || i == 3) ? base - 0x80 : base - 0x88;
            func_80020844((s16)(base - 0x8C), i < 4 ? -0x4C : 0x14, 0x40, 0x54, 0, 0, 0, 0, 0x401);
            tx = (s16)s0;
            ty = i < 4 ? -8 : 0x58;
        } else if (i < 3) {
            s32 s0 = (i == 1) ? -0x60 + i * 0x50 : -0x68 + i * 0x50;
            func_80020844((s16)(i * 0x50 - 0x6C), -0x4C, 0x40, 0x54, 0, 0, 0, 0, 0x401);
            tx = (s16)s0;
            ty = -8;
        } else {
            u16 s0 = (i == 3) ? -0x158 + i * 0x48 : -0x160 + i * 0x48;
            func_80020844((s16)(-0xD8 + i * 0x48 - 0x8C), 0x14, 0x40, 0x54, 0, 0, 0, 0, 0x401);
            tx = (s16)s0;
            ty = 0x58;
        }
        c = B[4] == i ? 3 : 0;
        func_8001F1A8(tx, ty, c, 1, 0, D_800B28A0 + i * 8, 1, 4, 5);
    }
    e = *(u16 *)(D_8008ED68 + 0xE0);
    if (e == 1) {
        if (func_800220D4(p, 1, 1, 1) == 0) return 0;
        B[4] = 0;
        func_800A2588(0);
        return func_80012508();
    }
    if (e != 0) return 1;
    pad = *(u32 *)(D_8008ED68 + 0x88);
    if (pad & 0x1000) {
        sel = B[4];
        if (sel == 4) {
            SND();
            B[4] = (p[0x5D6] & 0x80) ? 0 : 1;
        } else if (sel < 5) {
            if (sel == 3 && !(p[0x5D6] & 0x80)) {
                SND();
                B[4] = 0;
            }
        } else if (sel < 8) {
            SND();
            B[4] -= 4;
        }
    } else if (pad & 0x4000) {
        sel = B[4];
        if (sel >= 0) {
            if (sel < 3) {
                u8 f = p[0x5D6];
                if (f & 0x80) {
                    SND();
                    B[4] += 4;
                } else if (f & D_80078C6F[sel]) {
                    SND();
                    B[4] += 3;
                }
            } else if (sel == 3 && (p[0x5D6] & 0x80)) {
                SND();
                B[4] = 7;
            }
        }
    } else if (pad & 0x8000) {
        sel = B[4];
        if (sel == 3) {
            if (p[0x5D6] & 0x80) {
                SND();
                B[4] -= 1;
            }
        } else if (sel < 4) {
            if (sel != 0) {
                SND();
                B[4] -= 1;
            }
        } else if (sel == 4) {
            if (!(p[0x5D6] & 0x80)) {
                SND();
                B[4] -= 1;
            }
        } else {
            SND();
            B[4] -= 1;
        }
    } else if (pad & 0x2000) {
        s32 ok;
        sel = B[4];
        if (sel == 3) ok = !(p[0x5D6] & 0x80);
        else if (sel == 2) ok = p[0x5D6] & 0x80;
        else if (sel == 7) ok = 0;
        else ok = p[0x5D6] & D_80078C6D[B[4]];
        if (ok) {
            SND();
            B[4] += 1;
        }
    }
    pad = D_8008EDF0;
    if (pad & 0x830) {
        func_80034AB0(0x48);
        p[0x5E5] = B[4];
        if (B[22] == 1) {
            func_800220B8(p);
            *(s32 *)(p + 0x14) = func_8001F8B0(p[0x5E5] + 8, 0);
            return func_80012578();
        }
        B[4] = 0;
        func_800A2588(0);
        return func_80012508();
    }
    if (!(pad & 0xC0)) return 0;
    func_80034AB0(0x5D);
    B[4] = 0;
    return func_80012544(7);
}
