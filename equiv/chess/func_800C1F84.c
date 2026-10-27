#include "common.h"
#define W(p) (*(u32 *)(p))
#define H(p) (*(u16 *)(p))
/* arg1: 0x80120000 */
/* arg2: small */
/* arg3: small */
/* rand-mem: 0x80120630 169 4 */
/* rand-u16: 0x801FFF10 1 0,1,6,12,13 */
/* rand-u16: 0x801FFF12 1 0 */
/* rand-u16: 0x801FFF14 1 0,1,2,3,4,5,6,7 */
s32 func_800C1F84(u32 unused, u8 *base, u32 slot, s32 x, s32 y, u8 direction) {
    s8 *step=(s8 *)(0x80100FB0+direction*2);
    u32 cell;
    for (;;) {
        x=(s32)((u32)x+step[0]);
        y=(s32)((u32)y+step[1]);
        if (x>=13 || y>=13) return 0;
        cell=*(u8 *)((u32)base+(u32)x*13+(u32)y+0x630);
        if (cell==0) return 0;
        if (cell==2) {
            base[slot*2+0x601]=(u8)x;
            base[slot*2+0x602]=(u8)y;
            return 1;
        }
    }
}
