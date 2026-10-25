#include "common.h"

extern u32 func_8004E42C[];
extern u32 func_8004E4AC[];

/* copia o trecho de código func_8004E42C+0x10 .. func_8004E4AC para 0xDF80 */
void _copy_memcard_patch(void) {
    u32 *dst = (u32 *)0xDF80;
    u32 *src = (u32 *)((u8 *)func_8004E42C + 0x10);

    do {
        *dst++ = *src++;
    } while (src != func_8004E4AC);
}
