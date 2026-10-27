#include "common.h"
/* arg0: 0x80150000 */
/* arg1: small */
/* rand-u16: 0x801FFF10 1 0,1,2,15,31,32,33,63,64,65,127 */
/* rand-u16: 0x801FFF12 1 0,65535 */

u32 *_dbl_shift(u32 *out, s32 right, u32 low, u32 high, s32 count) {
    s32 i;
    for (i = 0; i < count; ++i) {
        if (!right) {
            high = (high << 1) | (low >> 31);
            low <<= 1;
        } else {
            low = (low >> 1) | (high << 31);
            high = (high >> 1) | (high & 0x80000000);
        }
    }
    out[0] = low;
    out[1] = high;
    return out;
}
