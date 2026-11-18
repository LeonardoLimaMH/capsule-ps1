#include "ghidra.h"
#include "matching.h"
#include "common.h"

void func_8009A75C(s32 arg0) {
    typedef struct {
        u8 pad0[0x14];
        u8 unk14[2];
    } Sub5D0_t;
    extern u16 D_8008EE48[];
    extern int func_80012578();
    extern int func_80012508();
    extern int func_8001A480();
    extern int func_80019F30();
    extern int func_8001AA70();
    s32 temp_s0;
    s32 var_s2;
    s32 var_s3;
    Sub5D0_t *temp_s4;

    var_s2 = 0;
    temp_s4 = (Sub5D0_t *)((u8 *)arg0 + 0x5D0);
    switch ((s32)*D_8008EE48) {
    case 0:
        var_s3 = 0;
        for (var_s2 = 0; var_s2 < 2; var_s2++) {
            if (temp_s4->unk14[var_s2] == 0xFF) {
                func_80012578();
            } else if (var_s2 == 1 && temp_s4->unk14[0] == temp_s4->unk14[1]) {
                func_80012578();
                break;
            } else {
                temp_s0 = temp_s4->unk14[var_s2] + 5;
                func_8001A480(temp_s0, var_s3 + 0x8011AA80);
                func_80019F30(temp_s0 | 0x110000, func_80012578);
            }
            var_s3 += 0x980;
        }
        func_80012578();
        break;
    case 1:
    case 2:
        break;
    case 3:
        if (temp_s4->unk14[0] == temp_s4->unk14[1]) {
            func_8001AA70(0x8011B400, 0x8011AA80, 0x980);
        }
        func_80012508();
        break;
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009A75C", func_8009A8B4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009A75C", func_8009AAA4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009A75C", func_8009AC88);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009A75C", func_8009B23C);
