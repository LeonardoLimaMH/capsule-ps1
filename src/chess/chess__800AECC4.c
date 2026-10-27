#include "common.h"
#include "ghidra.h"

extern u8 D_8008ED68[];
void func_800AECC4(s32 a,s32 i) {
    u8 *p = D_8008ED68;
     if (a) p=D_8008ED68;
     else p=D_8008ED68;
     *(s32 *)(p+i*16+0x88)=0x20;

}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AECC4", func_800AECE0);
