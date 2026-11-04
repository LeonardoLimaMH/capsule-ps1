#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0__8002CC2C", func_8002CC2C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0__8002CC2C", func_8002CC74);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0__8002CC2C", func_8002CD50);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0__8002CC2C", func_8002CEC0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0__8002CC2C", func_8002D48C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0__8002CC2C", func_8002DA58);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0__8002CC2C", func_8002E160);

#include "common.h"

void func_8002E2AC(void) {
    extern s16 D_80085434[];
    extern u16 D_8008EE44[];
    extern M2C_UNK D_80099394[];
    extern int func_80012508();
    switch ((*D_8008EE44)) {                           /* irregular */
    case 0:
        func_80033974(0x8000);
        func_80013668();
        func_80012508();
        return;
    case 1:
        func_8001A480(4, 0x80097800);
        func_80019F30(0x110004, func_80012508);
        (*D_80085434) = 0;
        func_80012508();
        return;
    case 2:
        func_8001FD98(4);
        return;
    case 3:
        if (func_8001FD98(4) != 0) {
            func_80012200(D_80099394);
        }
        return;
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0__8002CC2C", func_8002E38C);

void func_8002E4D0(void) {
    extern s8 D_80085428[];
    extern u8 D_8008ED68[], D_800105D4[];
    extern u8 D_80099C08[], D_8009A1D4[], D_8009C970[], D_800A8CAC[];
    extern int func_80012508();
    u8 *p = D_8008ED68;
    register u8 *dest asm("a0");
    func_8001DB8C(D_800105D4, *(u16 *)(p + 0xDC));
    switch (*(u16 *)(p + 0xDC)) {
    case 0:
        func_80033974(0x8000);
        *D_80085428 = 3;
        func_80013668();
        func_80012508();
        return;
    case 1:
        func_8001A480(4, 0x80097800);
        func_80019F30(0x110004, func_80012508);
        func_80012508();
        return;
    case 2:
        if (*(u32 *)(p + 0xA18) < 2U) {
            if (*(u32 *)(p + 0xA18) == 1 && (*(s32 *)(p + 0xA14) & 1)) {
                func_8001FD98(3);
                return;
            }
            func_8001FD98(4);
        }
        return;
    case 3:
        if (*(u32 *)(p + 0xA18) == 1)
            dest = D_8009A1D4;
        else if (*(u32 *)(p + 0xA18) == 2)
            dest = D_800A8CAC;
        else if (*(u32 *)(p + 0xA18) >= 3U)
            dest = D_8009C970;
        else
            dest = D_80099C08;
        func_80012200(dest);
        break;
    }
}

#include "common.h"

void func_8002E640(void) {
    extern s16 D_80085434[];
    extern u16 D_8008EE44[];
    extern M2C_UNK D_800AA020[];
    extern int func_80012508();
    func_800152C8();
    switch ((*D_8008EE44)) {                           /* irregular */
    case 0:
        func_80013668();
        func_8001611C(0x1000);
        func_80012508();
        return;
    case 1:
        func_8001A480(4, 0x80097800);
        func_80019F30(0x110004, func_80012508);
        (*D_80085434) = 0;
        func_80012508();
        return;
    case 3:
        func_80012200(D_800AA020);
        /* fallthrough */
    case 2:
        return;
    }
}
