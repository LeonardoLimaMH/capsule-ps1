/* rand-mem: 0x8008EE44 1 0x10 */
/* rand-mem: 0x8008EE48 1 6 */
/* rand-mem: 0x800859F0 1 8 */
/* rand-mem: 0x8008F780 0x10 3 */
/* rand-mem: 0x8008F7D0 1 2 */
/* rand-mem: 0x800B3ADC 1 4 */
/* rand-mem: 0x800B3B20 1 0x10 */
#include "common.h"

extern u8 D_8008ED68[];
extern u16 D_800B3988[];
extern s32 D_800B3D08;
extern s32 func_800185F8(void);

#define D16(o) (*(u16 *)(D_8008ED68 + (o)))
#define P32(o) (*(u32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

s32 func_800A9ABC(u8 *p) {
    u16 m = D16(0xDC);
    s32 v;
    if (m < 5 && (m != 4 || D16(0xE0) == 0)) {
        P32(0x38) = (P32(0x38) | 1) & ~8;
        return P32(0x38);
    }
    P32(0x38) = (P32(0x38) & ~1) | 8;
    if (PS16(0x4A) >= 0xA9) {
        s16 x;
        P16(0x4A) = 0xA0;
        P16(0x6E) = D_800B3988[*(s32 *)(p + 0x84)];
        x = PS16(0x46);
        if ((x >= 0xA0 && PS16(0x6A) > 0) || (x < -0x9F && PS16(0x6A) < 0)) P16(0x6A) = ~P16(0x6A);
    } else if (!(D_800B3D08 & 7)) {
        P16(0x6E) += 1;
    }
    if (D16(0xDC) != 8) return 8;
    v = *(s32 *)(D_8008ED68 + 0xA68);
    if (v) return v;
    return func_800185F8();
}
