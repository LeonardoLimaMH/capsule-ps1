#include "common.h"

extern u8 D_80100F38[];

void func_800E071C(u8 *obj, s32 ctx) {
    u8 *rec = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;
    s16 v = func_800E0A90(ctx, rec + 0x1EC, &obj);

    *(s16 *)(obj + 0x4E) = v;
}
