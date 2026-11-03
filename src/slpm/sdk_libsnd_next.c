#include "common.h"

#include "common.h"

/* _ss_score: tabela de ponteiros para as sequências de cada SEP (struct de 0xB0 bytes) */
typedef struct {
    s32 f0;
    s32 f4;
    u8 _p8[0xC];
    s8 f14;
    u8 _p15[0xB];
    s8 f20;
    s8 f21;
    u8 _p22[0x76];
    s32 f98;
    u8 _p9C[0x14];
} SsSeq;

extern SsSeq *D_801373F0[];

void _SsSndNextSep(s16 sep, s16 seq) {
    SsSeq *s = &D_801373F0[sep][seq];

    s->f20 = 1;
    s->f21 = 0;
    D_801373F0[sep][seq].f98 &= ~0x100;
    D_801373F0[sep][seq].f98 &= ~8;
    D_801373F0[sep][seq].f98 &= ~2;
    D_801373F0[sep][seq].f98 &= ~4;
    D_801373F0[sep][seq].f98 &= ~0x200;
    s->f14 = 1;
    s->f0 = s->f4;
    D_801373F0[sep][seq].f98 |= 1;
}
