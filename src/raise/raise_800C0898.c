#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C0898", func_800C0898);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C0898", func_800C0BC8);

void func_800C0C40(void) {
    func_800C0C98();
}

void func_800C0C60(void) {
    func_800C0CF0();
    func_800C0D48();
    func_800C0DD4();
    func_800C0C98();
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C0898", func_800C0C98);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C0898", func_800C0CF0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C0898", func_800C0D48);

void func_800C0DD4(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        func_800284C8(0xF, var_s0);
        var_s0 += 1;
    } while (var_s0 < 0xA);
}

void func_800C0E14(void) {

}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C0898", func_800C0E1C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C0898", func_800C0EE8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C0898", func_800C1010);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C0898", func_800C1280);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C0898", func_800C1310);
