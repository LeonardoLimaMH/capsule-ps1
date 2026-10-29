/* max-insns: 400000 */
/* arg0: 0x80150000 */
/* arg1: 0x80150100 */
/* rand-u32-strided: 0x8015000C 1 4 0,1,2,4 */
/* rand-u32-strided: 0x801500A4 2 4 0x80155000 */
/* rand-u16: 0x801501F2 1 0,1 */
/* rand-u32-strided: 0x80150100 1 4 0x80156000 */
/* rand-u32-strided: 0x80118B68 3 4 0x80152000,0x80153000,0x80154000 */
/* rand-u16: 0x80154000 32 0,1,2,3,4,5,6,7 */
/* rand-u16: 0x80152000 32 0,1,0x10,0x40,0xFFC0,0xFFF0,0x80,0xFF80 */
/* rand-mem: 0x80085A01 1 4 */
#include "common.h"

/* desenha as faces quadradas do modelo obj com sombreamento por vértice (POLY_G4): para cada
 * face transforma três vértices (RTPT), descarta a face de costas (NCLIP), projeta o quarto
 * vértice e tira a profundidade média (AVSZ4); dentro da faixa da tabela de ordenação calcula
 * a cor dos quatro vértices pelas normais (NCCT + NCCS, cor base da paleta atual) e
 * encadeia a primitiva na tabela */
extern u32 D_80118B48[];
extern u8 D_801010D8[], D_80085428[];

typedef struct {
    u16 v[4];  /* vértices */
    u16 n[4];  /* normais */
} Face;

/* cor base: entrada de 0x34 bytes de D_801010D8 escolhida por D_80085428[0x5D9] */
#define BASE_RGB (D_801010D8 + D_80085428[0x5D9] * 0x34)

s32 func_800CE9E4(u8 *obj, u8 *ctx) {
    s32 count = *(s32 *)(obj + 0xC);
    u32 *prim = *(u32 **)(obj + 0xA4 + *(u16 *)(ctx + 0xF2) * 4);
    u8 *verts = (u8 *)D_80118B48[8];
    u8 *norms = (u8 *)D_80118B48[9];
    Face *f = (Face *)D_80118B48[10];
    s32 i, mac0, otz;
    u32 *ot;
    if (count <= 0) return (s32)(obj + *(u16 *)(ctx + 0xF2) * 4); /* sobra do endereço em v0 */
    for (i = 0; i < count; i++, prim += 9, f++) {
        /* gte_ldv3(v0, v1, v2); gte_rtpt(); gte_nclip(); gte_stopz(&mac0) */
        __asm__ volatile("lwc2 $0, 0(%1)\n lwc2 $1, 4(%1)\n"
                         "lwc2 $2, 0(%2)\n lwc2 $3, 4(%2)\n"
                         "lwc2 $4, 0(%3)\n lwc2 $5, 4(%3)\n"
                         "nop\n nop\n .word 0x4A280030\n" /* rtpt */
                         "nop\n nop\n .word 0x4B400006\n" /* nclip */
                         "mfc2 %0, $24\n nop\n"
                         : "=r"(mac0)
                         : "r"(verts + f->v[0] * 8), "r"(verts + f->v[1] * 8), "r"(verts + f->v[2] * 8));
        if (mac0 <= 0) continue;
        /* gte_stsxy3(prim+8, prim+0x10, prim+0x18); gte_ldv0(v3); gte_rtps(); gte_stsxy(prim+0x20);
         * gte_avsz4(); gte_stotz(&otz) */
        __asm__ volatile("swc2 $12, 8(%1)\n swc2 $13, 16(%1)\n swc2 $14, 24(%1)\n"
                         "lwc2 $0, 0(%2)\n lwc2 $1, 4(%2)\n"
                         "nop\n nop\n .word 0x4A180001\n" /* rtps */
                         "swc2 $14, 32(%1)\n"
                         "nop\n nop\n .word 0x4B68002E\n" /* avsz4 */
                         "mfc2 %0, $7\n nop\n"
                         : "=r"(otz)
                         : "r"(prim), "r"(verts + f->v[3] * 8)
                         : "memory");
        if ((u32)(otz - 7) >= 0x3F9) continue;
        /* gte_ldv3(n0, n1, n2); gte_ldrgb(base); gte_ncct(); gte_strgb3(prim+4, prim+0xC, prim+0x14) */
        __asm__ volatile("lwc2 $0, 0(%0)\n lwc2 $1, 4(%0)\n"
                         "lwc2 $2, 0(%1)\n lwc2 $3, 4(%1)\n"
                         "lwc2 $4, 0(%2)\n lwc2 $5, 4(%2)\n"
                         "lwc2 $6, 0(%3)\n"
                         "nop\n nop\n .word 0x4B18043F\n" /* ncct */
                         "swc2 $20, 4(%4)\n swc2 $21, 12(%4)\n swc2 $22, 20(%4)\n"
                         :
                         : "r"(norms + f->n[0] * 8), "r"(norms + f->n[1] * 8), "r"(norms + f->n[2] * 8),
                           "r"(BASE_RGB), "r"(prim)
                         : "memory");
        /* gte_ldv0(n3); gte_ldrgb(base); gte_nccs(); gte_strgb(prim+0x1C) */
        __asm__ volatile("lwc2 $0, 0(%0)\n lwc2 $1, 4(%0)\n"
                         "lwc2 $6, 0(%1)\n"
                         "nop\n nop\n .word 0x4B08041B\n" /* nccs */
                         "swc2 $22, 28(%2)\n"
                         :
                         : "r"(norms + f->n[3] * 8), "r"(BASE_RGB), "r"(prim)
                         : "memory");
        /* addPrim(ot + otz, prim) */
        ot = (u32 *)(*(u8 **)ctx + otz * 4 + 0x70);
        prim[0] = (prim[0] & 0xFF000000) | (*ot & 0xFFFFFF);
        *ot = (*ot & 0xFF000000) | ((u32)prim & 0xFFFFFF);
    }
    return 0;
}
