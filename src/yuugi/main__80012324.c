#include "common.h"
#include "yuugi.h"

void func_80012324(void) {

}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012324", func_8001232C);

#include "common.h"

#include "ghidra.h"
void func_80012394(void)

{
    extern M2C_UNK D_800508C0[];
    extern u16 D_8008EE48[];
  (*(code *)(D_800508C0)[(*D_8008EE48)])();
  return;
}

void func_800123D4(void) {
    extern u16 D_8008EE4C[];
    extern int func_80011ED4();
    switch ((*D_8008EE4C)) {                           /* irregular */
    case 0:
        func_800125D8();
        return;
    case 1:
        func_80019F30(1, &func_80011ED4);
        func_80012578();
        return;
    }
}

void func_80012430(void) {

}

#include "common.h"

void func_80012438(void) {
    extern u16 D_8008EE4C[];
    switch ((*D_8008EE4C)) {                           /* irregular */
    case 0:
        func_8002009C(0);
        func_800125D8();
        return;
    case 1:
        if (func_80019654() != 0) {
            func_80012578();
        }
        return;
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012324", func_800124A0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012324", func_80012508);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012324", func_80012544);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012324", func_80012578);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012324", func_800125AC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012324", func_800125D8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012324", func_80012604);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012324", func_80012628);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012324", func_8001264C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012324", func_80012668);

#include "common.h"

typedef struct {
    u8 pad[0xEC];
    s16 a;
    s16 b;
} Rec_8008ED68;

void func_80012684(s16 value) {
    extern u8 D_8008ED68[];
    Rec_8008ED68 *p = (Rec_8008ED68 *)D_8008ED68;
    p->a = value;
    p->b = 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012324", func_80012698);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012324", func_800126F8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012324", func_80012764);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012324", func_80012778);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012324", func_800127AC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012324", func_800127F4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012324", func_80012868);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012324", func_800129DC);
