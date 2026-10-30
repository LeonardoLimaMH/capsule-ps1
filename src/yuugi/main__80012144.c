#include "common.h"
#include "yuugi.h"

void func_80012144(s32 arg0) {
    extern s32 D_8008EE30[];
    (*D_8008EE30) = arg0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012144", func_80012150);

s32 func_800121B4(s32 arg0) {
    extern s32 D_8008EE34[];
    (*D_8008EE34) = arg0;
    return 0;
}

#include "common.h"

extern u8 D_8008ED68[];

u8 *func_800121C4(void) {
    M2C_GFIELD(D_8008ED68, s32, 0xC8) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xDC) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xE0) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xDE) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xE2) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xE4) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xE6) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xE8) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xEA) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xEC) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xEE) = 0;
    M2C_GFIELD(D_8008ED68, s32, 0xF8) = 0;
    return D_8008ED68;
}

#include "common.h"

void func_80012200(s32 arg0) {
    extern u8 D_8008ED68[];
    func_80013668();
    M2C_GFIELD(D_8008ED68, s32, 0xCC) = arg0;
    M2C_GFIELD(D_8008ED68, s32, 0xC8) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xDC) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xE0) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xDE) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xE2) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xE4) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xE6) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xE8) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xEA) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xEC) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xEE) = 0;
    M2C_GFIELD(D_8008ED68, s32, 0xF8) = 0;
}

#include "common.h"

extern s32 (*D_800508B4[])(void);
extern u16 D_8008EE48[];

s32 func_80012264(void) {
    return D_800508B4[(*D_8008EE48)]();
}

#include "common.h"

void func_800122A4(void) {
    extern u16 D_8008EE4C[];
    extern int func_80012578();
    switch ((*D_8008EE4C)) {                           /* irregular */
    case 0:
        func_800125D8();
        return;
    case 1:
        if (func_80019654() != 0) {
            func_8001A480(4, 0x80097800);
            func_80019F30(0x110004, func_80012578);
            func_80012578();
        }
        return;
    }
}
