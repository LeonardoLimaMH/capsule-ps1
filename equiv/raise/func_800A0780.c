/* rand-u16: 0x800F006C 1 0,1 */
/* rand-u16: 0x800F006E 1 0 */
/* rand-ptr: 0x800F0078 2 */
/* rand-ptr: 0x800F01E8 2 */
/* rand-ptr: 0x800F01F8 6 */
/* rand-u16: 0x800F0174 1 0,1,2,3 */
/* rand-u16: 0x800F0176 1 0 */
/* rand-u16: 0x800F0178 1 0,1,2,3 */
/* rand-u16: 0x800F017A 1 0 */
/* rand-u16: 0x800F01E4 1 0,1,2 */
/* rand-u16: 0x800F01E6 1 0 */
/* rand-u16: 0x800EFFE4 1 0,1,2 */
/* rand-u16: 0x800EFFE6 1 0 */
#include "common.h"

extern u8 D_800EFF58[];
extern void func_8001F1A8(s32, s32, s32, s32, s32, void *, s32, s32, s32);

#define F32(x) (*(s32 *)(D_800EFF58 + (x)))
#define FP(x) (*(u8 **)(D_800EFF58 + (x)))
#define W(o, x) (*(s32 *)((o) + (x)))

void func_800A0780(s32 a0) {
    s32 s = F32(0x114);
    u8 **arr;
    s32 t, i;
    if (a0 == 2) {
        *(u16 *)(FP(0x120 + s * 4) + 0x66) = 0;
        if (F32(0x21C + s * 4) == -1) return;
        *(u16 *)(*(u8 **)(D_800EFF58 + s * 12 + F32(0x28C) * 4 + 0x2A0) + 0x66) = 0;
        W(FP(0x290 + s * 4), 0x38) |= 1;
        return;
    }
    t = F32(0x8C) != 1;
    *(u16 *)(FP(0x120 + s * 4) + 0x66) = 1;
    if (F32(0x21C + s * 4) == -1) return;
    if (a0 == 1) F32(0x254 + s * 4) = F32(0x28C);
    arr = (u8 **)(D_800EFF58 + s * 12 + 0x2A0);
    *(u16 *)(arr[F32(0x28C)] + 0x66) = 1;
    W(FP(0x290 + s * 4), 0x38) = (W(FP(0x290 + s * 4), 0x38) & ~1) | t;
    for (i = 0; i < F32(0x21C + s * 4); i++) {
        W(arr[i], 0x38) = (W(arr[i], 0x38) & ~1) | t;
        if (F32(0x8C) == 1) {
            u8 *y = FP(0x290 + s * 4);
            func_8001F1A8((s16)(*(u16 *)(y + 0x46) + 8), (s16)(*(u16 *)(y + 0x4A) + 8 + i * 16),
                          i == F32(0x254 + s * 4) ? 3 : 0, 1, (W(arr[i], 0x38) >> 6) & 1,
                          D_800EFF58 + 0x2D0 + s * 30 + i * 10, F32(0x8C), 5, 4);
        }
    }
}
