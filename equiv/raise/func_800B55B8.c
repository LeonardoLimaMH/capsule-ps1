/* stub-ret: mixed */
/* args: small */
/* rand-u16: 0x8006AF80 1 0,1,2,3 */
/* rand-ptr: 0x801010CC 6 */
/* rand-ptr: 0x80101868 6 */
/* rand-ptr: 0x80102004 6 */
/* rand-ptr: 0x801027A0 6 */
/* rand-u16: 0x800EEB96 1 5,4 */
/* rand-u16: 0x800EEB9A 1 5,4 */
#include "common.h"

extern u8 D_80100F38[], D_80091618[], D_800EEB9C[];
extern s32 D_800EE5D0[];
extern s16 D_800EEB90, D_800EEB94[];
extern u16 D_800EF35C, D_800EF35E, D_8006AF80;
extern void *D_800F14F4[];
extern s32 func_800B5034(s32, s32, s32), func_80019F30(s32, s32);
extern void func_80015CD0(void *, s32, s32);
extern void func_8001F35C(s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_8001F1A8(s32, s32, s32, s32, s32, void *, s32, s32, s32);

#define SIDE(a0) D_800EEB94[((a0) != D_800EEB90) * 2 + 1]

void func_800B55B8(s32 a0, s32 a1) {
    u8 *p = D_80100F38 + a1 * 0x79C;
    s16 *s3 = (s16 *)(p + 0x356);
    u8 **s2 = (u8 **)(p + 0x194);
    s32 ox = 0, oy = 0;
    s16 i;
    if (a0 == 1) {
        if (*(u16 *)(D_80091618 + D_8006AF80 * 0x1A8 + 0x8A) != 0xFFFF) {
            ox = 8;
            oy = 0xC;
        }
    } else if (a0 == 0) {
        ox = -8;
        oy = -4;
    }
    for (i = 0; i < 8; i++, s3++) {
        if (i == 6) {
            s16 v = func_800B5034(a0, a1, 6);
            s16 s1;
            v = v <= 0 ? 1 : (v < 100 ? v : 99);
            *s3 = v;
            if (a0 == 2) continue;
            s1 = SIDE(a0);
            if (s1 == 5) {
                s16 q = v / 10;
                func_8001F35C((s16)(ox - (D_800EF35C - 0x66)), (s16)(oy - (D_800EF35E - 0x8C)), 0, 0, 0,
                              (s16)(v - q * 10), 1, s1);
                if (q != 0)
                    func_8001F35C((s16)(ox - (D_800EF35C - 0x5C)), (s16)(oy - (D_800EF35E - 0x8C)), 0, 0, 0, q, 1,
                                  s1);
            }
        } else if (i == 7) {
            s16 v = func_800B5034(a0, a1, 7);
            s16 s0;
            *s3 = v;
            if (a0 == 2) continue;
            s0 = SIDE(a0);
            if (s0 != 5 && a0 != 1) continue;
            func_8001F1A8((s16)(ox - (D_800EF35C - 0x5C)), (s16)(oy - (D_800EF35E - 0x9E)), 0, 0, 0,
                          D_800F14F4[v], 0, 4, s0);
            func_8001F35C((s16)(ox - (D_800EF35C - 0xC0)), (s16)(oy - (D_800EF35E - 0x9E)), 0, 0, 0,
                          *(s16 *)(D_80091618 + a1 * 0x1A8 + 0xBC), 1, s0);
        } else {
            s32 r = func_800B5034(a0, a1, i);
            s16 v = r;
            if (*s3 != v) {
                *s3 = r;
                func_80015CD0(*s2 + 0x14, func_80019F30(D_800EE5D0[0] | 0x70000, D_800EE5D0[6] + *(s32 *)(D_800EEB9C + 0x780) + v), 0);
                *(u16 *)(*s2 + 0x66) = 0;
                *(s32 *)(*s2 + 0x30) &= ~0x1C0;
                *(s32 *)(*s2 + 0x30) = (*(s32 *)(*s2 + 0x30) & ~0x30) | 0x20;
                *(s32 *)(*s2 + 0x7C) = *(s32 *)(D_800EEB9C + 0x780) + v;
            }
            s2++;
        }
    }
}
