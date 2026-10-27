/* rand-ptr: 0x80100D40 1 */
#include "common.h"

typedef struct { u8 b[44]; } S44;
extern u16 D_80100D4E, D_80100D4C;
extern u8 *D_80100D40;
extern S44 D_80100D50;
extern s32 rsin(s32), rcos(s32);

#define OS(x) (*(s16 *)(o + (x)))

s32 func_800BE7B4(void) {
    if (D_80100D4E != 0) {
        s32 a = (s32)(double)(s32)(D_80100D4E << 5);
        double ds = (double)rsin(a) * 100.0 * (1.0 / 4096.0);
        double dc = (double)rcos(a) * 100.0 * (1.0 / 4096.0);
        u8 *o = D_80100D40;
        OS(0xA) = (s32)((double)OS(0x1A) + ds);
        OS(0xC) = (s32)((double)OS(0x1C) - dc);
        OS(0x12) = (s32)((double)OS(0x22) + ds);
        OS(0x14) = (s32)((double)OS(0x24) - dc);
        D_80100D4E -= 1;
        return 0;
    }
    *(S44 *)D_80100D40 = D_80100D50;
    D_80100D4C = 0;
    return 1;
}
