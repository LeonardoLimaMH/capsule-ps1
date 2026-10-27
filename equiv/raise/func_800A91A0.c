/* max-insns: 20000 */
/* rand-u16: 0x8009162A 1 0,1,2 */
/* rand-ptr: 0x80091790 2 */
/* rand-u16: 0x800917D2 1 0,1,2 */
/* rand-ptr: 0x80091938 2 */
/* rand-u16: 0x8009197A 1 0,1,2 */
/* rand-ptr: 0x80091AE0 2 */
/* rand-u16: 0x80091B22 1 0,1,2 */
/* rand-ptr: 0x80091C88 2 */
/* rand-u16: 0x80091CCA 1 0,1,2 */
/* rand-ptr: 0x80091E30 2 */
/* rand-u16: 0x80091E72 1 0,1,2 */
/* rand-ptr: 0x80091FD8 2 */
/* rand-u16: 0x8009201A 1 0,1,2 */
/* rand-ptr: 0x80092180 2 */
/* rand-u16: 0x800921C2 1 0,1,2 */
/* rand-ptr: 0x80092328 2 */
/* rand-u16: 0x8009236A 1 0,1,2 */
/* rand-ptr: 0x800924D0 2 */
/* rand-u16: 0x80092512 1 0,1,2 */
/* rand-ptr: 0x80092678 2 */
/* rand-u16: 0x800926BA 1 0,1,2 */
/* rand-ptr: 0x80092820 2 */
/* rand-u16: 0x80092862 1 0,1,2 */
/* rand-ptr: 0x800929C8 2 */
/* rand-u16: 0x80092A0A 1 0,1,2 */
/* rand-ptr: 0x80092B70 2 */
/* rand-u16: 0x80092BB2 1 0,1,2 */
/* rand-ptr: 0x80092D18 2 */
/* rand-u16: 0x80092D5A 1 0,1,2 */
/* rand-ptr: 0x80092EC0 2 */
/* rand-u16: 0x80092F02 1 0,1,2 */
/* rand-ptr: 0x80093068 2 */
/* rand-u16: 0x800930AA 1 0,1,2 */
/* rand-ptr: 0x80093210 2 */
/* rand-u16: 0x80093252 1 0,1,2 */
/* rand-ptr: 0x800933B8 2 */
/* rand-u16: 0x800933FA 1 0,1,2 */
/* rand-ptr: 0x80093560 2 */
/* rand-u16: 0x800935A2 1 0,1,2 */
/* rand-ptr: 0x80093708 2 */
/* rand-u16: 0x8009374A 1 0,1,2 */
/* rand-ptr: 0x800938B0 2 */
/* rand-u16: 0x800938F2 1 0,1,2 */
/* rand-ptr: 0x80093A58 2 */
/* rand-u16: 0x80093A9A 1 0,1,2 */
/* rand-ptr: 0x80093C00 2 */
/* rand-u16: 0x80093C42 1 0,1,2 */
/* rand-ptr: 0x80093DA8 2 */
/* rand-u16: 0x80093DEA 1 0,1,2 */
/* rand-ptr: 0x80093F50 2 */
/* rand-u16: 0x80093F92 1 0,1,2 */
/* rand-ptr: 0x800940F8 2 */
/* rand-u16: 0x8009413A 1 0,1,2 */
/* rand-ptr: 0x800942A0 2 */
/* rand-u16: 0x800942E2 1 0,1,2 */
/* rand-ptr: 0x80094448 2 */
/* rand-u16: 0x8009448A 1 0,1,2 */
/* rand-ptr: 0x800945F0 2 */
/* rand-u16: 0x80094632 1 0,1,2 */
/* rand-ptr: 0x80094798 2 */
/* rand-u16: 0x800947DA 1 0,1,2 */
/* rand-ptr: 0x80094940 2 */
/* rand-u16: 0x80094982 1 0,1,2 */
/* rand-ptr: 0x80094AE8 2 */
/* stub-ret: mixed */
/* rand-u16: 0x8006AF80 1 0,1,2,3 */
#include "common.h"

extern u8 D_80091618[], D_800900C0[];
extern u16 D_8006AF80;
extern s32 D_80069BB4;
extern s16 D_800ED88C;
extern s32 func_800B1260(s32), func_800B7264(s32);
extern void func_8001E310(void), func_800C083C(void), func_800CCFA4(s32, s32, s32), func_800A1F44(s32, s32, s32);
extern void func_80023C00(s32, s32, s32);

#define E(i) (D_80091618 + (i) * 0x1A8)
#define W(o, x) (*(u32 *)((o) + (x)))

static void flip(u8 *o) {
    u32 w = W(o, 0x34);
    W(o, 0x38) |= 1;
    W(o, 0x34) = (w & ~0x100) | (((1 - ((w >> 8) & 1)) & 1) << 8);
}

s32 func_800A91A0(void) {
    s32 i, j, fp;
    func_8001E310();
    func_800C083C();
    fp = *(u16 *)(E(D_8006AF80) + 0x8A) != 0xFFFF;
    for (i = 1; i >= 0; i--) {
        u16 k = func_800B1260(i);
        u16 c;
        if (k == 0xFFFF) continue;
        c = *(u16 *)(E(k) + 0x10);
        for (j = 0; j < 3; j++) {
            if (i == 1) *(s32 *)(D_800900C0 + j * 0xBC) = i;
            else *(s32 *)(D_800900C0 + 0x234 + j * 0xBC) = 1;
        }
        if (c != 0xFFFF && *(u16 *)(E(k) + 0x12) != 0)
            for (j = 0; j < *(u16 *)(E(k) + 0x12); j++) func_800CCFA4(i, j, 0);
        if (fp == 1) {
            if (i != 1) {
                func_800A1F44(i, 1, 0);
                continue;
            }
        } else if (c == 0xFFFF) {
            continue;
        }
        flip(*(u8 **)(E(k) + 0x178));
        flip(*(u8 **)(E(k) + 0x17C));
    }
    func_80023C00(2, D_80069BB4, -0x800);
    D_800ED88C = 0;
    return func_800B7264(2);
}
