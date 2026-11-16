#include "common.h"

void func_800AED50(s16 arg0) {
    extern s16 D_8008EE50[];
    (*D_8008EE50) = arg0;
}

u8 func_800AED5C(s32 arg0, u8 *arg1, u8 arg2, u8 arg3) {
    extern u8 D_801010B0[];
    return (*(u8 *)(*(u8 **)(D_801010B0 + arg1[9] * 0x34) + arg2 * 0x34 + arg3 * 4 + 3)) & 0x7F;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AED50", func_800AEDB8);

#include "common.h"

void func_800AF1C0(s32 arg0) {
    extern u8 D_80069AD4[];
    extern u16 D_8008EE50[];
    u8 *var_a0;
    s32 temp_v0;
    s32 var_a1;
    u8 temp_a0;
    u8 temp_v1;
    void *temp_a1;
    void *temp_s0;
    void *temp_s2;
    void *temp_s3;
    void *temp_v1_2;
    void *var_v1;

    temp_s0 = arg0 + 0x5D0;
    temp_v1 = M2C_FIELD(temp_s0, u8 *, 0x5FA);
    temp_a1 = temp_s0 + temp_v1;
    temp_v1_2 = temp_s0 + ((temp_v1 * 0x2E8) + 0x18);
    temp_a0 = M2C_FIELD(temp_a1, u8 *, 0x5FB);
    temp_s2 = temp_v1_2 + (M2C_FIELD(temp_s0, u8 *, 0x719) * 0x7C);
    temp_s3 = temp_v1_2 + (temp_a0 * 0x7C);
    switch ((*D_8008EE50)) {                           /* irregular */
    case 0:
        M2C_FIELD(temp_s0, s8 *, 0x610) = 0;
        func_80012628(temp_a0, temp_a1);
        return;
    case 1:
        M2C_FIELD(temp_s0, s8 *, 0x7A4) = 0;
        var_a1 = 0;
        var_a0 = D_80069AD4;
        var_v1 = temp_s0;
        do {
            temp_v0 = M2C_FIELD(var_a0, s32 *, 0x44);
            var_a0 += 4;
            var_a1 += 1;
            M2C_FIELD(var_v1, s32 *, 0x78C) = temp_v0;
            var_v1 += 4;
        } while (var_a1 < 3);
        func_800B3488(temp_s0, temp_s3);
        func_80012628();
        return;
    case 2:
        if (func_800B2F48(arg0, 0) != 0) {
            func_80012628();
            return;
        }
        return;
    case 3:
        func_800DCE78(temp_a0, temp_a1);
        if (func_800BBD20(arg0, temp_s0, temp_s2, temp_s3) != 0) {
            func_800125D8();
        }
        break;
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800AED50", func_800AF340);

void func_800AF81C(u8 *p) {
    typedef struct {
        u8 pad[0x18];
        u8 f18;
        u8 pad2[0x23];
    } S_D63940;
    extern S_D63940 D_80063940[];
    extern u16 D_8008EE50[];
    u16 old;
    s32 team;
    s32 piece;
    u8 *base;
    u8 *row;
    u8 *selection;
    u8 *q;

    base = p + 0x5D0;
    team = base[0x5FA];
    selection = base + team;
    row = base + (team * 0x2E8 + 0x18);
    piece = selection[0x5FB];
    q = row + piece * 0x7C;
    switch (*D_8008EE50) {
    case 1:
        q[0x26] = 3;
        func_8009C4B0(p, team, piece);
    case 0:
advance:
        func_80012628();
        return;
    case 2:
        q[0x17] = 0x85;
        q[0x23] = 0;
        q[0x25] = func_800C94DC(p, D_80063940[q[0]].f18 >> 5);
        func_800A84A0(q, team, piece, 1);
        func_800A87C8(p, team, piece, 0);
        *(u16 *)(p + 0xC) = 0;
        goto advance;
    case 3:
        old = *(u16 *)(p + 0xC);
        *(u16 *)(p + 0xC) = old + 1;
        if (old < 0x51U) {
            return;
        }
        goto advance;
    default:
        return;
    case 4:
        if (func_800B2F48(p, 1) != 0) {
            goto advance;
        }
        break;
    case 5:
        q[0x17] = 1;
        q[0x25] = func_800A835C(p, team);
        func_800A84A0(q, team, piece, 0);
        goto advance;
    case 6:
        func_800125D8();
        break;
    }
}
