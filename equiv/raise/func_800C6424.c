/* stub-ret: mixed */
/* max-insns: 5000 */
/* rand-ptr: 0x801011F4 1 */
/* rand-ptr: 0x80101990 1 */
/* rand-ptr: 0x8010212C 1 */
/* rand-ptr: 0x801028C8 1 */

#include "common.h"
extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

s32 func_800C6424(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    u8 *pc;
    s32 old;
    s16 j;
    P32(0x2BC) += 1;
    *(u16 *)(p + 0x2CE + PS16(0x2CC) * 2) = 1;
    *(s32 *)(p + 0x2DC + PS16(0x2CC) * 4) = P32(0x2BC);
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
    *(s32 *)(p + 0x2F4 + PS16(0x2CC) * 4) = P32(0x2BC);
    old = *(s32 *)(p + 0x2DC + PS16(0x2CC) * 4);
    j = P16(0x2CC) += 1;
    P32(0x2BC) = old;
    *(s32 *)(p + 0x2DC + j * 4) = *(s32 *)(p + 0x2D8 + j * 4);
    return P32(0x2BC);
}
