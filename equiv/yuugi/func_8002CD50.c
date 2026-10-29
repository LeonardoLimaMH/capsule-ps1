/* stub-ret: mixed */
/* rand-u32-strided: 0x80069B24 1 4 0,1 */
#include "common.h"
#include "gte_inline.h"

/* matriz de luz da câmera (D_80069AD4): sem modo extra (+0x50 == 0), a direção das luzes
 * (D_80069BE4, girada a partir de D_80078C64) é levada para o espaço da câmera
 * (D_80069B04) e gravada em D_80069B8C; carrega a matriz de cor das luzes */
extern u8 D_80069AD4[], D_80078C64[], D_80069B04[], D_80069BE4[], D_80069B8C[], D_80069B44[];
extern s32 RotMatrix(void *, void *), SetColorMatrix(void *);

/* uma coluna de dst = RT * coluna de src (MVMVA RT * IR) */
#define MUL_COL(src, dst) \
    __asm__ volatile("lhu $12, 0(%0)\n lhu $13, 6(%0)\n lhu $14, 12(%0)\n" \
                     "mtc2 $12, $9\n mtc2 $13, $10\n mtc2 $14, $11\n" \
                     "nop\n nop\n .word 0x4A49E012\n" \
                     "mfc2 $12, $9\n mfc2 $13, $10\n mfc2 $14, $11\n" \
                     "sh $12, 0(%1)\n sh $13, 6(%1)\n sh $14, 12(%1)\n" \
                     :: "r"(src), "r"(dst) : "$12", "$13", "$14", "memory")

s32 func_8002CD50(void) {
    u8 *g = D_80069AD4;
    long c;
    if (*(s32 *)(g + 0x50) != 0) {
        RotMatrix(g + 0xE8, g + 0x110);
    } else {
        RotMatrix(D_80078C64, g + 0x110);
        gte_SetRotMatrix(D_80069B04);
        for (c = 0; c < 3; c++) MUL_COL(D_80069BE4 + c * 2, D_80069B8C + c * 2);
    }
    return SetColorMatrix(D_80069B44);
}
