#include "common.h"

extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

s32 func_800DD528(s32 a0) {
    u8 *p = PL(a0);
    u8 *pc;
    if ((s16)++P16(0x472) != PS16(0x474)) return 1;
    pc = *(u8 **)(p + 0x478);
    P16(0x472) = 1;
    *(u8 **)(p + 0x478) = pc + 1;
    return pc[1] != 0xFF;
}
