#include "common.h"

extern u8 D_80071D84[];
extern volatile u16 *D_80072E10;
extern volatile u16 *D_80072E14;
extern volatile u32 *D_80072E18;
extern u8 *D_80072E0C;
extern s32 setjmp();
extern s32 startIntrVSync();
extern s32 startIntrDMA();

u8 *func_80042BB0(void) {
    if (*(u16 *)D_80071D84 != 0) {
        return 0;
    }
    *D_80072E14 = 0;
    *D_80072E10 = *D_80072E14;
    *D_80072E18 = 0x33333333;
    func_800430B8(D_80071D84, 0x41A);
    if (setjmp(D_80071D84 + 0x38) != 0) {
        func_80042C88();
    }
    *(u8 **)(D_80071D84 + 0x3C) = D_80071D84 + 0x3C + 0xFDC;
    func_8004FECC(D_80071D84 + 0x38);
    *(u16 *)D_80071D84 = 1;
    *(s32 *)(D_80072E0C + 0x14) = startIntrVSync();
    *(s32 *)(D_80072E0C + 4) = startIntrDMA();
    _96_remove(D_80072E0C);
    func_8004FEEC();
    return D_80071D84;
}
