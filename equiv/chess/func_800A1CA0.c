#include "common.h"
#define W(p) (*(u32 *)(p))
#define H(p) (*(u16 *)(p))
/* arg1: 0x80120000 */
/* arg2: small */
/* rand-ptr: 0x801010B0 256 */
/* rand-mem: 0x80120009 1 16 */
u32 func_800A1CA0(u32 unused, u8 *base, u32 party) {
    u32 board = W(0x801010B0 + base[9]*0x34);
    u32 offset = (party & 255)*0x2E8;
    s32 i;
    for (i=0; i<6; ++i, offset+=0x7C) {
        u8 *actor=base+offset;
        u32 x=actor[0x2D], y=actor[0x2E];
        actor[0x2D]=actor[0x2E]=actor[0x2F]=0;
        *(u8 *)(board+x*0x34+y*4+3)=0;
    }
    return 0;
}
