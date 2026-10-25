#include "common.h"

/* stub-ret: mixed */
/* max-insns: 5000 */
extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s32 D_8006AF84;
extern u8 D_8006AFCC[];
extern s32 func_800B46EC(s32);

s32 func_800C69B0(s32 a0, s32 a1) {
    s32 t = D_8006AF84;
    u8 *p = PL(a1);
    u8 *pc;
    t -= *(s32 *)(D_8006AFCC + PS16(0x2BA) * 4 + 0x38);
    if (!(t < func_800B46EC(PS16(0x36A)))) {
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
    }
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
