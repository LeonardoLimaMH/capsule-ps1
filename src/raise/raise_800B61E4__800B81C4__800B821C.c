#include "common.h"

typedef struct {
    u8 pad[0x38];
    u32 pad38 : 6;
    u32 b38_6 : 1;
    u32 pad39 : 25;
} Obj821C;

static inline void set_b38_6(Obj821C *obj, u32 value) {
    obj->b38_6 = value;
}

void func_800B821C(void) {
    typedef struct {
        u8 _p00[0x24];
        s32 unk24;
        Obj821C *unk28[7];
        u8 _p44[0x1C];
        s32 unk60[7];
        u8 _p7C[0x58];
        Obj821C *unkD4[7][9];
        u8 _p1D0[0x1F8];
        s32 unk3C8[7][9];
    } State;
    typedef struct {
        u8 _p00[0x10];
        u16 unk10;
        u8 _p12[0x196];
    } MonRec;
    extern u16 D_8006AF80[];
    extern MonRec D_80091618[];
    extern u8 D_800EEA00[];
    extern State D_800EEB9C[];
    extern s32 func_800E158C(void);
    s32 i;
    s32 j;

    if (*D_8006AF80 != 0xFFFF && D_80091618[*D_8006AF80].unk10 != 0xFFFF && func_800E158C() == 1) {
        for (i = 0; i < 7; i++) {
            u8 val = 0;
            u8 *dst = &D_800EEA00[i];
            if ((u32)i >= 2 && i != 3) {
                val = i != 4;
            }
            *dst = val;
            set_b38_6(D_800EEB9C->unk28[i], val ^ 1);
            if (i == D_800EEB9C->unk24) {
                for (j = 0; j < D_800EEB9C->unk60[i]; j++) {
                    set_b38_6(D_800EEB9C->unkD4[i][j], D_800EEB9C->unk3C8[i][j] != 1);
                }
            }
        }
        return;
    }

    for (i = 0; i < 7; i++) {
        u32 val;
        s32 k = 0;
        if (D_800EEB9C->unk60[i] > 0) {
            s32 n;
            val = 1;
            n = D_800EEB9C->unk60[i];
            do {
                if (D_800EEB9C->unk3C8[i][k] == val) {
                    goto found;
                }
                k++;
            } while (k < n);
        }
        val = 0;
    found:
        D_800EEA00[i] = val;
        set_b38_6(D_800EEB9C->unk28[i], val ^ 1);
        if (i == D_800EEB9C->unk24) {
            for (j = 0; j < D_800EEB9C->unk60[i]; j++) {
                set_b38_6(D_800EEB9C->unkD4[i][j], D_800EEB9C->unk3C8[i][j] != 1);
            }
        }
    }
}

typedef struct {
    u8 pad[0x124];
    u16 values[0x42];
} MonsterValueRecord;
u16 func_800B847C(u32 player, s32 index) {
    extern MonsterValueRecord D_80091618[];
    u32 base = (u32)D_80091618;
    u32 offset = (player & 0xFFFF) * 0x1A8;
    MonsterValueRecord *record = (MonsterValueRecord *)(base + offset);
    return record->values[index];
}
