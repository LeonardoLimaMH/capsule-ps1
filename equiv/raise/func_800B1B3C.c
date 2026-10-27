/* rand-u16: 0x8006AF80 1 0,1,2,3 */
/* rand-u16: 0x800EF0D8 1 0,1,2,3 */
/* rand-u16: 0x800EF0DA 1 0 */
/* rand-u16: 0x800916A2 1 0,1,2,3 */
/* rand-u16: 0x8009184A 1 0,1,2,3 */
/* rand-u16: 0x800919F2 1 0,1,2,3 */
/* rand-u16: 0x80091B9A 1 0,1,2,3 */
#include "common.h"

extern u8 D_80091618[], D_80100F38[], D_800EEB9C[];
extern s16 D_80103D38[];
extern u16 D_8006AF80;
extern s32 D_800F2DBC, D_800EF2D8, D_800EEB70;
extern s32 D_800F2DC0[];
extern void func_80026514(s32), func_800D8FB0(s32), func_800B19E0(s32), func_800E2110(void);
extern void func_800B1E7C(void), func_800B4C40(s32), func_800B6FA0(void);

#define E(i) (D_80091618 + (i) * 0x1A8)

static void copy(s32 k) {
    u8 *p = D_80100F38 + k * 0x79C;
    s32 *a = (s32 *)(p + 0x194);
    s32 i;
    D_800F2DBC = *(s32 *)(p + 0x190);
    for (i = 0; i < 6; i++) {
        D_800F2DC0[i] = *a;
        *a += 0x90;
    }
}

s32 func_800B1B3C(void) {
    if (D_80103D38[0] == 1) {
        u16 s1 = D_8006AF80;
        s32 s0 = *(s32 *)(D_800EEB9C + 0x73C);
        *(u16 *)(E(s1) + 0x10) = 0xFFFF;
        *(u16 *)(E(s0) + 0x8A) = 0xFFFF;
        *(u16 *)(E(s0) + 0x8C) = 0;
        D_8006AF80 = s0;
        *(s32 *)(D_800EEB9C + 0x73C) = s0;
        func_80026514(s1);
        copy(s1);
        func_800D8FB0(s1);
        func_800B19E0(s1);
        func_800E2110();
    } else {
        u16 s1 = D_8006AF80;
        u16 s0 = *(u16 *)(E(s1) + 0x8A);
        *(u16 *)(E(s0) + 0x10) = 0xFFFF;
        *(u16 *)(E(s0) + 0x8A) = 0xFFFF;
        *(u16 *)(E(s0) + 0x8C) = 0;
        D_800EF2D8 = s1;
        func_80026514(s0);
        copy(s0);
        func_800D8FB0(s0);
        func_800B19E0(s0);
        *(u16 *)(E(D_8006AF80) + 0x8A) = 0xFFFF;
    }
    D_800EEB70 = 2;
    func_800B1E7C();
    func_800B4C40(D_8006AF80);
    func_800B6FA0();
    return 1;
}
