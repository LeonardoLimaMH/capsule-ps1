#include "common.h"

typedef struct {
    u8 pad[0x324];
    s16 unk324;
    u16 unk326;
    s16 unk328;
    u8 pad32A[0x472];
} S_100F38;

extern S_100F38 D_80100F38[];
extern s32 func_800B1260(s32);
s32 func_800CE164(s32 a0) {
    u8 *p = D_80100F38 + (func_800B1260(a0) & 0xFFFF) * 0x79C;
    s16 v;
    if (*(s16 *)(p + 0x328) > 0) {
        *(u16 *)(p + 0x328) -= 1;
        v = *(s16 *)(p + 0x324) == 7 ? 0 : *(u16 *)(p + 0x324) + 1;
    } else {
        *(u16 *)(p + 0x328) += 1;
        v = *(s16 *)(p + 0x324) == 0 ? 7 : *(u16 *)(p + 0x324) - 1;
    }
    *(s16 *)(p + 0x324) = v;
    return *(u16 *)(p + 0x326) = *(u16 *)(p + 0x324);
}
