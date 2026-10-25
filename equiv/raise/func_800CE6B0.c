#include "common.h"

extern u8 D_80100F38[];

void func_800CE6B0(s32 unused, s32 ctx) {
    u8 *rec = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;
    s16 v = func_800E3D18(ctx, rec + 0x1EC, rec + *(s16 *)(rec + 0x2BA) * 4 + 0x258);
    u8 *obj = *(u8 **)(rec + *(s16 *)(rec + 0x2BA) * 4 + 0x258);

    *(s16 *)(obj + 0x4E) = v;
}
