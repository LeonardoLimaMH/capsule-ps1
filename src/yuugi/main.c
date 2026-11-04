#include "common.h"
#include "yuugi.h"

void main(void) {
    __main();
    func_800118BC();
    func_80011A60(0);
    func_80011ED4();
}

void func_800118BC(void) {
    ResetGraph(0);
    srand(1);
    func_8001A998(__bss_start, 4);
    func_8001C9D8();
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main", func_800118FC);

#include "common.h"

extern void func_80011AFC();

void func_80011A60(s32 mode) {
    if (mode == 0) {
        func_80033514(0x9858, 0x3138);
    } else {
        func_80033604();
    }
    VSyncCallback(func_80011AFC);
}

void func_80011AA4(void) {
    struct { s16 m[3][3]; s32 t[3]; } m;
    extern void SetColorMatrix(), SetBackColor();

    m.m[2][0] = m.m[1][0] = m.m[0][0] = 0xFF0;
    m.m[2][1] = m.m[1][1] = m.m[0][1] = 0xFF0;
    m.m[2][2] = m.m[1][2] = m.m[0][2] = 0xFF0;
    SetColorMatrix(&m);
    SetBackColor(0x80, 0x80, 0x80);
}

void func_80011AFC(void) {
    func_800337FC();
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main", func_80011B1C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main", func_80011C40);

INCLUDE_ASM("asm/yuugi/nonmatchings/main", func_80011D84);

void func_80011ED4(void) {
    func_8001DAAC();
    func_8001E180();
    func_80011F14();
    func_80011F84();
    func_80012578();
}

#include "common.h"

void func_80011F14(void) {
    extern M2C_UNK D_80065390[];
    s32 var_s0;

    var_s0 = 0;
    do {
        func_80012C7C(func_80019F30(0x20001, var_s0 + 0xD));
        var_s0 += 1;
    } while (var_s0 < 3);
    func_80012E54(func_80019F30(0x50001, 2));
    func_8001A49C(D_80065390);
}

#include "common.h"

void func_80011F84(void) {
    func_80012A20(func_80019F30(0x50001, 3), 1, 0, 0);
    func_80012A20(func_80019F30(0x50001, 4), 1, 0, 0);
    func_80012A20(func_80019F30(0x50001, 5), 1, 0, 0);
    func_80012A20(func_80019F30(0x50001, 6), 1, 0, 0);
    func_80012A20(func_80019F30(0x50001, 7), 1, 0, 0);
    func_80012A20(func_80019F30(0x50001, 8), 1, 0, 0);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main", func_80012074);
