#include "common.h"

void func_800A9738(s32 arg0) {
    extern s32 D_800EE914[];
    (*D_800EE914) = arg0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A9738", func_800A9744);

void func_800A99AC(s32 arg0, s32 arg1) {
    extern s16 D_80078C22[];
    extern u8 D_800900C0[];
    extern u8 D_800EE914[];
    u8 *var_a2;
    u32 temp_t0;
    u32 temp_v0;
    u32 temp_v1;
    u32 temp_v1_2;
    s32 var_a3;
    s32 var_t1;
    s32 var_v0;

    M2C_FIELD(D_800EE914, s32 *, 0) = 0;
    if ((*D_80078C22) != 0) {
        if ((*D_80078C22) != 1) {
            var_t1 = 9;
        } else {
            var_v0 = 4;
            goto block_5;
        }
    } else {
        var_v0 = 1;
block_5:
        var_t1 = var_v0;
    }
    var_a3 = 0;
    if (var_t1 != 0) {
        var_a2 = D_800EE914;
        temp_t0 = (*D_80078C22) + 1;
        do {
            temp_v1 = var_a3 / temp_t0;
            temp_v0 = var_a3 % temp_t0;
            var_a3 += 1;
            temp_v1_2 = ((arg0 - temp_v1) * 8) + (arg1 - temp_v0);
            M2C_FIELD(var_a2, s32 *, 0x70) = temp_v1_2;
            M2C_FIELD(var_a2, s32 *, 4) = (s32) (M2C_FIELD(D_800900C0, s32 *, 0x15C) + (temp_v1_2 * 0x2C));
            var_a2 += 4;
        } while (var_a3 < var_t1);
    }
    M2C_FIELD(D_800EE914, s32 *, 0x94) = 0x40;
    M2C_FIELD(D_800EE914, s32 *, 0) = 1;
}

s32 func_800A9A74(void) {
    extern s32 D_800EEB9C[];
    s32 val;

    val = D_800EEB9C[1];
    if (val > 0) {
        D_800EEB9C[1] = val - 1;
        func_800B7298(D_800EEB9C[0]);
        return 0;
    }
    D_800EEB9C[0] = 0;
    return -1;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A9738", func_800A9AC0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A9738", func_800A9D6C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A9738", func_800A9F84);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A9738", func_800AA0E4);

s32 func_800AA45C(void) {
    typedef struct {
        u8 pad[0xA68];
        s32 unkA68;
    } S_8ED68;
    extern S_8ED68 D_8008ED68[];
    extern s32 D_800ED8DC[];
    S_8ED68 *p = D_8008ED68;

    if (*D_800ED8DC == 1) {
        if (p->unkA68 != 0) {
            return 0;
        }
    }
    return -1;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A9738", func_800AA494);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A9738", func_800AA60C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A9738", func_800AA77C);

typedef struct {
    u8 pad[0x38];
    u32 flags;
} WorkSlotRecordTask;
typedef struct {
    u8 pad[0x18C];
    WorkSlotRecordTask *task;
    u8 middle[0x21F];
    u8 slots[32];
    u8 tail[0x3C9];
    u32 state;
} WorkSlotRecord;
void func_800AA8D0(u32 player) {
    extern WorkSlotRecord D_80100F38[];
    WorkSlotRecord *record = &D_80100F38[player & 0xFFFF];
    record->slots[(record->state >> 26) & 31] = 0;
    record->task->flags |= 1;
}

void func_800AA930(s32 idx) {
    typedef struct {
        u8 pad[0x38];
        u32 flags;
    } Obj_800AA930;
    typedef struct {
        u8 pad[0x21C];
        Obj_800AA930 *obj;
        u8 pad2[0x189];
        u8 slots[32];
        u8 pad3[0x3CD];
        u32 state;
    } Player_800AA930;
    extern Player_800AA930 D_80100F38[];
    Player_800AA930 *rec = &D_80100F38[idx & 0xFFFF];
    u32 w;

    rec->obj->flags |= 1;
    w = rec->state;
    rec->obj = 0;
    rec->slots[(w >> 26) & 0x1F] = 0;
}
