/* stub-ret: mixed */
/* max-insns: 100000 */
/* args: small */
/* rand-ptr: 0x801373F0 16 */
#include "common.h"

extern u8 *D_801373F0[];
extern void _SsGetSeqData(s16, s16);

void _SsSeqPlay(s16 a, s16 b) {
    u8 *p = D_801373F0[a] + b * 0xB0;
    s16 tick = *(s16 *)(p + 0x54);
    s32 rest = *(s32 *)(p + 0x90);
    s32 d = rest - tick;
    s32 acc, v;
    if (d > 0) {
        s16 c = *(s16 *)(p + 0x52);
        if (c > 0) {
            *(u16 *)(p + 0x52) = c - 1;
        } else if (c == 0) {
            *(u16 *)(p + 0x52) = tick;
            *(s32 *)(p + 0x90) = *(s32 *)(p + 0x90) - 1;
        } else {
            *(s32 *)(p + 0x90) = d;
        }
        return;
    }
    if (tick < rest) return;
    acc = rest;
    do {
        do {
            _SsGetSeqData(a, b);
        } while ((v = *(s32 *)(p + 0x90)) == 0);
        acc += v;
    } while (acc < *(s16 *)(p + 0x54));
    *(s32 *)(p + 0x90) = acc - *(s16 *)(p + 0x54);
}
