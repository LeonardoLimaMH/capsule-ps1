/* stub-ret: mixed */
/* arg1: small */
/* rand-ptr: 0x801010CC 6 */
/* rand-ptr: 0x80101868 6 */
/* rand-ptr: 0x80102004 6 */
/* rand-ptr: 0x801027A0 6 */
#include "common.h"

extern u8 D_80100F38[], D_800EEB9C[];
extern s32 D_800EE5D0[];
extern s32 func_800B5034(s32, s32, s32), func_80019F30(s32, s32);
extern void func_80015CD0(void *, s32, s32);

void func_800B53D4(s32 a0, s32 a1) {
    u8 *p = D_80100F38 + a1 * 0x79C;
    s16 *s2 = (s16 *)(p + 0x356);
    u8 **s1 = (u8 **)(p + 0x194);
    s16 i;
    for (i = 0; i < 8; i++, s2++) {
        if (i == 6) {
            s16 v = func_800B5034(a0, a1, 6);
            *s2 = v <= 0 ? 1 : (v < 100 ? v : 99);
        } else if (i == 7) {
            *s2 = func_800B5034(a0, a1, 7);
        } else {
            s32 r = func_800B5034(a0, a1, i);
            s16 v = r;
            if (*s2 != v) {
                *s2 = r;
                func_80015CD0(*s1 + 0x14, func_80019F30(D_800EE5D0[0] | 0x70000, D_800EE5D0[6] + *(s32 *)(D_800EEB9C + 0x780) + v), 0);
                *(u16 *)(*s1 + 0x66) = 0;
                *(s32 *)(*s1 + 0x30) &= ~0x1C0;
                *(s32 *)(*s1 + 0x30) = (*(s32 *)(*s1 + 0x30) & ~0x30) | 0x20;
                *(s32 *)(*s1 + 0x7C) = *(s32 *)(D_800EEB9C + 0x780) + v;
            }
            s1++;
        }
    }
}
