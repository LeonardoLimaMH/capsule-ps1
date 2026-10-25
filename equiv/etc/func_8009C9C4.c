/* rand-mem: 0x8008EE44 1 0x10 */
/* rand-mem: 0x8008EE48 1 6 */
/* rand-mem: 0x800859F0 1 8 */
/* rand-mem: 0x8008F780 0x10 3 */
/* rand-mem: 0x8008F7D0 1 2 */
/* rand-mem: 0x800B3ADC 1 4 */
/* rand-mem: 0x800B3B20 1 0x10 */
#include "common.h"

extern u16 D_8008EE48, D_8008EE44;
extern u8 D_8008ED68[];
extern u8 D_800859F0;
extern s32 D_800B3C10;
extern u16 D_800B3C14;
extern u16 D_800B2C1C[];
extern s32 func_80012508(void), func_80012578(void), func_80019654(void), func_800337EC(void);
extern s32 func_800338DC(s32), func_80012544(s32);

#define D16(o) (*(u16 *)(D_8008ED68 + (o)))
#define D32(o) (*(s32 *)(D_8008ED68 + (o)))

static s32 by_mode(void) {
    u16 m = D_8008EE44;
    if (m == 0xB) return func_80012544(0xD);
    if (m == 0xC) return func_80012544(7);
    return func_80012508();
}

s32 func_8009C9C4(u8 *p) {
    s32 r;
    switch (D_8008EE48) {
    case 0:
        D_800B3C10 = 0;
        if (D16(0xDC) == 0xB) {
            if (D32(0xA1C) == 2) D_800B3C14 = 0x7020;
            else D_800B3C14 = D_800B2C1C[p[0x5D4]];
        } else {
            D_800B3C14 = 0x7015;
        }
        *(u16 *)(p + 8) = D_800B3C14;
        if (D16(0xDC) == 3 && D32(0xA24) == 1) return func_80012508();
        if (D_800859F0 & 4) return func_80012578();
        return by_mode();
    case 1:
        r = func_80019654();
        if (r == 0) return r;
        return func_80012578();
    case 2:
        func_800338DC(D_800B3C14);
        return func_80012578();
    case 3:
        if (!(D_800859F0 & 4)) return func_80012578();
        r = func_800337EC() & 0x80;
        if (r == 0) return r;
        return func_80012578();
    case 4:
        return by_mode();
    }
    return 0;
}
