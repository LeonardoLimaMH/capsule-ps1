#include "common.h"
#include "yuugi.h"

#include "common.h"

/* _SpuIsInAllocateArea: C do SDK PsyQ importado de https://github.com/ser-pounce/rood-reverse (CC0-1.0),
   arquivo src/SLUS_010.40/libspu/S_M_UTIL.c; reduzido às declarações de que a função depende
   (tools/ext_import.py). */
typedef struct {
    u_long addr;
    u_long size;
} SpuMallocRec;

extern SpuMallocRec* D_80071600;

inline int _SpuIsInAllocateArea(u_long addr)
{
    SpuMallocRec* list = D_80071600;
    int i;
    if (list == ((void*)0)) {
        return 0;
    }
    for (i = 0;; ++i) {
        u_long start;
        if (list[i].addr & 0x80000000) {
            continue;
        }
        if (list[i].addr & 0x40000000) {
            break;
        }
        start = list[i].addr & 0x0FFFFFFF;
        if (start >= addr) {
            return 1;
        }
        if (start + list[i].size > addr) {
            return 1;
        }
    }
    return 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libspu_s_m_util", _SpuIsInAllocateArea_);
