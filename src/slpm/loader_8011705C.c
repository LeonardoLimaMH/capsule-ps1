#include "common.h"

void CdDataCallback(s32 arg0) {
    slpm_DMACallback(3, arg0);
}

void CdDataSync(void) {
    slpm_CD_datasync();
}

#include "common.h"

/* CdIntToPos: C do SDK PsyQ importado de https://github.com/ser-pounce/rood-reverse (CC0-1.0),
   arquivo src/SLUS_010.40/libcd/C_011.c; reduzido às declarações de que a função depende
   (tools/ext_import.py). */
typedef struct {
 u_char minute;
 u_char second;
 u_char sector;
 u_char track;
} CdlLOC;

CdlLOC *CdIntToPos(int i, CdlLOC *p) ;

static inline int ENCODE_BCD(int n) { return ((n / 10) << 4) + (n % 10); }

CdlLOC* CdIntToPos(int i, CdlLOC* p)
{
    i += 150;
    p->sector = ENCODE_BCD(i % 75);
    p->second = ENCODE_BCD(i / 75 % 60);
    p->minute = ENCODE_BCD(i / 75 / 60);
    return p;
}

s32 CdPosToInt(void *arg0) {
    u8 temp_a1;
    u8 temp_a2;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0);
    temp_a2 = M2C_FIELD(arg0, u8 *, 1);
    temp_a1 = M2C_FIELD(arg0, u8 *, 2);
    return (((((((temp_v1 >> 4) * 0xA) + (temp_v1 & 0xF)) * 0x3C) + (((temp_a2 >> 4) * 0xA) + (temp_a2 & 0xF))) * 0x4B) + (((temp_a1 >> 4) * 0xA) + (temp_a1 & 0xF))) - 0x96;
}
