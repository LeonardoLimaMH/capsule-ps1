#include "common.h"
/* arg0: 0x80150000 */
/* arg1: small */
/* rand-u16: 0x8007891E 1 0,1,2,3,127,255 */

u32 *ClearOTag(u32 *ot, u32 count) {
    if (*(u8 *)0x8007891E >= 2)
        (*(s32 (**)())0x80078918)((void *)0x800112FC, ot, count);
    for (--count; count != 0; --count) {
        *((u8 *)ot + 3) = 0;
        *ot = (*ot & 0xFF000000) | ((u32)(ot + 1) & 0x00FFFFFF);
        ++ot;
    }
    *(u32 *)0x800789DC = 0x040789C8;
    *ot = 0x000789DC;
    return ot;
}
