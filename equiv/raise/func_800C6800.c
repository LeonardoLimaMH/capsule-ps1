/* rand-ptr: 0x801011F4 1 */
/* rand-ptr: 0x80101990 1 */
/* rand-ptr: 0x8010212C 1 */
/* rand-ptr: 0x801028C8 1 */
#include "common.h"

/* stub-ret: mixed */
/* max-insns: 5000 */
extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern u8 D_80091618[];
extern s32 D_8006AF84;
extern s32 func_800B46EC(s32);

s32 func_800C6800(s32 a0, s32 a1) {
    s32 t = D_8006AF84;
    s32 k = func_800B1260(a1);
    u8 *p = D_80100F38 + (u16)k * 0x79C;
    u8 *e = D_80091618 + (u16)k * 0x1A8;
    u8 *pc;
    s32 d;
    if (*(u16 *)(e + 0x62) == 1) d = t - *(s32 *)(e + 0x6C);
    else if (*(u16 *)(e + 0x66) == 1) d = t - *(s32 *)(e + 0x74);
    else goto back;
    if (d < func_800B46EC(PS16(0x36A))) goto back;
    pc = *(u8 **)(p + 0x2BC);
    if (*pc != 0x21) {
        u8 v;
        do {
            u8 *n = pc + 1;
            *(u8 **)(p + 0x2BC) = n;
            v = pc[1];
            pc = n;
        } while (v != 0x21);
    }
    return P32(0x2BC);
back:
    pc = *(u8 **)(p + 0x2BC);
    if (*pc != 0x20) {
        u8 v;
        do {
            u8 *n = pc - 1;
            *(u8 **)(p + 0x2BC) = n;
            v = pc[-1];
            pc = n;
        } while (v != 0x20);
    }
    P32(0x2BC) += 1;
    return P32(0x2BC);
}
