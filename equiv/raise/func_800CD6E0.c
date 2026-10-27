/* stub-ret: mixed */
/* arg0: small */
/* rand-ptr: 0x80101154 1 */
/* rand-ptr: 0x801018F0 1 */
/* rand-ptr: 0x8010208C 1 */
/* rand-ptr: 0x80102828 1 */
#include "common.h"

extern u8 D_80100F38[], D_8008ED68[];
extern s16 D_800F1A64[];
extern u16 D_800F1A58[];
extern s32 func_800B1260(s32), func_8001AB74(u32), func_800C5888(s32), func_800C593C(s32);
extern void func_80034AB0(s32);

#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
#define OBJ (*(u8 **)(p + 0x21C))

void func_800CD6E0(s32 a0, s32 a1) {
    s32 s4 = 1 - a0;
    u16 k = func_800B1260(a0);
    u8 *p = D_80100F38 + k * 0x79C;
    switch (PS16(0x22A)) {
    case 0:
        if (PS16(0x224) != 0) {
            u16 y;
            double d1;
            s16 t;
            P16(0x224) -= 1;
            y = P16(0x1DE) + P16(0x226);
            d1 = (double)P32(0x22C);
            P16(0x1DE) = y;
            P16(0x1DC) = func_8001AB74((u32)(d1 * (double)(s16)y));
            if (PS16(0x1E4) < 0) P16(0x1DC) = -PS16(0x1DC);
            *(s16 *)(OBJ + 0x46) = P16(0x1DC) - *(s32 *)(D_8008ED68 + 0x108) / 2;
            *(s16 *)(OBJ + 0x4A) = P16(0x1DE) - *(s32 *)(D_8008ED68 + 0x10C) / 2;
            t = D_800F1A64[s4];
            *(s16 *)(OBJ + 0x4E) = P16(0x1E0) + (s16)((s16)(P16(0x1E8) - P16(0x1E0)) * (t - PS16(0x224))) / t;
        } else {
            func_80034AB0(0x8B);
            P16(0x22A) = 1;
            P16(0x224) = 0x20;
            *(s16 *)(OBJ + 0x46) = P16(0x1E4) - *(s32 *)(D_8008ED68 + 0x108) / 2;
            *(s16 *)(OBJ + 0x4A) = P16(0x1E6) - *(s32 *)(D_8008ED68 + 0x10C) / 2;
            *(u16 *)(OBJ + 0x4E) = P16(0x1E8);
        }
        break;
    case 1:
        if (PS16(0x224) != 0) {
            P16(0x224) -= 1;
        } else {
            P16(0x22A) = 2;
            P16(0x222) = 4;
            P16(0x224) = 8;
        }
        break;
    case 2:
        if (PS16(0x222) != 0) {
            P16(0x222) -= 1;
            break;
        }
        if (a1 == 0) P16(0x222) = func_800C5888(a0);
        else if (a1 == 1) P16(0x222) = func_800C593C(a0);
        if ((P16(0x224) -= 1) == 0) P16(0x22A) = 3;
        break;
    case 3:
        P16(0x228) = 0;
        D_800F1A58[k] = 1;
        break;
    }
}
