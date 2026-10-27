#include "common.h"

/* rand-u16: 0x800F02A0 1 0,1,2,3,5 */
/* rand-u16: 0x800F02A2 1 0 */
extern u8 D_800EFF58[], D_800F05AC[], D_80065164[];
extern u16 D_8008EE44;
extern void func_8001F1A8(s32, s32, s32, s32, s32, void *, s32, s32, s32);
extern s32 func_80013920(u8 *);

s32 func_800BD164(u8 *o) {
    u8 *f = D_800EFF58;
    if (o == *(u8 **)(f + 0x418))
        func_8001F1A8((s16)(*(u16 *)(o + 0x46) + 8), (s16)(*(u16 *)(o + 0x4A) + 0x20), 0, 1, 0, D_800F05AC, 1, 0xE, 4);
    if (o == *(u8 **)(f + 0x34C)) {
        s32 n = *(s32 *)(f + 0x348), sel = *(s32 *)(f + 0x344);
        s32 i;
        for (i = 0; i <= n; i++)
            func_8001F1A8((s16)(*(u16 *)(o + 0x46) + 0x10), (s16)(*(u16 *)(o + 0x4A) + 8 + i * 16), i == sel ? 3 : 0, 1, 0,
                          D_80065164 + *(s32 *)(f + 0x3D4 + i * 4) * 12, 1, 6, 4);
    }
    if (D_8008EE44 != 0x41) return 0x41;
    return func_80013920(o);
}
