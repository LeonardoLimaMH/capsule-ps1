/* stub-ret: mixed */
/* rand-u32-strided: 0x80069B24 1 4 0,1 */
#include "common.h"
#include "gte_inline.h"

/* monta a matriz da câmera (D_80069AD4): rotação + translação; sem modo extra (+0x50 == 0)
 * já a carrega no GTE, senão compõe com a segunda rotação (+0xB0) */
extern u8 D_80069AD4[];
extern s32 RotMatrix(void *, void *), TransMatrix(void *, void *), MulMatrix(void *, void *);

s32 func_8002CC74(void) {
    u8 *g = D_80069AD4;
    s32 r;
    if (*(s32 *)(g + 0x50) == 0) {
        RotMatrix(g + 0xE8, g + 0x10);
        r = TransMatrix(g + 0x10, g + 0xD8);
        gte_SetRotMatrix(g + 0x10);
        gte_SetTransMatrix(g + 0x10);
        return r;
    }
    RotMatrix(g + 0xE8, g + 0x10);
    TransMatrix(g + 0x10, g + 0xD8);
    RotMatrix(g + 0xB0, g + 0xB8);
    return MulMatrix(g + 0xB8, g + 0x10);
}
