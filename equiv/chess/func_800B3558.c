#include "common.h"
#define W(p) (*(u32 *)(p))
#define H(p) (*(u16 *)(p))
/* arg0: 0x80120000 */
/* arg1: small */
/* arg2: small */
/* rand-ptr: 0x801010B0 256 */
/* rand-mem: 0x80120009 1 16 */
u32 func_800B3558(u8 *base, u32 x, u32 y) {
    u32 board=W(0x801010B0+base[9]*0x34);
    u32 height;
    W(base+0x77C)=0-((x*2-11)*50);
    W(base+0x784)=0-((y*2-11)*50);
    height=((W(board+x*0x34+y*4)>>19)&7)*50;
    W(base+0x780)=height;
    return height;
}
