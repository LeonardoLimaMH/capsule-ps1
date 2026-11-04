#include "common.h"
#include "yuugi.h"

/* rcos: C do SDK PsyQ importado de https://github.com/afsenovilla/Tombi-Decomp (MIT),
   arquivo src/rcos.c; reduzido às declarações de que a função depende
   (tools/ext_import.py). */
extern s16 rsin_tbl[];

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgte_geo_01", rcos);
