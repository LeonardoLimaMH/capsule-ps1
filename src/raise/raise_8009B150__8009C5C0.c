#include "common.h"

void func_8009C5C0(void) {

}

#include "common.h"

void func_8009C5C8(void) {
    extern s16 D_8006B00A[];
    extern s32 D_8008F71C[];
    (*D_8006B00A) = 0;
    func_80013928((*D_8008F71C));
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009B150__8009C5C0", func_8009C5F4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009B150__8009C5C0", func_8009C918);

void func_8009CA78(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        func_8009C918(var_s0);
        var_s0 += 1;
    } while (var_s0 < 0xA);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009B150__8009C5C0", func_8009CAB4);

#include "common.h"

void func_8009CCEC(void) {
    extern int func_800161C4();
    extern int func_8009CAB4();
    void *temp_v0;

    func_80012A20(func_80019F30(0x2000E, 0x2B), 1, 0, 0);
    func_80012A20(func_80019F30(0x2000E, 0x2C), 1, 0, 0);
    temp_v0 = func_80015B3C(&func_8009CAB4, &func_800161C4, 2);
    func_80015EF8(temp_v0);
    M2C_FIELD(temp_v0, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x38) & ~1);
    func_80015CD0(temp_v0 + 0x14, func_80019F30(0x7000E, 0xA8), 1);
    M2C_FIELD(temp_v0, s32 *, 0x30) = (s32) ((M2C_FIELD(temp_v0, s32 *, 0x30) & ~0x1C0) | 0x40);
    M2C_FIELD(temp_v0, s32 *, 0x80) = func_80020304(2);
    M2C_FIELD(temp_v0, s16 *, 0x4A) = -0x80;
    M2C_FIELD(temp_v0, s16 *, 0x46) = 0;
    M2C_FIELD(temp_v0, s16 *, 0x4E) = 6;
    func_80033878(0x801E);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009B150__8009C5C0", func_8009CDE4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009B150__8009C5C0", func_8009CE54);
