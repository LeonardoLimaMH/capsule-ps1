#include "common.h"

#include "common.h"

typedef struct {
    u8 pad[0x14];
    s8 play;
    u8 pad2[0x98 - 0x15];
    s32 flags;
    u8 pad3[0xB0 - 0x9C];
} SeqStr;
extern SeqStr *D_801373F0[];

void _SsSndReplay(s16 sep, s16 seq) {
    SeqStr *new_var;
    (new_var = D_801373F0[sep] + seq)->play = 1;
    D_801373F0[sep][seq].flags &= ~8;
}
