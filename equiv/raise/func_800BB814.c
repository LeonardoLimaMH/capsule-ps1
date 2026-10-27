/* rand-mem: 0x800EFF74 1 7 */
/* rand-mem: 0x800EFF75 3 1 */
/* rand-ptr: 0x800EFF80 7 */
#include "common.h"

extern u8 D_800EFF58[], D_8008ED68[], D_800F05E8[], D_800EFA04[];
extern u16 D_800EFA3C[];
extern u16 D_8008EE44;
extern s16 D_800ED878, D_800ED87A, D_800ED87C, D_800ED87E;
extern void func_8001F1A8(s32, s32, s32, s32, s32, void *, s32, s32, s32);
extern void func_80013920(u8 *), func_800B768C(void);

void func_800BB814(u8 *o) {
    u8 *f = D_800EFF58;
    u8 *w = D_8008ED68;
    if (o == *(u8 **)(f + 0x6C))
        func_8001F1A8((s16)(*(u16 *)(o + 0x46) + 8), (s16)(*(u16 *)(o + 0x4A) + 0x20), 0, 1, 0, D_800F05E8, 1, 0xE, 4);
    if (o == *(u8 **)(f + 0x20)) {
        if (*(u16 *)(w + 0xDC) != 0x14) return;
        if (D_800ED87A == 1) {
            if (D_800ED87C > 0) {
                s32 d, i;
                D_800ED87C -= 1;
                d = (u16)D_800ED878 * (u16)D_800ED87E;
                for (i = 0; i < 7; i++) *(s16 *)(*(u8 **)(f + 0x28 + i * 4) + 0x46) -= d;
            } else {
                D_800ED87A = 0;
                D_800ED878 = 1;
            }
        } else {
            s32 j = *(s32 *)(f + 0x1C);
            func_8001F1A8((s16)((2 - D_800EFA3C[j]) * 8 - (*(s32 *)(w + 0x108) / 2 - 0x92)),
                          (s16)(0x90 - *(s32 *)(w + 0x10C) / 2), 0, 1, 0, D_800EFA04 + j * 8, 1, D_800EFA3C[j], 4);
        }
        return;
    }
    if (o == *(u8 **)(f + 0x14)) {
        if (D_8008EE44 != 0x41) {
            func_800B768C();
            return;
        }
    } else if ((u16)(D_8008EE44 - 0xF) < 0xE) {
        return;
    }
    func_80013920(o);
}
