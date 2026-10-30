#include "common.h"

void func_8009D568(void) {

}

#include "common.h"

void func_8009D570(void) {
    extern s32 D_800EBDE4[];
    func_8001A49C(0x80113000);
    func_8001A49C(0x80146A18);
    if ((*D_800EBDE4) >= 0xA) {
        func_8001A49C(0x80146A18);
    } else {
        func_800C0C60();
    }
    func_80013668();
    func_8009DAAC();
    func_80012508();
}

#include "common.h"

extern char D_80097BF0[];
extern char D_80097C04[];
extern char D_80097C24[];
extern char D_80097C44[];
extern char D_80097C64[];
extern char D_80097C78[];
void func_8009D5E8(void) {
    extern s32 D_8008EDF0[];
    extern s32 D_800EBDE4[];
    extern s32 D_800EBFF0[];
    extern s32 D_800EBFF4[];
    if ((*D_8008EDF0) & 0x100) {
        func_80012508();
    }
    func_8001DB8C(D_80097BF0, (*D_800EBDE4));
    func_8001DB8C(D_80097C04);
    func_8001DB8C(D_80097C24);
    func_8001DB8C(D_80097C44);
    func_8001DB8C(D_80097C64, (*D_800EBFF0));
    func_8001DB8C(D_80097C78, (*D_800EBFF4));
}

#include "common.h"

void func_8009D678(void) {
    extern M2C_UNK D_800238FC[];
    func_80013668();
    func_80012200(D_800238FC);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009D568", func_8009D6A4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009D568", func_8009DAAC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009D568", func_8009DC78);

void func_8009DDB4(void) {
    func_800BAF7C();
    func_800BAD64(1);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009D568", func_8009DDDC);

void func_8009DED0(void) {
    func_8009DEF8();
}

void func_8009DEF0(void) {

}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009D568", func_8009DEF8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__8009D568", func_8009DFAC);
