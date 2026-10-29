/* stub-ret: mixed */
/* max-insns: 400000 */
/* arg0: 0x80150000 */
/* arg1: 0x80150100 */
/* rand-u32-strided: 0x8015000C 1 4 0,1,2,4 */
/* rand-u32-strided: 0x801500A0 2 4 0x80157000,0x80155000 */
/* rand-u32-strided: 0x801500B4 1 4 0x80152000 */
/* rand-u16: 0x801501F2 1 0,1 */
/* rand-u32-strided: 0x80150100 1 4 0x80156000 */
/* rand-u16: 0x80152000 64 0,1,0x10,0x40,0xFFC0,0xFFF0,0x80,0xFF80 */
/* rand-u16: 0x80078C28 1 0,1 */
/* rand-u16: 0x80078C2C 1 0,13,14 */
#include "common.h"
#include "gte_inline.h"

/* desenha as faces quadradas do modelo obj (primitivas de 0x24 bytes, pontos de 8 em
 * 8 bytes a partir de +8): para cada face anima os vértices (callback), transforma três
 * vértices (RTPT), descarta a face de costas (NCLIP), projeta o quarto (RTPS), tira a
 * profundidade média (AVSZ4) e, dentro da faixa da tabela de ordenação, calcula a cor
 * (func_8002C000, materiais de 0x50 bytes) e encadeia a primitiva */
extern s16 D_80078C28, D_80078C2C;
extern s32 func_800D8AF8(void *, s32), func_80023ECC(void *, s32), func_8002C000(void *, void *, s32);

void *func_8002A090(u8 *obj, u8 *ctx) {
    s32 count = *(s32 *)(obj + 0xC);
    u8 *mat = *(u8 **)(obj + 0xA0);
    u8 *slot = obj + *(u16 *)(ctx + 0xF2) * 4;
    u32 *prim = *(u32 **)(slot + 0xA4);
    s32 i, mac0, otz;
    u8 *v;
    u32 *ot;
    if (count <= 0) return slot; /* sobra do endereço em v0 */
    for (i = 0; i < count; i++, mat += 0x50, prim = (u32 *)((u8 *)prim + 0x24)) {
        if (D_80078C28 != 0 && D_80078C2C < 0xE) func_800D8AF8(obj, i);
        else func_80023ECC(obj, i);
        v = *(u8 **)(obj + 0xB4) + i * 32;
        gte_ldv3(v, v + 8, v + 0x10);
        gte_rtpt();
        gte_nclip();
        GTE_MFC2(mac0, 24);
        if (mac0 <= 0) continue;
        gte_stsxy3((u8 *)prim + 8, (u8 *)prim + 8 + 8, (u8 *)prim + 8 + 2 * 8);
        gte_ldv0(*(u8 **)(obj + 0xB4) + i * 32 + 0x18);
        gte_rtps();
        gte_stsxy((u8 *)prim + 8 + 3 * 8);
        gte_avsz4();
        GTE_MFC2(otz, 7);
        if ((u32)(otz - 7) >= 0x3F9) continue;
        func_8002C000(prim, mat, 0);
        /* addPrim(ot + otz, prim) */
        ot = (u32 *)(*(u8 **)ctx + otz * 4 + 0x70);
        prim[0] = (prim[0] & 0xFF000000) | (*ot & 0xFFFFFF);
        *ot = (*ot & 0xFF000000) | ((u32)prim & 0xFFFFFF);
    }
    return 0;
}
