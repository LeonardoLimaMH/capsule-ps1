#include "common.h"

/* rand-u16: 0x8006AF80 1 0,1,2,3 */
/* rand-u16: 0x800916A2 1 0,1,2,3 */
/* rand-u16: 0x8009184A 1 0,1,2,3 */
/* rand-u16: 0x800919F2 1 0,1,2,3 */
/* rand-u16: 0x80091B9A 1 0,1,2,3 */
extern u8 D_80091618[], D_800F2D30[], D_80100F38[];
extern u16 D_8006AF80;
extern s32 func_800A0E6C(s32);
extern void func_8001A49C(s32), func_800E2AA0(s32, s32, s32), func_800CD288(s32, s32), func_800B9F50(s32);
extern void raise_SpuInit(void), func_800A1F44(s32, s32, s32), func_800C60E0(s32, s32), func_800C62A4(s32, s32);
extern void func_800C5EFC(s32, s32), func_800E11A0(s32, s32);

#define E(i) (D_80091618 + (i) * 0x1A8)

s32 func_800E1C14(void) {
    u16 j = *(u16 *)(E(D_8006AF80) + 0x8A);
    u16 c = *(u16 *)E(j);
    if (D_800F2D30[c] == 0xFF) func_8001A49C(func_800A0E6C(c));
    j = *(u16 *)(E(D_8006AF80) + 0x8A);
    func_800E2AA0(*(u16 *)(E(j) + 0x10), 0, 0);
    func_800CD288(0, 1);
    func_800B9F50(0);
    raise_SpuInit();
    func_800A1F44(0, 0, 0);
    func_800C60E0(0, 1);
    func_800C62A4(0, 1);
    func_800C5EFC(0, 1);
    func_800E11A0(0, j);
    *(u16 *)(D_80100F38 + j * 0x79C + 0x386) = 0;
    return 1;
}
