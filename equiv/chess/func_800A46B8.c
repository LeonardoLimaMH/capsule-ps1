#include "common.h"
#define W(p) (*(u32 *)(p))
#define H(p) (*(u16 *)(p))
/* arg0: 0x80120000 */
/* arg1: small */
/* arg2: small */
/* rand-ptr: 0x801010B0 256 */
/* arg3: 0x80160000 */
/* rand-mem: 0x801205D9 1 16 */
s32 func_800A46B8(u8 *base, u32 x, u32 y, s16 *out) {
    u32 board=W(0x801010B0+base[0x5D9]*0x34);
    s32 height;
    out[0]=(s16)(x*100-550);
    out[2]=(s16)(y*100-550);
    height=-((s32)((W(board+x*0x34+y*4)>>19)&7)*50);
    out[1]=height;
    return height;
}
