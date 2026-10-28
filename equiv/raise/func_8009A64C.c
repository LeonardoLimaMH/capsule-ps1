/* rand-ptr: 0x800EFF4C 2 */
/* rand-u16: 0x8006AF80 1 0,1,2,3 */
/* rand-u16: 0x8008EE4C 1 2,3 */
#include "common.h"

extern u8 D_8008F702, D_80091618[], D_800EFA04[];
extern u16 D_8008EE4C, D_8006AF80;
extern u32 D_8008F714;
extern s32 D_8008F708;
extern u8 *D_800EFF4C[];
extern void func_800125D8(void);
extern s32 func_800185F8(u8 *), func_800BE190(u8 *);
extern s32 func_8001F1A8(s32, s32, s32, s32, s32, void *, s32, s32, s32);

#define O16(x) (*(u16 *)(o + (x)))
#define OS16(x) (*(s16 *)(o + (x)))
#define O32(x) (*(s32 *)(o + (x)))
#define E(i) (D_80091618 + (i) * 0x1A8)

static s32 follow(u8 *o, u8 *o2) {
    *(u16 *)(o2 + 0x46) = O16(0x46) + 0x28;
    *(u16 *)(o2 + 0x4A) = O16(0x4A) + 0x30;
    *(s32 *)(o2 + 0x68) = O32(0x68);
    return *(s32 *)(o2 + 0x6C) = O32(0x6C);
}

/* os valores devolvidos reproduzem o que fica em v0 em cada saída */
s32 func_8009A64C(u8 *o) {
    s32 t = O32(0x34) & 0x7F;
    s32 v;
    if (D_8008F702 != 1) {
        switch (O16(0x7A)) {
        case 0:
            if (D_8008EE4C != 2) break;
            if (t == 0xB) *(s32 *)(D_800EFF4C[0] + 0x38) &= ~1;
            else if (t == 0xC) *(s32 *)(D_800EFF4C[1] + 0x38) &= ~1;
            O32(0x3C) = 0;
            O32(0x38) = (O32(0x38) & ~1) | 8;
            O16(0x7A) += 1;
        case 1:
            if ((u32)(O32(0x3C) += 1) < 0x29) break;
            if (t == 2) func_800125D8();
            O32(0x38) &= ~8;
            O16(0x7A) += 1;
            break;
        case 2:
            if (D_8008F714 < 2) break;
            O16(0x6A) = -O16(0x6A);
            O16(0x7A) += 1;
            O16(0x6E) = -O16(0x6E);
            break;
        case 3:
            O32(0x3C) = 0;
            O32(0x38) |= 8;
            O16(0x7A) += 1;
        case 4:
            if ((u32)(O32(0x3C) += 1) < 0x29) break;
            if (t == 2) func_800125D8();
            return func_800185F8(o);
        }
    }
    switch (t) {
    case 9:
        return func_8001F1A8((s16)(OS16(0x46) + 0x18), OS16(0x4A), 0, 1, 0,
                             D_800EFA04 + *(u16 *)(E(D_8006AF80) + 0x10) * 8, 1, 4, OS16(0x4E) - 1);
    case 10:
        return func_8001F1A8((s16)(OS16(0x46) + 0x18), OS16(0x4A), 0, 1, 0,
                             D_800EFA04 + *(u16 *)(E(*(u16 *)(E(D_8006AF80) + 0x8A)) + 0x10) * 8, 1, 4,
                             OS16(0x4E) - 1);
    case 11:
        return follow(o, D_800EFF4C[0]);
    case 12:
        return follow(o, D_800EFF4C[1]);
    case 13:
    case 14:
        return 0x8009AA38; /* endereço do alvo da jump table */
    case 15:
        if (O32(0x38) & 9) return 0x80090000; /* resto do %hi(D_8008F708) */
        v = D_8008F708 * 80 - 0x38;
        O16(0x46) = v;
        return v;
    case 16:
        return func_800BE190(o);
    }
    return 0x80090000; /* %hi(jtbl_80097B50) do delay slot */
}
