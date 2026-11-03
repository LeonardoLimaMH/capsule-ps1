#include "common.h"
#include "yuugi.h"

#include "common.h"

/* SpuSetTransferStartAddr: C do SDK PsyQ importado de https://github.com/ser-pounce/rood-reverse (CC0-1.0),
   arquivo src/SLUS_010.40/libspu/S_STSA.c; reduzido às declarações de que a função depende
   (tools/ext_import.py). */
extern unsigned long SpuSetTransferStartAddr (unsigned long addr);

u_int _spu_FsetRXXa(int reg, u_int addr);

extern volatile u_short D_800715B0;

extern int D_800715C0;

u_long SpuSetTransferStartAddr(u_long addr)
{
    if ((addr < 0x1010) || (addr > 0x7FFF8)) {
        return 0;
    }
    D_800715B0 = _spu_FsetRXXa(-1, addr);
    return D_800715B0 << D_800715C0;
}
