/* stub-ret: mixed */
/* arg0: 0x80150000 */
/* arg1: 0x80150100 */
/* arg2: 0x80150200 */
/* arg3: 0x80150300 */
/* arg4: 0x80150400 */
/* arg5: 0x80150500 */
/* arg6: 0x80150600 */
/* arg7: 0x80150700 */
/* arg8: 0x80150800 */
/* arg9: 0x80150900 */
/* rand-u16: 0x80150000 64 0,1,0x10,0x40,0x80,0x100,0xFFC0,0xFFF0,0xFF80,0x1000 */
#include "common.h"
#include "gte_inline.h"

/* libgte: projeta quatro vértices (RTPT + RTPS); devolve SZ3 / 4 */
long RotTransPers4(void *v0, void *v1, void *v2, void *v3, long *s0, long *s1, long *s2, long *s3, long *p, long *flag) {
    long f1, f2, z;
    gte_ldv3(v0, v1, v2);
    gte_rtpt();
    gte_stsxy3(s0, s1, s2);
    GTE_CFC2(f1, 31);
    gte_ldv0(v3);
    gte_rtps();
    gte_stsxy(s3);
    gte_stir0(p);
    GTE_CFC2(f2, 31);
    GTE_MFC2(z, 19);
    *flag = f2 | f1;
    return z >> 2;
}
