/* rand-u16: 0x800ED8EA 1 0,1,2,3,4,0xFFFF */
/* rand-u16: 0x800ED8EC 1 1,2,3 */
#include "common.h"

extern s32 D_8008543C, D_8008ED80;
extern s16 D_800ED8EA, D_800ED8EC;
extern s32 func_80013920(u8 *);
extern void func_800A847C(u8 *);

#define O16(x) (*(s16 *)(o + (x)))
#define O32(x) (*(s32 *)(o + (x)))

/* os valores devolvidos reproduzem o que fica em v0 em cada saída */
s32 func_800A8184(u8 *o) {
    u16 t;
    s32 b;
    if (D_8008543C == 0) {
        D_800ED8EA = 0;
        D_800ED8EC = 6;
        return func_80013920(o);
    }
    t = D_800ED8EA;
    switch (D_800ED8EA) {
    case 0:
        if (O32(0x3C) != 0) return O32(0x3C) -= 1;
        D_800ED8EA = t + 1;
        O16(0x54) = 0x1000;
        return O32(0x38) &= ~8;
    case 1:
        if ((D_8008ED80 & 0xF) != 0) return D_8008ED80 & 0xF;
        b = (O32(0x38) & 1) ^ 1;
        O32(0x38) = (O32(0x38) & ~1) | b;
        if (--D_800ED8EC != 0) return b;
        if ((O32(0x38) & 1) == 1) {
            D_800ED8EC = 1;
            return 1;
        }
        O16(0x54) = 0x1000;
        O16(0x50) = 0x1000;
        O16(0x52) = 0x1000;
        O32(0x3C) = 0x18;
        O16(0x78) = -0xAA;
        O16(0x74) = -0xAA;
        O16(0x76) = -0xAA;
        D_800ED8EA = t + 1;
        return O32(0x38) |= 8;
    case 2:
        if (O32(0x3C) != 0) return O32(0x3C) -= 1;
        O32(0x38) = (O32(0x38) & ~8) | 1;
        func_800A847C(o);
        return (u16)(D_800ED8EA += 1);
    case 3:
        D_800ED8EA = 0;
        D_800ED8EC = 6;
        return func_80013920(o);
    }
    return D_800ED8EA < 0 ? 1 : 3;
}
