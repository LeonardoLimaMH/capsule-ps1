#include "common.h"
/* arg0: 0x80150000 */
/* arg1: small */
/* rand-u16: 0x80131B36 1 0,1,2,3,127,255 */

u32 *slpm_ClearOTag(u32 *ot, u32 count) {
    if (*(u8 *)0x80131B36 >= 2)
        (*(s32 (**)())0x80131B30)((void *)0x80110504, ot, count);
    for (--count; count != 0; --count) {
        *((u8 *)ot + 3) = 0;
        *ot = (*ot & 0xFF000000) | ((u32)(ot + 1) & 0x00FFFFFF);
        ++ot;
    }
    *(u32 *)0x80131BF4 = 0x04131BE0;
    *ot = 0x00131BF4;
    return ot;
}
