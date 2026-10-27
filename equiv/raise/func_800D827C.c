#include "common.h"

/* stub-ret: mixed */
/* rand-u16: 0x80091628 1 0,1,2,3,0xFFFF */
/* rand-u16: 0x800917D0 1 0,1,2,3,0xFFFF */
/* rand-u16: 0x80091978 1 0,1,2,3,0xFFFF */
/* rand-u16: 0x80091B20 1 0,1,2,3,0xFFFF */
/* rand-u16: 0x8009162A 1 0,1,2,3 */
/* rand-u16: 0x800917D2 1 0,1,2,3 */
/* rand-u16: 0x8009197A 1 0,1,2,3 */
/* rand-u16: 0x80091B22 1 0,1,2,3 */
extern u8 D_80091618[], D_800EF524[], D_800900C0[];
extern s32 D_80069BB4, D_80069EAC;
extern s32 func_800B1260(s32), func_800D8774(s32, s32, s32);
extern void func_800CCFA4(s32, s32, s32), func_800B11F4(void);

s32 func_800D827C(void) {
    s32 i, j;
    for (i = 1; i >= 0; i--) {
        u16 k = func_800B1260(i);
        u8 *e;
        u16 c;
        if (k == 0xFFFF) continue;
        e = D_80091618 + k * 0x1A8;
        c = *(u16 *)(e + 0x10);
        for (j = 0; j < 3; j++) {
            if (*(s32 *)(D_800EF524 + c * 0x9C + j * 0x34) != -1) {
                if (i == 1) *(s32 *)(D_800900C0 + j * 0xBC) = i;
                else *(s32 *)(D_800900C0 + 0x234 + j * 0xBC) = 1;
            }
        }
        if (c != 0xFFFF && *(u16 *)(e + 0x12) != 0)
            for (j = 0; j < *(u16 *)(e + 0x12); j++) func_800CCFA4(i, j, 0);
        *(u16 *)(e + 0x12) = 0;
    }
    func_800B11F4();
    D_80069EAC = D_80069BB4;
    return func_800D8774(2, D_80069BB4, 0x500);
}
