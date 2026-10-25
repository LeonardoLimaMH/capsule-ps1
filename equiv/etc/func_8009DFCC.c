/* rand-mem: 0x8008EDF0 2 0xFF */
/* rand-mem: 0x8008EE00 2 0xFF */
/* rand-mem: 0x800B3B38 1 2 */
/* rand-mem: 0x800B3B40 1 3 */
/* rand-mem: 0x800B3B44 1 0xA */
#include "common.h"

extern u8 D_8008ED68[];
extern s16 D_800B3B38[];
extern char D_800B27C4[], D_800B27DC[], D_800B2848[], D_800B2868[], D_800B2964[], D_800B2968[];
extern s32 func_8001F1A8(s32, s32, s32, s32, s32, char *, s32, s32, s32);
extern void func_800A2BB0(s32, s32, s32, s32, char *, s32, char *, s32);
extern s32 func_80034AB0(s32);
extern void func_800A2A80(u8 *), func_800A2588(s32), func_8001D850(void);
extern s32 func_80012544(s32), func_80012508(void);

#define B D_800B3B38
#define D32(o) (*(u32 *)(D_8008ED68 + (o)))

s32 func_8009DFCC(u8 *p) {
    u32 pad = D32(0x88);
    s32 k, c, y;
    s16 *s0;
    s16 v;
    if (p[0x5D0] == 2) pad |= D32(0x98);
    c = B[0] ? 1 : 3;
    for (k = 0; k < 3; k++)
        func_8001F1A8(-0x90, (s16)(-0x5C + k * 0x16), B[4] == k ? c : 0, 1, 0, D_800B27C4 + k * 8, 1, 4, 3);
    c = B[0] == 1 ? 3 : 0;
    for (k = 0, y = -0x60; k < 9; k++, y += 0x10) {
        if (k == 3) y += 0x10;
        else if (k == 8) y += 0x20;
        func_8001F1A8(-0x48, (s16)y, B[6] == k ? c : 0, 1, 0, D_800B27DC + k * 12, 1, 6, 3);
    }
    c = (B[0] == 1 && B[6] == 3) ? 3 : 1;
    func_8001F1A8(0x20, -0x20, c, 1, 0, D_800B2848 + B[23] * 10, 1, 5, 3);
    c = (B[0] == 1 && B[6] == 5) ? 3 : 1;
    func_8001F1A8(0x20, 0, c, 1, 0, D_800B2868 + B[25] * 8, 1, 4, 3);
    func_800A2BB0(0x20, -0x40, 2, B[22], D_800B2964, 2, D_800B2968, 3);
    func_800A2BB0(0x20, -0x10, 4, B[24], D_800B2964, 2, D_800B2968, 3);
    func_800A2BB0(0x20, 0x10, 6, B[26], D_800B2964, 2, D_800B2968, 3);
    func_800A2BB0(0x20, 0x20, 7, B[27], D_800B2964, 2, D_800B2968, 3);
    if (B[0] == 0) {
        if (pad & 0x5000) {
            func_80034AB0(0x84);
            B[4] ^= 1;
        }
        if (pad & 0x830) {
            func_80034AB0(0x48);
            func_800A2A80(p);
            v = B[4];
            if (v != 0) {
                B[0] = 1;
                B[6] = 0;
                return v;
            }
            B[4] = 0;
            c = p[0x5D0];
            if (c == 1) return func_80012544(0xF);
            if (c == 2) {
                func_800A2588(0);
                return func_80012544(0x10);
            }
            return func_80012508();
        }
        if (!(pad & 0xC0)) return 0;
        func_80034AB0(0x5D);
        func_800A2A80(p);
        B[6] = 0;
        B[0] = 0;
        B[4] = p[0x5D0];
        if (p[0x5D0] == 2) func_8001D850();
        return func_80012544(6);
    }
    if (pad & 0x1000) {
        func_80034AB0(0x84);
        B[6] -= 1;
        if (B[6] < 0) B[6] = 8;
    } else if (pad & 0x4000) {
        func_80034AB0(0x84);
        v = B[6] + 1;
        B[6] = v - (v / 9) * 9;
    }
    k = B[6];
    s0 = &B[20 + k];
    if (pad & 0x2000) {
        switch ((u32)k) {
        case 0:
        case 1:
            func_80034AB0(0x84);
            v = *s0 + 1;
            *s0 = v;
            *s0 = v - ((v / 8) << 3);
            break;
        case 3:
            if (++B[23] < 3) goto snd;
            B[23] = 2;
            break;
        case 5:
            if (++B[25] < 7) goto snd;
            B[25] = 6;
            break;
        case 8:
            break;
        default:
            func_80034AB0(0x84);
            *s0 ^= 1;
            break;
        }
    } else if (pad & 0x8000) {
        switch ((u32)k) {
        case 0:
        case 1:
            func_80034AB0(0x84);
            if (--*s0 < 0) *s0 = 7;
            break;
        case 3:
            if (--B[23] >= 0) goto snd;
            B[23] = 0;
            break;
        case 5:
            if (--B[25] >= 0) goto snd;
            B[25] = 0;
            break;
        case 8:
            break;
        default:
            func_80034AB0(0x84);
            *s0 ^= 1;
            break;
        }
    }
    goto tail;
snd:
    func_80034AB0(0x84);
tail:
    if (pad & 0x830) func_80034AB0(0x48);
    else if (pad & 0xC0) func_80034AB0(0x5D);
    else return 0;
    B[0] = 0;
    return 0x800B0000; /* lixo do %hi */
}
