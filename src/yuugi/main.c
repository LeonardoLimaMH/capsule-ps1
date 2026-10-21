#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main", main);

void func_800118BC(void) {
    ResetGraph(0);
    srand(1);
    func_8001A998(__bss_start, 4);
    func_8001C9D8();
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main", func_800118FC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main", func_80011A60);

INCLUDE_ASM("asm/yuugi/nonmatchings/main", func_80011AA4);

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

INCLUDE_ASM("asm/yuugi/nonmatchings/main", func_80011F14);

INCLUDE_ASM("asm/yuugi/nonmatchings/main", func_80011F84);

INCLUDE_ASM("asm/yuugi/nonmatchings/main", func_80012074);
