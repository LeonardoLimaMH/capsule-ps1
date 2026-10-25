#include "common.h"

extern u16 D_801333BE[];
extern s32 D_80133368, D_8013336C, D_80133370, D_80133444;
extern u8 D_80133378[];
extern s32 D_80133434, D_80133438, D_8013343C, D_80133364, D_801333F0, D_80133360;
extern s32 D_8013338C, D_80133388, D_801333C0;
extern void slpm__spu_init();
extern void slpm__spu_FsetRXX();

void slpm__SpuInit(s32 mode) {
    u16 *p;
    s32 i;

    slpm_ResetCallback();
    slpm__spu_init(mode);
    if (mode == 0) {
        p = D_801333BE;
        for (i = 0x17; i >= 0; i--) {
            *p-- = 0xC000;
        }
    }
    slpm_SpuStart();
    D_80133368 = 0;
    D_8013336C = 0;
    *(s32 *)D_80133378 = 0;
    *(s16 *)(D_80133378 + 4) = 0;
    *(s16 *)(D_80133378 + 6) = 0;
    *(s32 *)(D_80133378 + 8) = 0;
    *(s32 *)(D_80133378 + 0xC) = 0;
    D_80133370 = D_80133444;
    slpm__spu_FsetRXX(0xD1, D_80133444, 0);
    D_80133434 = 0;
    D_80133438 = 0;
    D_8013343C = 0;
    D_80133364 = 0;
    D_801333F0 = 0;
    D_80133360 = 0;
    D_8013338C = 0;
    D_80133388 = 0;
    D_801333C0 = 0;
}
