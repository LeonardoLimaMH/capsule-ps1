#include "common.h"
#include "yuugi.h"

/* printf: C do SDK PsyQ importado de https://github.com/afsenovilla/Tombi-Decomp (MIT),
   arquivo src/printf.c; reduzido às declarações de que a função depende
   (tools/ext_import.py). */
int prnt(void *unused, u_char *fmt0, char *argp);

int printf(char *fmt, long arg1, long arg2, long arg3) {
    char **fmtp = &fmt;
    long *args = &arg1;
    args[1] = arg2;
    args[2] = arg3;
    return prnt((void *)1, *fmtp, (char *)args);
}
