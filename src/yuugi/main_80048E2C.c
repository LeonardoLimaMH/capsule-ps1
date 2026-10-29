#define GTE_CMD_WAIT "nop\n "
#define GTE_READ_WAIT ""
#include "common.h"
#include "yuugi.h"

/* stub-ret: mixed */
/* arg0: 0x80150000 */
/* arg1: 0x80150100 */
/* arg2: 0x80150200 */
/* arg3: 0x80150300 */
/* rand-u16: 0x80150000 64 0,1,0x10,0x40,0x80,0x100,0xFFC0,0xFFF0,0xFF80,0x1000 */
#include "gte_inline.h"

/* libgte: projeta v na tela (RTPS); devolve SZ3 / 4 */
long RotTransPers(void *v, long *sxy, long *p, long *flag) {
    long f, z;
    gte_ldv0(v);
    gte_rtps();
    gte_stsxy(sxy);
    gte_stir0(p);
    GTE_CFC2(f, 31);
    GTE_MFC2(z, 19);
    *flag = f;
    return z >> 2;
}

/* stub-ret: mixed */
/* arg0: 0x80150000 */
/* arg1: 0x80150100 */
/* arg2: 0x80150200 */
/* rand-u16: 0x80150000 64 0,1,0x10,0x40,0x80,0x100,0xFFC0,0xFFF0,0xFF80,0x1000 */
#include "gte_inline.h"

/* libgte: rotaciona e translada v (RT * V + TR); devolve o FLAG */
