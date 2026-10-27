/* arg0: 0x80140001 */
/* arg1: 0x80150003 */
/* real-callee: func_80015B3C */
/* real-callee: func_800136C8 */
/* real-callee: func_80013C14 */
/* rand-u16: 0x80078B7C 1 0 */
/* rand-u16: 0x80078B7E 1 32786 */
/* rand-u16: 0x8012C554 1 0 */
/* rand-u16: 0x8012C556 1 0 */
/* rand-u16: 0x8012C578 1 4096 */
/* rand-u16: 0x8012C57A 1 32786 */
/* rand-u16: 0x8012C57C 1 0 */
/* rand-u16: 0x8012C57E 1 0 */
/* rand-u16: 0x80121008 1 0 */
/* rand-u16: 0x8012100A 1 0 */
/* rand-u16: 0x8012C558 16 0 */
/* rand-u16: 0x80121000 1 144 */
#include "common.h"
struct CopyWord { u32 value; } __attribute__((packed));
#define COPY(p) (((struct CopyWord *)(p))->value)
u8 *func_800DD428(void *a, void *b, u32 duration) {
    u8 *task=((u8 *(*)())0x80015B3C)((void *)0x80018600,(void *)0x800DDD34,1);
    COPY(task+0x28)=COPY(a);
    COPY(task+0x2C)=COPY(b);
    *(u16 *)(task+0x32)=(u16)duration;
    return task;
}
