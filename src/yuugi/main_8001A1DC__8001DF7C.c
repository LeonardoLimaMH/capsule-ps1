#include "common.h"
#include "yuugi.h"

void *func_8001DF7C(s32 arg0, s8 *arg1, s32 arg2) {
    s32 var_s0;
    s32 var_v0;
    s8 *var_s2;
    u32 var_s1;

    var_s2 = arg1;
    var_s1 = 0xF0000000;
    var_s0 = 0x1C;
    var_v0 = 8 - arg2;
    if ((var_v0 != 0) && (arg2 != 0)) {
        do {
            var_s1 = var_s1 >> 4;
            var_v0 -= 1;
            var_s0 -= 4;
        } while (var_v0 != 0);
    }
    if (var_s0 != 0) {
loop_4:
        if ((arg2 == 0) && !(arg0 & var_s1)) {
            var_s0 -= 4;
            var_s1 = var_s1 >> 4;
            if (var_s0 != 0) {
                goto loop_4;
            }
        }
        if (var_s0 != 0) {
            do {
                *var_s2 = func_8001E160((u32) (arg0 & var_s1) >> var_s0);
                var_s2 += 1;
                var_s0 -= 4;
                var_s1 = var_s1 >> 4;
            } while (var_s0 != 0);
        }
    }
    *var_s2 = func_8001E160(arg0 & var_s1);
    return var_s2 + 1;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001E044);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001E160);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001E180);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001E1E4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001E208);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001E228);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001E284);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001E2BC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001E310);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001E388);

s32 func_8001E404(void) {
    extern s32 D_8008F6F8[];
    return (*D_8008F6F8);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001E414);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001E4A4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001EA24);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001EC74);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001EEC4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001F160);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001F1A8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001F35C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001F524);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001F7A4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001F8B0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001F8D8);

void func_8001F918(void) {
    func_80012508();
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001F938);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001FA10);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001FAD4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001FB18);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001FC30);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001FD74);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001FD98);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001FDFC);

void func_8001FF48(void) {

}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8001FF50);

void func_80020094(void) {

}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8002009C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_800200F4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_800201D8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_800202A4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_80020304);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_80020364);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_800203DC);

s32 func_80020458(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x5C9) & 1;
}

s32 func_80020464(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x5CA) & 0x10;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_80020470);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_80020578);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_80020688);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_80020844);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_80020A50);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_80020CE4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_80020E50);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_80020EB4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_80020F0C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_80021064);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_800212AC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_800214B0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_80021584);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_80021618);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_80021870);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_80021910);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_80021A4C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_80021A9C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_80021BB4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_80021EA8);

void func_800220B8(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x10) = 0;
    M2C_FIELD(arg0, s16 *, 0x1E) = 0;
    M2C_FIELD(arg0, s8 *, 0x11) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s16 *, 0x1C) = 0;
    M2C_FIELD(arg0, s8 *, 0x12) = 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_800220D4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8002243C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_80022700);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_800227D4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_80022C34);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_80022E64);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_80022F80);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_80023050);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_80023120);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_800231C4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_800232F4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_8002367C);

void func_800238DC(void) {
    func_80020094();
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_800238FC);

void func_8002393C(void) {
    extern s32 D_80078C0C[];
    (*D_80078C0C) = 0;
    func_80012508();
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_80023964);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_80023A90);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_80023ABC);

void func_80023B04(void) {

}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_80023B0C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_80023C00);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_80023C74);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_80023ECC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_80023F68);

void func_80023FD8(void) {

}

void func_80023FE0(void) {

}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_80023FE8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C", func_80024024);
