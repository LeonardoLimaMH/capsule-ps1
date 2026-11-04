#include "common.h"
#include "yuugi.h"

/* SpuQuit: C do SDK PsyQ importado de https://github.com/afsenovilla/Tombi-Decomp (MIT),
   arquivo src/SpuQuit.c; reduzido às declarações de que a função depende
   (tools/ext_import.py). */
void func_8004FEDC(void);

void func_8004FEEC(void);

extern s32 D_80071520;

extern s32 D_80071588;

extern void (* volatile D_800715D0)();

extern void (* volatile D_800715D4)();

void SpuQuit(void) {
    if (D_80071588 == 1) {
        D_80071588 = 0;
        func_8004FEDC();
        D_800715D0 = 0;
        D_800715D4 = 0;
        _SpuDataCallback(0);
        func_8004FE4C(D_80071520);
        func_8004FE8C(D_80071520);
        func_8004FEEC();
    }
}
