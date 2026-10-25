#include "common.h"

extern u8 D_801321DC[], D_80132218[];
extern u16 *D_80133268, *D_8013326C;
extern u32 *D_80133270;
extern u8 *D_80133264;
extern void func_8011B530(u8 *, s32);
extern s32 slpm_setjmp(u8 *);
extern void func_8011B100(void);
extern void func_8011B574(u8 *);
extern s32 slpm_startIntrVSync(void), slpm_startIntrDMA(void);
extern void slpm__96_remove(void);
extern void func_80112024(void);

u8 *func_8011B028(void) {
    if (*(u16 *)D_801321DC) return 0;
    *D_8013326C = 0;
    *D_80133268 = *D_8013326C;
    *D_80133270 = 0x33333333;
    func_8011B530(D_801321DC, 0x41A);
    if (slpm_setjmp(D_801321DC + 0x38)) func_8011B100();
    *(u8 **)D_80132218 = D_80132218 + 0xFDC;
    func_8011B574(D_80132218 - 4);
    *(u16 *)D_801321DC = 1;
    *(s32 *)(D_80133264 + 0x14) = slpm_startIntrVSync();
    *(s32 *)(D_80133264 + 4) = slpm_startIntrDMA();
    slpm__96_remove();
    func_80112024();
    return D_801321DC;
}
