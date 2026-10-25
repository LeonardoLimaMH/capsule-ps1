/* rand-mem: 0x8008EE44 1 0x10 */
/* rand-mem: 0x8008EE48 1 6 */
/* rand-mem: 0x800859F0 1 8 */
/* rand-mem: 0x8008F780 0x10 3 */
/* rand-mem: 0x8008F7D0 1 2 */
/* rand-mem: 0x800B3ADC 1 4 */
/* rand-mem: 0x800B3B20 1 0x10 */
#include "common.h"

extern u8 D_8008ED68[];
extern u8 D_800859F0;
extern s32 D_800B3D08, D_800B3C48;
extern s32 func_80012508(void), func_80012578(void), func_80019654(void), func_800337EC(void);
extern s32 func_800338DC(s32);
extern void func_80020844(s32, s32, s32, s32, s32, s32, s32, s32, s32);

#define D16(o) (*(u16 *)(D_8008ED68 + (o)))

s32 func_800A8D68(void) {
    s32 r;
    if (D16(0xDC) == 6) {
        D_800B3D08++;
        func_80020844(-0xA0, -0x78, 0x140, 0xF0, 0, 0, 0, 0, 4);
    }
    switch (D16(0xE0)) {
    case 0:
        D_800B3C48 = 0;
        if (D_800859F0 & 4) return func_80012578();
        return func_80012508();
    case 1:
        r = func_80019654();
        if (r == 0) return r;
        return func_80012578();
    case 2:
        func_800338DC(D16(0xDC) == 2 ? 0x7021 : 0x8000);
        return func_80012578();
    case 3:
        if (!(D_800859F0 & 4)) return func_80012508();
        if (D16(0xDC) == 2) r = func_800337EC() & 0x80;
        else r = func_800337EC() & 4;
        if (r == 0) return r;
        return func_80012508();
    }
    return 0x80080000; /* lixo do %hi no delay slot */
}
