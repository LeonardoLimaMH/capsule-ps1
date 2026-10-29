/* stub-ret: mixed */
/* rand-u16: 0x80150000 64 0,1,0x10,0x40,0x80,0x100,0xFFC0,0xFFF0,0xFF80,0x1000 */
#include "common.h"
#include "gte_inline.h"

/* libgte: sentido do triângulo na tela (NCLIP): > 0 de frente */
long NormalClip(long sxy0, long sxy1, long sxy2) {
    long z;
    gte_ldsxy3(sxy0, sxy1, sxy2);
    gte_nclip();
    GTE_MFC2(z, 24);
    return z;
}
