/* stub-ret: mixed */
/* max-insns: 400000 */
/* arg0: 0x80150000 */
/* arg1: 0x80150100 */
/* rand-u32-strided: 0x8015000C 1 4 0,1,2,4 */
/* rand-u32-strided: 0x801500A0 2 4 0x80157000,0x80155000 */
/* rand-u16: 0x801501F2 1 0,1 */
/* rand-u32-strided: 0x80150100 1 4 0x80156000 */
/* rand-u16: 0x80157000 0x100 0,1,0x10,0x40,0xFFC0,0xFFF0,0x80,0xFF80 */
#include "common.h"
#include "gte_inline.h"

/* desenha as faces quadradas do modelo obj com os vértices na tabela de materiais
 * (registros de 0x2C bytes, vértices a partir de +0x8; primitivas de 0x18 bytes com os
 * pontos de 4 em 4): projeta (RTPT + RTPS), descarta a face de costas (NCLIP), tira
 * a profundidade (AVSZ4) e, dentro da faixa, calcula a cor (func_8002BD08) e encadeia a primitiva */
extern s32 func_8002BD08(void *, void *, s32);

void *func_8002AF9C(u8 *obj, u8 *ctx) {
    s32 count = *(s32 *)(obj + 0xC);
    u8 *mat = *(u8 **)(obj + 0xA0);
    u8 *slot = obj + *(u16 *)(ctx + 0xF2) * 4;
    u32 *prim = *(u32 **)(slot + 0xA4);
    s32 i, mac0, otz;
    u32 *ot;
    if (count <= 0) return slot; /* sobra do endereço em v0 */
    for (i = 0; i < count; i++, mat += 0x2C, prim = (u32 *)((u8 *)prim + 0x18)) {
        gte_ldv3(mat + 0x8, mat + 0x8 + 8, mat + 0x8 + 0x10);
        gte_rtpt();
        gte_nclip();
        GTE_MFC2(mac0, 24);
        if (mac0 <= 0) continue;
        gte_stsxy3((u8 *)prim + 8, (u8 *)prim + 8 + 4, (u8 *)prim + 8 + 2 * 4);
        gte_ldv0(mat + 0x8 + 0x18);
        gte_rtps();
        gte_stsxy((u8 *)prim + 8 + 3 * 4);
        gte_avsz4();
        GTE_MFC2(otz, 7);
        if ((u32)(otz - 7) >= 0x3F9) continue;
        func_8002BD08(prim, mat, 0);
        /* addPrim(ot + otz, prim) */
        ot = (u32 *)(*(u8 **)ctx + otz * 4 + 0x70);
        prim[0] = (prim[0] & 0xFF000000) | (*ot & 0xFFFFFF);
        *ot = (*ot & 0xFF000000) | ((u32)prim & 0xFFFFFF);
    }
    return 0;
}
