/* rand-u16: 0x80091618 1 19,25,28,33,36,54,58,64,78,81,83,92,94,101,5 */
/* rand-u16: 0x800917C0 1 19,25,58,92,5 */
/* rand-u16: 0x80091968 1 19,58,92 */
/* arg2: small */
#include "common.h"

typedef struct { s32 v[3]; } T3;
extern u8 D_80091618[], D_80063940[], D_8006B1D4[];
extern T3 D_80097804;
extern void func_80034AB0(s32);

void func_80098FEC(u8 *o, s32 a1, s32 a2) {
    u16 c = *(u16 *)(D_80091618 + (u16)a2 * 0x1A8);
    T3 t = D_80097804;
    s32 i;
    switch (c) {
    case 19: t.v[0] = 6; break;
    case 25: t.v[0] = 3; break;
    case 28: t.v[0] = 8; break;
    case 33: t.v[0] = 3; break;
    case 36: t.v[0] = 8; break;
    case 54: t.v[0] = 0xD; break;
    case 58: t.v[0] = 3; t.v[1] = 6; break;
    case 64: t.v[0] = 1; break;
    case 78: t.v[0] = 0xB; break;
    case 81: t.v[0] = 8; break;
    case 83: t.v[0] = 8; break;
    case 92: t.v[0] = 3; t.v[1] = 7; t.v[2] = 0xB; break;
    case 94: t.v[0] = 0xD; break;
    case 101: t.v[0] = 0xA; break;
    default: return;
    }
    for (i = 0; i < 3; i++) {
        if (t.v[i] == -1) return;
        if (*(u16 *)(o + 0x20) == t.v[i] - 2 && *(s16 *)(o + 0x24) == 0)
            func_80034AB0(c == 0x5C ? 0x8A : *(u16 *)(D_8006B1D4 + ((*(u32 *)(D_80063940 + c * 60 + 0xC) >> 3) & 6) + 0x12));
    }
}
