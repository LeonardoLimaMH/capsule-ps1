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
long RotTrans(void *v, void *out, long *flag) {
    long f;
    gte_ldv0(v);
    gte_rt();
    gte_stlvnl(out);
    GTE_CFC2(f, 31);
    *flag = f;
    return f;
}
