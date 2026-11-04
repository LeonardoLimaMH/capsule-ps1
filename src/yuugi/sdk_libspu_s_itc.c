#include "common.h"
#include "yuugi.h"

/* SpuIsTransferCompleted: C do SDK PsyQ importado de https://github.com/afsenovilla/Tombi-Decomp (MIT),
   arquivo src/SpuIsTransferCompleted.c; reduzido às declarações de que a função depende
   (tools/ext_import.py). */
extern s32 D_80071520;

extern s32 D_800715CC;

extern s32 D_80071528;

s32 SpuIsTransferCompleted(s32 arg0) {
    s32 in_transfer;
    if ((D_80071528 == 1) || (D_800715CC == 1)) {
        return 1;
    }
    in_transfer = func_8004FE6C(D_80071520);
    if (arg0 == 1) {
        if (in_transfer == 0) {
            do {
            } while (func_8004FE6C(D_80071520) == 0);
        }
        in_transfer = 1;
        D_800715CC = in_transfer;
        return in_transfer;
    }
    if (in_transfer == 1) {
        D_800715CC = in_transfer;
    }
    return in_transfer;
}
