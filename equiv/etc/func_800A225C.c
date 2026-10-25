/* arg1: small */
/* rand-mem: 0x800B3B38 1 6 */
/* rand-mem: 0x800B3B3A 1 6 */
/* rand-mem: 0x8008EDF0 1 0x80 */
/* rand-mem: 0x8008EE00 1 0x80 */
/* rand-mem: 0x800B3C08 8 2 */
#include "common.h"

extern u8 D_8008ED68[];
extern s16 D_800B3B38[];
extern s32 D_800B3C08[];
extern s32 func_80034AB0(s32);
extern void func_800A2CC8(s32, s32);
extern s32 func_80012544(s32), func_80012508(void);
extern s32 rand(void);
extern void func_800A2678(u8 *);
extern void func_80034BD8(s32, s32);
extern void func_80033974(s32);

#define PAD(i) (*(u32 *)(D_8008ED68 + (i) * 16 + 0x88))

s32 func_800A225C(u8 *p, s16 i) {
    s16 *e;
    s32 v, r;
    u32 pad;
    switch ((u32)D_800B3B38[i]) {
    case 0:
        pad = PAD(i);
        if (pad & 0x20) {
            func_80034AB0(0x48);
            D_800B3B38[i] = 1;
            return 1;
        }
        if (!(pad & 0x40)) return 0;
        func_80034AB0(0x5D);
        func_800A2CC8(0, 2);
        D_800B3B38[1] = 0;
        D_800B3B38[0] = 0;
        D_800B3B38[5] = 0;
        D_800B3B38[4] = 0;
        D_800B3B38[7] = 0;
        D_800B3B38[6] = 0;
        D_800B3B38[3] = 6;
        D_800B3B38[2] = 6;
        return func_80012544(0x18);
    case 1:
        func_80034AB0(0x57);
        e = &D_800B3B38[i];
        e[2] += 1;
        if (e[2] == 6) e[2] = 0;
        if (!(PAD(i) & 0x20)) return 0;
        r = rand();
        v = (s16)((u16)e[2] + (r - (r / 3) * 3));
        e[0] = 2;
        e[2] = v - (v / 6) * 6;
        return (v / 6) * 6;
    case 2:
        D_800B3C08[i] = 0x3C;
        func_80034AB0(0x13);
        D_800B3B38[i] = 3;
        return 3;
    case 3:
        v = D_800B3C08[i] - 1;
        D_800B3C08[i] = v;
        if (v >= 0) return v;
        if (p[0x5D0] == 2) {
            D_800B3B38[i] = 4;
            return 4;
        }
        func_800A2678(p);
        D_800B3B38[i] = 0;
        D_800B3B38[i + 4] = 0x1000;
        func_80034BD8(-3, 0);
        func_80033974(0x7015);
        return func_80012508();
    case 4:
        if (D_800B3B38[0] != 4) return 4;
        if (D_800B3B38[1] != 4) return D_800B3B38[1];
        func_800A2678(p);
        D_800B3B38[1] = 0;
        D_800B3B38[0] = 0;
        D_800B3B38[3] = 0;
        D_800B3B38[2] = 0;
        D_800B3B38[4] = 0x1000;
        func_80034BD8(-3, 0);
        func_80033974(0x7003);
        return func_80012544(0x1A);
    }
    return 0;
}
