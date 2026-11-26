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

s32 func_800A9D6C(s32 a0) {
    typedef struct {
        u8 pad0[0x18C];
        u8 *unk18C[2];
        u8 pad194[0x1A8 - 0x194];
    } Mon_A9D6C;
    typedef struct {
        u8 pad0[0xC];
        s32 count;
        u8 pad10[0x90];
        u8 *ptr;
        u8 padA4[0xBC - 0xA4];
    } Obj_900C0;
    extern s16 D_80078C28;
    extern s16 D_800EEA90;
    extern u16 D_800EF2D8;
    extern u16 D_8006AF80;
    extern Mon_A9D6C D_80091618[];
    extern Obj_900C0 D_800900C0[];
    extern u8 D_800EF524[];
    extern s16 D_80078C26;
    extern s32 D_800EEBA8;
    extern s32 D_800F0578;
    extern s32 D_800F0550;
    extern u8 D_80085429;
    extern s32 D_80078C34;
    extern void func_800E1B30(void);
    extern void func_800E2AA0(s32, s32, s32);
    extern void func_800B4C40(s32);
    extern void func_800B9F50(s32);
    extern void func_80024990(s32, s32, s32, s32);
    extern void func_800D1404(void);
    extern void func_800282A0(s32);

    s32 i;
    Mon_A9D6C *slots;
    s32 b;
    u8 *ef;

    if (D_80078C28 != 0) {
        return 0;
    }

    if (D_800EEA90 != 0) {
        if (D_800EEA90 == 4) {
            func_800E1B30();
        }
        D_800EEA90 -= 1;
        return 0;
    }

    D_800EEA90 = 8;
    D_8006AF80 = D_800EF2D8;
    func_800E2AA0(7, 1, a0);
    func_800B4C40(D_8006AF80);
    func_800B9F50(1);

    i = 0;
    slots = D_80091618;
    b = (a0 == 1) << 3;
    ef = D_800EF524;
    do {
        u8 *o;
        s32 n;
        u8 *q;
        s32 j;

        if (a0 == 1) {
            *(s32 *)(ef + i * 0x34 + 0x448) = a0;
        } else {
            *(s32 *)(ef + i * 0x34 + 0x448) = -1;
        }
        o = slots[D_8006AF80].unk18C[i];
        *(s32 *)(o + 0x50) = (*(s32 *)(o + 0x50) & ~8) | b;
        n = D_800900C0[i].count;
        q = D_800900C0[i].ptr;
        j = 0;
        if (n > 0) {
            do {
                j++;
                q[0x2A] = 0x80;
                q[0x29] = 0x80;
                q[0x28] = 0x80;
                q[0x2B] = 0x28;
                q += 0x2C;
            } while (j < n);
        }
        i++;
    } while (i < 2);

    if (a0 == 0) {
        u8 *grid = D_800EF524;
        s32 a3 = 8;
        if (D_80078C26 == 3) {
            a3 = 6;
        }
        func_80024990(*(s32 *)(grid + 0x474), 1, 0x32, a3);
        D_800EEBA8 = 0;
        D_800F0550 = D_800F0578;
        if (D_80085429 != 0) {
            func_800D1404();
        }
    }

    if (D_80078C34 != 0x7006) {
        func_800282A0(0x7006);
    }
    return 1;
}

