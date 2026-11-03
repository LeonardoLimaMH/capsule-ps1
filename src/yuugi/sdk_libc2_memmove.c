#include "common.h"
#include "yuugi.h"

#include "common.h"

/* memmove: C do SDK PsyQ importado de https://github.com/sozud/psy-q-decomp (MIT),
   arquivo src/c/memmove.c; reduzido às declarações de que a função depende
   (tools/ext_import.py). */
void* memmove(u_char* dest, u_char* src, int count) {
    if (dest >= src) {
        while (count-- > 0) {
            dest[count] = src[count];
        }
    } else {
        while (count-- > 0) {
            *dest++ = *src++;
        }
    }
    return dest;
}
