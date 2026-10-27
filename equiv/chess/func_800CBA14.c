#include "common.h"
#define W(p) (*(u32 *)(p))
#define H(p) (*(u16 *)(p))
/* arg0: 0x80120000 */
/* real-callee: func_800CBA04 */
/* real-callee: func_800185F8 */
/* rand-u16: 0x8012003C 1 0,1,2,255,65535 */
/* rand-u16: 0x8012003E 1 0,1,65535 */
/* rand-u16: 0x80120080 1 0,1,2,255,65535 */
/* rand-u16: 0x80120082 1 0,1,65535 */
/* rand-mem: 0x8008EE6B 1 4 */
u32 func_800CBA14(u8 *task) {
    u32 step = *(u8 *)0x8008EE6B;
    u32 count = W(task+0x3C) + (step >= 2 ? step : 1);
    u32 product = W(task+0x80) * count;
    W(task+0x3C) = count;
    H(0x80086114) = (u16)product;
    if (product > 65535) {
        *(u8 *)0x80086118 = 1;
        ((void (*)(void *))0x800CBA04)((void *)0x800859F8);
        ((void (*)(void *))0x800185F8)(task);
        return 1;
    }
    return 0;
}
