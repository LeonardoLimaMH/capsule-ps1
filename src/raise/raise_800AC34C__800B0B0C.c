#include "common.h"

/* slot de 0x1A8 bytes em D_80091618 */
typedef struct {
    u16 unk_0;
    u8 _pad2[0xE];
    u16 unk_10;
    u8 _pad12[0x1A8 - 0x12];
} Slot_B1088;

extern Slot_B1088 D_80091618[];

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C__800B0B0C", func_800B0B0C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800AC34C__800B0B0C", func_800B0DE4);

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
