#include "common.h"

/* rand-u16: 0x8006AF80 1 0,1,2,3 */
/* rand-ptr: 0x8009021C 1 */
typedef struct { u8 b[44]; } S44;
extern u8 D_80100F38[], D_80091618[], D_800EF364[];
extern u16 D_8006AF80, D_80100D48, D_80100D4E, D_80100D4C;
extern u8 *D_8009021C;
extern u8 *D_80100D40;
extern S44 D_80100D50;

s32 func_800BE290(void) {
    u16 k = D_8006AF80;
    u8 *p = D_80100F38 + k * 0x79C;
    u8 *s;
    D_80100D48 = D_800EF364[*(u16 *)(D_80091618 + k * 0x1A8 + 0x10) * 64 + *(s16 *)(p + 0x332) * 8 + *(s16 *)(p + 0x334) - 9];
    s = D_8009021C + D_80100D48 * 44;
    D_80100D40 = s;
    D_80100D50 = *(S44 *)s;
    D_80100D4E = 0x40;
    D_80100D4C = 0;
    return 0;
}
