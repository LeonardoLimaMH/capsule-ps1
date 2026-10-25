#include "common.h"

extern u8 D_80100F38[];

void func_800CE59C(u8 *obj, s32 ctx) {
    u8 *rec = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;
    u16 old = *(u16 *)(obj + 0x4E);
    s16 v = func_800E3B14(ctx, rec + 0x1CC, &obj);

    *(s16 *)(obj + 0x4E) = v;
    if (v < 0x15) {
        *(u16 *)(obj + 0x4E) = old;
    }
}
