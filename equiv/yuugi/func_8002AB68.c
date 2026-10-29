/* stub-ret: mixed */
/* max-insns: 400000 */
/* arg0: 0x80150000 */
/* arg1: 0x80150100 */
/* rand-u32-strided: 0x8015000C 1 4 0,1,2,4 */
/* rand-u32-strided: 0x801500A0 2 4 0x80157000,0x80155000 */
/* rand-u16: 0x801501F2 1 0,1 */
/* rand-u32-strided: 0x80150100 1 4 0x80156000 */
/* rand-u16: 0x80157000 0x100 0,1,0x10,0x40,0xFFC0,0xFFF0,0x80,0xFF80 */
/* rand-u16: 0x8008EE44 1 0,0x23,0x26,0x27 */
#include "common.h"
#include "gte_inline.h"

/* desenha as faces quadradas do modelo obj com os vértices na tabela de materiais
 * (registros de 0x50 bytes, vértices a partir de +0x20; primitivas de 0x24 bytes com os
 * pontos de 8 em 8): projeta (RTPT + RTPS), descarta a face de costas (NCLIP), tira
 * a profundidade (AVSZ4), avisa func_8002453C e, se a face estiver marcada
 * (func_800294AC/func_800296C0), usa a profundidade forçada para o fundo da tabela (0x3FD);
 * dentro da faixa calcula a cor (func_8002C000) e encadeia a primitiva */

extern s32 func_8002453C(void *, void *, s32, s32, s32), func_800294AC(s32, s32), func_800296C0(s32, s32);
extern s32 func_8002C000(void *, void *, s32);

void *func_8002AB68(u8 *obj, u8 *ctx, s32 marks) {
    s32 count = *(s32 *)(obj + 0xC);
    u8 *mat = *(u8 **)(obj + 0xA0);
    u8 *slot = obj + *(u16 *)(ctx + 0xF2) * 4;
    u32 *prim = *(u32 **)(slot + 0xA4);
    s32 i, mac0, otz;
    u32 *ot;
    __asm__("" :: "r"(&marks)); /* o original guarda a2 no slot de argumento */
    if (count <= 0) return slot; /* sobra do endereço em v0 */
    for (i = 0; i < count; i++, mat += 0x50, prim = (u32 *)((u8 *)prim + 0x24)) {
        gte_ldv3(mat + 0x20, mat + 0x20 + 8, mat + 0x20 + 0x10);
        gte_rtpt();
        gte_nclip();
        GTE_MFC2(mac0, 24);
        if (mac0 <= 0) continue;
        gte_stsxy3((u8 *)prim + 8, (u8 *)prim + 8 + 8, (u8 *)prim + 8 + 2 * 8);
        gte_ldv0(mat + 0x20 + 0x18);
        gte_rtps();
        gte_stsxy((u8 *)prim + 8 + 3 * 8);
        gte_avsz4();
        GTE_MFC2(otz, 7);
        func_8002453C(obj, prim, i, 2, otz);
        if (func_800294AC(marks, i) || func_800296C0(marks, i)) otz = 0x3FD;
        if ((u32)(otz - 7) >= 0x3F9) continue;
        func_8002C000(prim, mat, 0);
        /* addPrim(ot + otz, prim) */
        ot = (u32 *)(*(u8 **)ctx + otz * 4 + 0x70);
        prim[0] = (prim[0] & 0xFF000000) | (*ot & 0xFFFFFF);
        *ot = (*ot & 0xFF000000) | ((u32)prim & 0xFFFFFF);
    }
    return 0;
}
