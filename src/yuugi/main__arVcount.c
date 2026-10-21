#include "common.h"
#include "yuugi.h"

void GsClearVcount(void) {
    ResetRCnt(0xF2000001);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80013350);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800133A4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800133C4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80013440);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800134BC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800135A8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80013668);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800136C8);

void func_80013920(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80013928);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80013A68);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80013B84);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80013C14);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80013C44);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80013C6C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80013DFC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800142E4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80014728);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80014C4C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80014D30);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80014DD8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80014EE0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800152C8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800154C4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80015524);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80015540);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800158C4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80015944);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80015A0C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80015A74);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80015B00);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80015B3C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80015B74);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80015BE8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80015C2C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80015CD0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80015D14);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80015E60);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80015EF8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_8001602C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800160B0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800160D4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800160F8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_8001611C);

void func_80016148(void *arg0) {
    extern u8 D_8008F702[];
    if ((*D_8008F702) == 0) {
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) + M2C_FIELD(arg0, s32 *, 0x68));
        M2C_FIELD(arg0, s32 *, 0x48) = (s32) (M2C_FIELD(arg0, s32 *, 0x48) + M2C_FIELD(arg0, s32 *, 0x6C));
        M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (M2C_FIELD(arg0, s32 *, 0x4C) + M2C_FIELD(arg0, s32 *, 0x70));
        M2C_FIELD(arg0, u16 *, 0x54) = (u16) (M2C_FIELD(arg0, u16 *, 0x54) + M2C_FIELD(arg0, u16 *, 0x78));
        M2C_FIELD(arg0, u16 *, 0x50) = (u16) (M2C_FIELD(arg0, u16 *, 0x50) + M2C_FIELD(arg0, u16 *, 0x74));
        M2C_FIELD(arg0, u16 *, 0x52) = (u16) (M2C_FIELD(arg0, u16 *, 0x52) + M2C_FIELD(arg0, u16 *, 0x76));
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800161C4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800178F8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80017CA4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80018440);

void func_800185F8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}

void func_80018600(void) {

}

void func_80018608(void) {

}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80018610);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800186E4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800187E8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800188F0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80018C00);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80018EF4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80018F90);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80019088);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800190F4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80019654);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_800196A0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80019C20);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80019C58);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80019CB8);

void func_80019D38(s32 arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg2, s32 *, 0) = arg1;
    M2C_FIELD(arg2, s32 *, 4) = (s32) (arg0 & 0xFFFF);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80019D48);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80019D7C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80019DB4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount", func_80019E1C);
