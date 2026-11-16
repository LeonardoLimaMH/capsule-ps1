#include "ghidra.h"
#include "matching.h"
#include "common.h"



void func_800A39AC(int param_1)
{
    extern struct { u8 pad0[9]; u8 unk_09; u8 padA[0x2A]; } D_801010B0[];
    extern void func_800A3C24(void *);
    extern int func_800CBBB4();
    int iVar1;
    int iVar2;
    register int iVar3 asm("s2");
    unsigned int uVar4;
    int uVar5;

    iVar3 = uVar5 = 0;
    uVar4 = D_801010B0[*(u8 *)(param_1 + 0x5D9)].unk_09;
    do {
        iVar2 = 0;
        if (uVar4 != 0) {
            do {
                iVar1 = func_80015B3C(func_800A3C24, func_800CBBB4, 2);
                func_8001602C(iVar1);
                *(u8 *)(iVar1 + 0x58) = uVar5;
                uVar5 = 1;
                *(int *)(iVar1 + 0x5C) = iVar3;
                *(unsigned int *)(iVar1 + 0x50) |= 1;
                iVar1 += 0x18;
                func_800A4A10(param_1, iVar3, iVar2, uVar4, iVar1);
                if (iVar3 == 0) {
                    *(u8 *)(iVar1 + 0x20) = 0x20;
                    *(u8 *)(iVar1 + 0x21) = 0x20;
                    *(u8 *)(iVar1 + 0x22) = 0xF0;
                } else {
                    *(u8 *)(iVar1 + 0x20) = 0xF0;
                    *(u8 *)(iVar1 + 0x21) = 0x20;
                    *(u8 *)(iVar1 + 0x22) = 0x20;
                }
                iVar2++;
            } while (iVar2 < (int)uVar4);
        }
        iVar3++;
    } while (iVar3 < 2);
}






