/* rand-mem: 0x8008EE44 1 0xC */
/* rand-mem: 0x8008EE48 1 5 */
/* rand-mem: 0x800B3ADC 1 4 */
#include "common.h"

extern u16 D_8008EE44, D_8008EE48;
extern s32 D_800B3ADC;
extern u16 D_800AF180[], D_800AF18C[];

#define P32(o) (*(u32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define FLAG4 ((((u32)D_800B3ADC & 1) ^ 1) << 2)

s32 func_8009B864(u8 *p) {
    u32 fl = P32(0x38) & ~1;
    u16 xu, yu;
    s16 x, y;
    u16 e;
    s32 v;
    P32(0x38) = fl;
    xu = P16(0x80);
    yu = P16(0x84);
    x = xu;
    y = yu;
    switch ((u32)(D_8008EE44 - 4)) {
    case 0:
        P16(0x46) = x * 40 - 0xA0;
        v = D_800AF180[y];
        P16(0x4E) = 4;
        P16(0x4A) = v;
        v = D_800AF18C[y];
        P16(0x52) = v;
        return v;
    case 1:
        e = D_8008EE48;
        if (e == 2) {
            v = P16(0x4A) + 1;
            P16(0x4A) = v;
            return v;
        }
        if (e != 3) return 0x55550000; /* lixo do lui no delay slot */
        P16(0x46) = x * 40 - 0xA0;
        if ((s16)(y / 3)) P16(0x4A) = (y - 3) * 40 + 0x78;
        else P16(0x4A) = y * 40 - 0xF0;
        P16(0x4E) = 3;
        P16(0x52) = 0x1000;
        return 0x1000;
    case 2:
        e = D_8008EE48;
        if (e == 0) {
            P32(0x38) |= 8;
            return P32(0x38);
        }
        if (e == 2) {
            P16(0x4A) = y * 40 + (FLAG4 - 0x78);
            P32(0x38) &= ~8;
            return P32(0x38);
        }
        if (e != 3) return (u32)xu << 16;
        v = x / 4 ? 4 : -4;
        P16(0x6A) = v;
        P16(0x6E) = 0;
        return v;
    case 3:
        e = D_8008EE48;
        if (e == 0) {
            v = FLAG4 - 0xA0;
            P16(0x46) = x * 40 + v;
            return v;
        }
        if (e == 1) {
            P32(0x38) |= 8;
            return P32(0x38);
        }
        if (e != 2) return -9;
        P32(0x38) &= ~8;
        if (*(s32 *)(p + 0x80) < 4) {
            v = FLAG4 + 0x118;
            P16(0x46) = x * 40 - v;
            return v;
        }
        v = FLAG4 + 0x78;
        P16(0x46) = (x - 4) * 40 + v;
        return v;
    case 4:
    case 5:
    case 6:
        if (*(s32 *)(p + 0x80) < 4) P16(0x46) = x * 40 - 0x118;
        else P16(0x46) = (x - 4) * 40 + 0x78;
        P16(0x4A) = y * 40 - 0x78;
        P16(0x52) = 0x1000;
        return 0x1000;
    }
    P32(0x38) = fl | 1;
    return fl | 1;
}
