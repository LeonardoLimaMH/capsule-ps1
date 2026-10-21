#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A1DC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A25C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A270);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A284);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A2AC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A2D4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A2FC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A324);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A34C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A374);

s32 func_8001A39C(s32 arg0) {
    return arg0 & 0xFF;
}

s32 func_8001A3A4(s32 arg0) {
    return arg0 & 0xFF000000;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A3B0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A3D8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A400);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A428);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A434);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A44C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A464);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A480);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A49C);

void func_8001A684(s32 arg0, s32 *arg1, s32 arg2) {
    s32 temp_v1;

    temp_v1 = *arg1;
    if (temp_v1 != 0) {
        *arg1 = temp_v1 + (arg0 - arg2);
        func_8001A6B8();
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A6B8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A704);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A784);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A818);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A8C0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001A998);

s32 func_8001AA44(s32 arg0, s32 arg1) {
    s32 var_a2;
    s32 var_v1;

    var_a2 = 1;
    var_v1 = 0;
    if (arg1 > 0) {
        do {
            var_v1 += 1;
            var_a2 *= arg0;
        } while (var_v1 < arg1);
    }
    return var_a2;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001AA70);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001AB74);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001ABD4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001AD48);

void func_8001AD74(s32 arg0) {
    func_8001ADF8(0, arg0, 2, 1);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001ADA0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001ADCC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001ADF8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001AFA0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001AFDC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001AFF0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001B0E0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001B100);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001B16C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001B1A8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001B484);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001B964);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001BAA0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001BAD8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001BB18);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001BCE4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001BFF4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001C36C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001C5D4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001C864);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001C9D8);

void func_8001CB78(void) {

}

void func_8001CB80(void) {

}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001CB88);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001CB94);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001CDE0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001CE2C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001D230);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001D4FC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001D748);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001D850);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001DAAC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001DADC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001DB54);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001DB68);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001DB8C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001DBF4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001DC44);

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

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001E044);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001E160);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001E180);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001E1E4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001E208);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001E228);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001E284);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001E2BC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001E310);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001E388);

s32 func_8001E404(void) {
    extern s32 D_8008F6F8[];
    return (*D_8008F6F8);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001E414);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001E4A4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001EA24);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001EC74);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001EEC4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001F160);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001F1A8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001F35C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001F524);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001F7A4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001F8B0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001F8D8);

void func_8001F918(void) {
    func_80012508();
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001F938);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001FA10);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001FAD4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001FB18);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001FC30);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001FD74);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001FD98);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001FDFC);

void func_8001FF48(void) {

}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8001FF50);

void func_80020094(void) {

}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8002009C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_800200F4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_800201D8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_800202A4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80020304);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80020364);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_800203DC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80020458);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80020464);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80020470);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80020578);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80020688);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80020844);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80020A50);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80020CE4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80020E50);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80020EB4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80020F0C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80021064);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_800212AC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_800214B0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80021584);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80021618);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80021870);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80021910);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80021A4C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80021A9C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80021BB4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80021EA8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_800220B8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_800220D4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8002243C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80022700);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_800227D4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80022C34);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80022E64);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80022F80);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80023050);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80023120);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_800231C4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_800232F4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_8002367C);

void func_800238DC(void) {
    func_80020094();
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_800238FC);

void func_8002393C(void) {
    extern s32 D_80078C0C[];
    (*D_80078C0C) = 0;
    func_80012508();
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80023964);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80023A90);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80023ABC);

void func_80023B04(void) {

}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80023B0C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80023C00);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80023C74);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80023ECC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80023F68);

void func_80023FD8(void) {

}

void func_80023FE0(void) {

}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80023FE8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC", func_80024024);
