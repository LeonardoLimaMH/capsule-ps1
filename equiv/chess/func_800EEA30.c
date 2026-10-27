#include "common.h"
#define W(p) (*(u32 *)(p))
#define H(p) (*(u16 *)(p))
/* arg0: 0x80120000 */
/* real-callee: func_80013920 */
/* rand-u16: 0x80120016 1 0,1,29,30,31,32766,32767,32768,65534,65535 */
s32 func_800EEA30(u8 *task) {
    s32 count, scale;
    H(task+0x16) = (u16)(H(task+0x16)+1);
    *(u8 *)0x8011974D = 0;
    count = (s16)H(task+0x16);
    if (count > 30) {
        ((void (*)(void *))0x80013920)(task);
        return 1;
    }
    H(task+0x2A) -= 4;
    task[0x30] = task[0x24];
    task[0x31] = task[0x25];
    task[0x32] = task[0x26];
    H(task+0x34) = count*40/30;
    scale = (30-count)*10/30;
    H(task+0x36) = scale;
    return scale;
}
