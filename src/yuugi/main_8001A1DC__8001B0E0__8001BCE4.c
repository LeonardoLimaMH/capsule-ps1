#include "common.h"
#include "yuugi.h"

/* prefixos de caminho do memory card (6 bytes, alinhados a 4) */
extern s32 D_80078B94[], D_80078BA8[], D_80078BB0[], D_80078BB8[];
extern s32 D_80078B9C[], D_80078BC0[], D_80078BC8[], D_80078BD0[];

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001B0E0__8001BCE4", func_8001BCE4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001B0E0__8001BCE4", func_8001BFF4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001B0E0__8001BCE4", func_8001C36C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001B0E0__8001BCE4", func_8001C5D4);

extern s32 func_8001CB94(s32);
extern s32 func_8004FF4C(char *);
extern void *memcpy();
s32 func_8001C864(u32 idx) {
    char buf[0x20];
    s32 r;
    switch (idx) {
    case 0:
        memcpy(buf, D_80078B94, 6);
        break;
    case 1:
        memcpy(buf, D_80078BA8, 6);
        break;
    case 2:
        memcpy(buf, D_80078BB0, 6);
        break;
    case 3:
        memcpy(buf, D_80078BB8, 6);
        break;
    case 16:
        memcpy(buf, D_80078B9C, 6);
        break;
    case 17:
        memcpy(buf, D_80078BC0, 6);
        break;
    case 18:
        memcpy(buf, D_80078BC8, 6);
        break;
    case 19:
        memcpy(buf, D_80078BD0, 6);
        break;
    }
    r = func_8001CB94(idx);
    if (r == 3) {
        if (func_8004FF4C(buf) == 0) {
            return 5;
        }
        return -1;
    }
    return r;
}

#include "common.h"

void func_8001C9D8(void) {
    extern s32 D_80078CDC;
    extern s32 D_80078CE0;
    extern s32 D_80078CE4;
    extern s32 D_80078CE8;
    extern s32 D_80078CEC;
    extern s32 D_80078CF0;
    extern s32 D_80078CF4;
    extern s32 D_80078CF8;
    func_8004FEDC();
    D_80078CDC = func_8004FE3C(0xF4000001, 4, 0x2000, 0);
    D_80078CE0 = func_8004FE3C(0xF4000001, 0x8000, 0x2000, 0);
    D_80078CE4 = func_8004FE3C(0xF4000001, 0x100, 0x2000, 0);
    D_80078CE8 = func_8004FE3C(0xF4000001, 0x2000, 0x2000, 0);
    func_8004FE7C(D_80078CDC);
    func_8004FE7C(D_80078CE0);
    func_8004FE7C(D_80078CE4);
    func_8004FE7C(D_80078CE8);
    func_8004FEEC();
    func_8004FF7C(0);
    func_8004FEDC();
    D_80078CEC = func_8004FE3C(0xF0000011, 4, 0x2000, 0);
    D_80078CF0 = func_8004FE3C(0xF0000011, 0x8000, 0x2000, 0);
    D_80078CF4 = func_8004FE3C(0xF0000011, 0x100, 0x2000, 0);
    D_80078CF8 = func_8004FE3C(0xF0000011, 0x2000, 0x2000, 0);
    func_8004FE7C(D_80078CEC);
    func_8004FE7C(D_80078CF0);
    func_8004FE7C(D_80078CF4);
    func_8004FE7C(D_80078CF8);
    func_8004FEEC();
    func_8004FF7C(0);
    InitCARD(1);
    StartCARD();
    func_8004E2AC();
}
