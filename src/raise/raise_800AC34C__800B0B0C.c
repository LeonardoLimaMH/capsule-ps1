#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C__800B0B0C", func_800B0B0C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C__800B0B0C", func_800B0DE4);

typedef struct {
    u16 unk_0;
    u8 pad_2[0xE];
    u16 unk_10;
    u8 pad_12[0x196];
} Slot_B1088;
extern Slot_B1088 D_80091618[];
extern void func_800A7730(s32), func_800A79D8(s32), func_800A7C7C(s32), func_800A7F20(s32);
extern void func_800A8484(s32), func_800A7600(s32);
extern s32 func_800A76C0(s32);
s32 func_800B1088(s32 a0, s32 a1, s32 a2) {
    register Slot_B1088 *base asm("a0") = D_80091618;
    Slot_B1088 *e = &base[(u16)a1];
    s32 c;
    if (e->unk_10 == 0xFFFF) c = 1;
    else c = e->unk_0 == 0xFFFF;
    if (c == 1) return 1;
    if (a2 == 0) {
        func_800A7730((u16)a1);
        func_800A79D8((u16)a1);
        func_800A7C7C((u16)a1);
        func_800A7F20((u16)a1);
        func_800A8484((u16)a1);
    }
    func_800A7600((u16)a1);
    return func_800A76C0((u16)a1);
}
