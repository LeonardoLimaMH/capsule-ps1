#include "common.h"

extern u8 D_80100F38[];

/* tratador de instrução do script: lê o operando de 1 byte e avança o ponteiro em 2 */
u8 *func_800C8C44(s32 unused, s32 ctx) {
    u8 *obj = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;
    u8 *pc = *(u8 **)(obj + 0x2BC);
    u8 arg;

    *(u8 **)(obj + 0x2BC) = pc + 1;
    arg = pc[1];
    *(u8 **)(obj + 0x2BC) = pc + 2;
    *(s16 *)(obj + 0x372) = arg;
    return pc + 2;
}
