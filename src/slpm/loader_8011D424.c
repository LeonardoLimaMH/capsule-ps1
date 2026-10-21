#include "common.h"

void SsSeqStop(s16 arg0) {
    _SsSndStop(arg0, 0);
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader_8011D424", SsSepStop);
