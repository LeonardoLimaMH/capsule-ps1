#include "common.h"

/* slpm_SpuQuit: C do SDK PsyQ importado de https://github.com/afsenovilla/Tombi-Decomp (MIT),
   arquivo src/SpuQuit.c; reduzido às declarações de que a função depende
   (tools/ext_import.py). */
void func_80112014(void);

void func_80112024(void);

extern s32 D_8013335C;

extern s32 D_801333C4;

extern void (* volatile D_8013340C)();

extern void (* volatile D_80133410)();

void slpm_SpuQuit(void) {
    if (D_801333C4 == 1) {
        D_801333C4 = 0;
        func_80112014();
        D_8013340C = 0;
        D_80133410 = 0;
        slpm__SpuDataCallback(0);
        func_8011F5F4(D_8013335C);
        func_8011F604(D_8013335C);
        func_80112024();
    }
}
