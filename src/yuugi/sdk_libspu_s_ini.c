#include "common.h"
#include "yuugi.h"

extern u16 D_80071582[];
extern s32 D_8007152C, D_80071530, D_80071534, D_80071A08;
extern u8 D_8007153C[];
extern s32 D_800715F8, D_800715FC, D_80071600, D_80071528, D_800715B4, D_80071524;
extern s32 D_80071550, D_8007154C, D_80071584;
extern void _spu_init();
extern void _spu_FsetRXX();
void _SpuInit(s32 mode) {
    u16 *p;
    s32 i;

    ResetCallback();
    _spu_init(mode);
    if (mode == 0) {
        p = D_80071582;
        for (i = 0x17; i >= 0; i--) {
            *p-- = 0xC000;
        }
    }
    SpuStart();
    D_8007152C = 0;
    D_80071530 = 0;
    *(s32 *)D_8007153C = 0;
    *(s16 *)(D_8007153C + 4) = 0;
    *(s16 *)(D_8007153C + 6) = 0;
    *(s32 *)(D_8007153C + 8) = 0;
    *(s32 *)(D_8007153C + 0xC) = 0;
    D_80071534 = D_80071A08;
    _spu_FsetRXX(0xD1, D_80071A08, 0);
    D_800715F8 = 0;
    D_800715FC = 0;
    D_80071600 = 0;
    D_80071528 = 0;
    D_800715B4 = 0;
    D_80071524 = 0;
    D_80071550 = 0;
    D_8007154C = 0;
    D_80071584 = 0;
}
