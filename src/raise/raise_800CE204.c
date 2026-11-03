#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CE204", func_800CE204);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CE204", func_800CE380);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CE204", func_800CE4B8);

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

#include "common.h"

extern u8 D_80100F38[];

void func_800CE638(u8 *obj, s32 ctx) {
    u8 *rec = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;
    s16 v = func_800E3A04(ctx, rec + 0x1CC, &obj);

    *(s16 *)(obj + 0x4E) = v;
}

void func_800CE6B0(s32 unused, s32 ctx) {
    u8 *rec = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;
    s16 v = func_800E3D18(ctx, rec + 0x1EC, rec + (*(s16 *)(rec + 0x2BA) * 4 + 0x258));

    rec += *(s16 *)(rec + 0x2BA) * 4;
    *(s16 *)(*(u8 **)(rec + 0x258) + 0x4E) = v;
}

void func_800CE748(s32 unused, s32 ctx) {
    u8 *rec = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;
    s16 v = func_800E3F38(ctx, rec + 0x1EC, rec + (*(s16 *)(rec + 0x2BA) * 4 + 0x258));

    rec += *(s16 *)(rec + 0x2BA) * 4;
    *(s16 *)(*(u8 **)(rec + 0x258) + 0x4E) = v;
}

#include "common.h"

extern u8 D_80100F38[];

void func_800CE7E0(u8 *obj, s32 ctx) {
    u8 *rec = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;
    u16 old = *(u16 *)(obj + 0x4E);
    s16 v = func_800E3B14(ctx, rec + 0x1CC, &obj);

    *(s16 *)(obj + 0x4E) = v;
    if (v < 0x15) {
        *(u16 *)(obj + 0x4E) = old;
    }
}

#include "common.h"

extern u8 D_80100F38[];

void func_800CE87C(u8 *obj, s32 ctx) {
    u8 *rec = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;
    s16 v = func_800E3A04(ctx, rec + 0x1CC, &obj);

    *(s16 *)(obj + 0x4E) = v;
}

void func_800CE8F4(s32 unused, s32 ctx) {
    u8 *rec = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;
    s16 v = func_800E3D18(ctx, rec + 0x1EC, rec + (*(s16 *)(rec + 0x2BA) * 4 + 0x258));

    rec += *(s16 *)(rec + 0x2BA) * 4;
    *(s16 *)(*(u8 **)(rec + 0x258) + 0x4E) = v;
}

void func_800CE98C(s32 unused, s32 ctx) {
    u8 *rec = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;
    s16 v = func_800E3F38(ctx, rec + 0x1EC, rec + (*(s16 *)(rec + 0x2BA) * 4 + 0x258));

    rec += *(s16 *)(rec + 0x2BA) * 4;
    *(s16 *)(*(u8 **)(rec + 0x258) + 0x4E) = v;
}

#include "common.h"

extern u8 D_80100F38[];

void func_800CEA24(u8 *obj, s32 ctx) {
    u8 *rec = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;
    u16 old = *(u16 *)(obj + 0x4E);
    s16 v = func_800E3B14(ctx, rec + 0x1CC, &obj);

    *(s16 *)(obj + 0x4E) = v;
    if (v < 0x15) {
        *(u16 *)(obj + 0x4E) = old;
    }
}

#include "common.h"

extern u8 D_80100F38[];

void func_800CEAC0(u8 *obj, s32 ctx) {
    u8 *rec = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;
    s16 v = func_800E3A04(ctx, rec + 0x1CC, &obj);

    *(s16 *)(obj + 0x4E) = v;
}

void func_800CEB38(s32 unused, s32 ctx) {
    u8 *rec = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;
    s16 v = func_800E3D18(ctx, rec + 0x1EC, rec + (*(s16 *)(rec + 0x2BA) * 4 + 0x258));

    rec += *(s16 *)(rec + 0x2BA) * 4;
    *(s16 *)(*(u8 **)(rec + 0x258) + 0x4E) = v;
}

void func_800CEBD0(s32 unused, s32 ctx) {
    u8 *rec = D_80100F38 + (func_800B1260(ctx) & 0xFFFF) * 0x79C;
    s16 v = func_800E3F38(ctx, rec + 0x1EC, rec + (*(s16 *)(rec + 0x2BA) * 4 + 0x258));

    rec += *(s16 *)(rec + 0x2BA) * 4;
    *(s16 *)(*(u8 **)(rec + 0x258) + 0x4E) = v;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CE204", func_800CEC68);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CE204", func_800CECEC);

void func_800CED70(void) {

}

void func_800CED78(void) {

}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CE204", func_800CED80);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CE204", func_800CEF08);
