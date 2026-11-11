#include "common.h"
#include "yuugi.h"

typedef struct {
    u8 b[6];
} Blk6;

extern Blk6 D_80078B94, D_80078BA8, D_80078BB0, D_80078BB8;
extern Blk6 D_80078B9C, D_80078BC0, D_80078BC8, D_80078BD0;

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001B0E0__8001BCE4", func_8001BCE4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001B0E0__8001BCE4", func_8001BFF4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001B0E0__8001BCE4", func_8001C36C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001B0E0__8001BCE4", func_8001C5D4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001B0E0__8001BCE4", func_8001C864);

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
