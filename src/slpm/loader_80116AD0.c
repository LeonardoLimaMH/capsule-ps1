#include "common.h"

#include "common.h"

/* CdReset: C do SDK PsyQ importado de https://github.com/ser-pounce/rood-reverse (CC0-1.0),
   arquivo src/SLUS_010.40/libcd/SYS.c; reduzido às declarações de que a função depende
   (tools/ext_import.py). */
void StSetStream(u_long mode,u_long start_frame,u_long end_frame,
      void (*func1)(),void (*func2)());

void StSetEmulate(u_long *addr,u_long mode,u_long start_frame,
       u_long end_frame,void (*func1)(),void (*func2)());

int CdReset(int mode);

int slpm_CD_init(void);

void slpm_CD_initintr(void);

int slpm_CD_initvol(void);

int CdReset(int mode)
{
    if (mode == 2) {
        slpm_CD_initintr();
        return 1;
    }
    if (slpm_CD_init() != 0) {
        return 0;
    }
    if (mode == 1) {
        if (slpm_CD_initvol() != 0) {
            return 0;
        }
    }
    return 1;
}
