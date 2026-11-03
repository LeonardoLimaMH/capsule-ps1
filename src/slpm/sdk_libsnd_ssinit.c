#include "common.h"

#include "common.h"

/* _SsInit: C do SDK PsyQ importado de https://github.com/sozud/psy-q-decomp (MIT),
   arquivo src/snd/ssinit.c; reduzido às declarações de que a função depende
   (tools/ext_import.py). */
typedef void (*SndSsMarkCallbackProc)(short seq_no, short sep_no, short data);

extern SndSsMarkCallbackProc D_80137470[32][16];

extern s32 D_801373EC;

extern s32 D_801373E8;

extern s32 D_801373E4;

extern s32 D_801373E8;

extern s32 D_801373EC;

extern SndSsMarkCallbackProc D_80137470[32][16];

extern s32 D_801373E4;

extern short D_80133300[];

extern short D_80133310[];

void _SsInit(void) {
    u16* var_a2;
    int i, j;
    var_a2 = (u16*)0x1F801C00;
    for (i = 0; i < 24; i++) {
        for (j = 0; j < 8; j++) {
            *var_a2++ = D_80133300[j];
        }
    }
    var_a2 = (u16*)0x1F801D80;
    for (i = 0; i < 16; i++) {
        *var_a2++ = D_80133310[i];
    }
    _SsVmInit(24);
    for (j = 0; j < 32; j++) {
        for (i = 0; i < 16; i++) {
            D_80137470[j][i] = 0;
        }
    }
    D_801373EC = 0x3C;
    D_801373E8 = 0;
    D_801373E4 = 0;
}
