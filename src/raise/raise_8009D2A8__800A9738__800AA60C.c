#include "common.h"

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

typedef struct {
    u32 pad[0x14];
    u32 b0 : 1;
    u32 b1 : 2;
    u32 b3 : 1;
    u32 rest : 28;
} Flags_800AA494;

typedef struct {
    u8 pad[0x10];
    u16 f10;
    u8 pad2[0x17A];
    Flags_800AA494 *fl[2];
} Ent_800AA494;

s32 func_800AA60C(void) {
    typedef struct {
        u8 pad[0x10];
        u16 unk10;
        u8 pad2[0x196];
    } Ent_800AA60C;
    extern s32 D_800EEB9C[];
    extern s32 D_800ED8DC[];
    extern u16 D_8006AF80[];
    extern Ent_800AA60C D_80091618[];
    extern s16 D_800EE9B4[];
    s32 r = -1;

    if (D_800EEB9C[0] != 0) {
    if (D_800EEB9C[0] >= 0) {
    if (D_800EEB9C[0] < 3) {
        if (D_800ED8DC[0] == 1) {
            r = func_800A8FF0();
        }
        if (D_800EEB9C[1] > 0) {
            D_800EEB9C[1]--;
            func_800B7298(D_800EEB9C[0]);
            return 0;
        }
        if (r != -1) {
            return 0;
        }
        if (D_80091618[D_8006AF80[0]].unk10 == 0xFFFF) {
            func_800AC34C(1);
            if (D_800EE9B4[0] == 0x78) {
                D_800EE9B4[0]--;
                func_800D1CC4(D_8006AF80[0], 3, 0, 0);
                return 0;
            }
            if (D_800EE9B4[0] > 0) {
                D_800EE9B4[0]--;
            } else {
                D_800EE9B4[0] = 0x78;
                D_800EEB9C[0] = 0;
                D_800EEB9C[3] = 2;
                D_800ED8DC[0] = 0;
                return -1;
            }
        } else {
            func_800AC34C(0);
            D_800EEB9C[0] = 0;
            D_800ED8DC[0] = 0;
            return -1;
        }
    }
    }
    }
    return 0;
}
