#include "common.h"
#define W(p) (*(u32 *)(p))
#define H(p) (*(u16 *)(p))
/* arg0: 0x80120000 */
/* arg1: small */
/* arg2: 0x80160000 */
/* rand-mem: 0x801205D9 1 1 */
/* rand-mem: 0x801205DE 16 4 */
/* rand-u16: 0x801010B0 1 0 */
/* rand-u16: 0x801010B2 1 0x8014 */
/* rand-u16: 0x80140000 338 0,1,64,65,128,0x40,0x80,0xC0,0x100,0x101 */
s32 func_800FFA00(u8 *base, s32 side, u8 *out) {
    u32 board=W(0x801010B0+base[0x5D9]*0x34);
    s32 row,col,count=0;
    for(row=0;row<13;++row) for(col=0;col<13;++col) {
        u32 cell=W(board+(row*13+col)*4);
        if (((cell>>22)&3)==base[0x5DE + side] && ((cell>>6)&255)==1 && (cell>>24)==0)
            out[count++]=(u8)(row*16+col);
    }
    return count;
}
