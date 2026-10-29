/* stub-ret: mixed */
/* arg0: 0x80150000 */
/* arg1: 0x80150100 */
/* rand-u32-strided: 0x80069B24 1 4 0,1 */
/* rand-u32-strided: 0x80069EA8 1 4 0,1 */
/* arg2: small */
/* rand-u16: 0x80150100 64 0,1,0x10,0x40,0x800,0xF800,0xFFC0,0x1000,0xF000 */
#include "common.h"
#include "gte_inline.h"

/* cor das 4 pontas de uma primitiva de modelo (cores de 8 em 8 bytes a partir de +4):
 * desligado (D_80069B24 == 0) não faz nada; com cor fixa (color) copia a cor e registra a
 * animação de cor (func_8002C534, tipo 2); senão calcula a luz pela normal de cada
 * vértice com a cor base do material (+0x40) (NCCS) */
extern s32 D_80069B24, D_80069EA8;
extern s32 func_8002C534(void *, void *, s32);

void *func_8002C000(u8 *prim, u8 *mat, u8 *color) {
    if (D_80069B24 == 0) return 0;
    if (color != 0) {
        prim[0x4] = color[0x4];
        prim[0x5] = color[0x5];
        prim[0x6] = color[0x6];
        prim[0xC] = color[0x8];
        prim[0xD] = color[0x9];
        prim[0xE] = color[0xA];
        prim[0x14] = color[0xC];
        prim[0x15] = color[0xD];
        prim[0x16] = color[0xE];
        if (D_80069EA8) {
            prim[0x1C] = color[0x4];
            prim[0x1D] = color[0x5];
            prim[0x1E] = color[0x6];
        } else {
            prim[0x1C] = color[0x10];
            prim[0x1D] = color[0x11];
            prim[0x1E] = color[0x12];
        }
        func_8002C534(mat + 0x40, color + 0x4, 2);
        func_8002C534(mat + 0x44, color + 0x8, 2);
        func_8002C534(mat + 0x48, color + 0xC, 2);
        return (void *)func_8002C534(mat + 0x4C, D_80069EA8 ? color + 4 : color + 0x10, 2);
    }
    gte_ldv0(mat + 0x0);
    gte_ldrgb(mat + 0x40);
    gte_nccs();
    gte_strgb(prim + 0x4);
    gte_ldv0(mat + 0x8);
    gte_ldrgb(mat + 0x44);
    gte_nccs();
    gte_strgb(prim + 0xC);
    gte_ldv0(mat + 0x10);
    gte_ldrgb(mat + 0x48);
    gte_nccs();
    gte_strgb(prim + 0x14);
    gte_ldv0(mat + 0x18);
    gte_ldrgb(mat + 0x4C);
    gte_nccs();
    gte_strgb(prim + 0x1C);
    return prim + 0x1C;
}
