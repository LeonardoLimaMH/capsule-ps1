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
/* rand-mem: 0x8008F702 1 2 */
/* rand-mem: 0x8008F6D0 1 2 */
/* rand-u16: 0x80078C58 1 0,0x27,0x28,0x3B,0x3C,0x63,0x64,0x76,0x77,0x78,0xFFFF */
#include "common.h"
#include "gte_inline.h"

/* desenha as faces quadradas de um modelo de efeito (vértices na tabela de materiais,
 * registros de 0x2C bytes; primitivas de 0x28 bytes): projeta (RTPT + RTPS), descarta a face
 * de costas (NCLIP), tira a profundidade (AVSZ4) e avisa func_8002453C; nos estados
 * 0x23..0x26 do jogo a face marcada (func_800294AC) vai para o fundo da tabela, nos outros a
 * profundidade recua 0x40. A paleta (GetClut) pisca conforme o contador D_80078C58, que
 * avança em ciclo de 0x78 quadros quando o jogo não está pausado (D_8008F702) */
extern u8 D_8008ED68[], D_8008F702;
extern s16 D_80078C58;
extern s32 func_8002453C(void *, void *, s32, s32, s32), func_800294AC(s32, s32);
extern s32 func_8002BD94(void *, void *, s32), GetClut(s32, s32);

s32 func_8002A490(u8 *obj, u8 *ctx, s32 marks) {
    s32 count = *(s32 *)(obj + 0xC);
    u8 *mat = *(u8 **)(obj + 0xA0);
    u32 *prim = *(u32 **)(obj + 0xA4 + *(u16 *)(ctx + 0xF2) * 4);
    s32 i, mac0, otz, c, n;
    u32 *ot;
    __asm__("" :: "r"(&marks)); /* o original guarda a2 no slot de argumento */
    for (i = 0; i < count; i++, mat += 0x2C, prim = (u32 *)((u8 *)prim + 0x28)) {
        gte_ldv3(mat + 8, mat + 0x10, mat + 0x18);
        gte_rtpt();
        gte_nclip();
        GTE_MFC2(mac0, 24);
        if (mac0 <= 0) continue;
        gte_stsxy3((u8 *)prim + 8, (u8 *)prim + 0x10, (u8 *)prim + 0x18);
        gte_ldv0(mat + 0x20);
        gte_rtps();
        gte_stsxy((u8 *)prim + 0x20);
        gte_avsz4();
        GTE_MFC2(otz, 7);
        func_8002453C(obj, prim, i, 1, otz);
        if ((u16)(*(u16 *)(D_8008ED68 + 0xDC) - 0x23) < 4) {
            if (func_800294AC(marks, i)) otz = 0x3FD;
        } else {
            otz += 0x40;
        }
        if ((u32)(otz - 7) >= 0x3F9) continue;
        if (D_8008ED68[0x99A] != 1) {
            n = D_80078C58;
            if (n < 0x28) c = 0;
            else if (n < 0x3C) c = 1;
            else if (n < 0x64) c = 2;
            else c = n < 0x78;
            *(u16 *)((u8 *)prim + 0xE) = GetClut(0x100, c + 0x1E7);
        }
        func_8002BD94(prim, mat, 0);
        /* addPrim(ot + otz, prim) */
        ot = (u32 *)(*(u8 **)ctx + otz * 4 + 0x70);
        prim[0] = (prim[0] & 0xFF000000) | (*ot & 0xFFFFFF);
        *ot = (*ot & 0xFF000000) | ((u32)prim & 0xFFFFFF);
    }
    if (D_8008F702 == 1) return 1;
    n = D_80078C58 == 0x77 ? 0 : (u16)D_80078C58 + 1; /* soma antes de truncar, como o original */
    D_80078C58 = n;
    return n;
}
