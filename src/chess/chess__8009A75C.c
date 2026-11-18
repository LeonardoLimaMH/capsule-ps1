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

void func_8009A8B4(u8 *arg0) {
    typedef struct {
        u8 pad0[0xE4];
        u16 unkE4;
    } D8ED68_t;
    typedef struct {
        u8 pad0[0xA];
        u8 unkA;
        u8 padB[0x5FA - 0xB];
        u8 unk5FA;
        u8 pad5FB[0x610 - 0x5FB];
        u8 unk610;
        u8 pad611[0x614 - 0x611];
        u8 unk614;
        u8 unk615;
        u8 unk616;
    } Sub5D0_t;
    extern D8ED68_t D_8008ED68;
    extern u16 D_8008EE48[];
    extern u8 D_8008EE6A[];
    extern void func_8009C278(void *, s32, u16);
    extern void func_800125D8(void);
    extern void func_80012578(void);
    extern void func_8009B814(void *);
    extern void func_8009B948(void *, s32);
    extern void func_8009BAD8(void *);
    extern void func_800ADBE4(void *);
    extern void func_800C9F98(void *);
    extern void func_800A5F2C(void *);
    extern void func_800B0F1C(void *);
    extern void func_8001611C(s32);
    extern void func_800A3758(void *);
    extern void func_800A39AC(void *);
    extern void func_800B0530(void *);
    extern void func_800A5DCC(void *, s32);
    extern void func_800A5CCC(void *, s32);
    extern void func_80012508(void);

    Sub5D0_t *s0 = (Sub5D0_t *)(arg0 + 0x5D0);

    switch (*D_8008EE48) {
    case 0:
        func_8009C278(arg0, 0, D_8008ED68.unkE4);
        func_800125D8();
        if (D_8008ED68.unkE4 >= 5) {
            func_80012578();
        }
        break;
    case 1:
        func_8009C278(arg0, 1, D_8008ED68.unkE4);
        func_800125D8();
        if (D_8008ED68.unkE4 >= 5) {
            func_80012578();
        }
        break;
    case 2:
        func_8009B814(arg0);
        func_80012578();
        break;
    case 3:
        *D_8008EE6A = 2;
        func_80012578();
        break;
    case 4:
        func_8009B948(arg0, 2);
        func_80012578();
        break;
    case 5:
        func_8009B948(arg0, 1);
        func_80012578();
        break;
    case 6:
        func_8009B948(arg0, 0);
        *D_8008EE6A = 0;
        func_80012578();
        break;
    case 7:
        func_8009BAD8(arg0);
        func_80012578();
        break;
    case 8:
        func_800ADBE4(arg0);
        func_80012578();
        break;
    case 9:
        func_800C9F98(arg0);
        s0->unk614 = 0;
        func_80012578();
        break;
    case 10:
        func_800A5F2C(arg0);
        s0->unk610 = 0;
        s0->unk5FA = s0->unkA;
        func_800B0F1C(s0);
        s0->unk615 = 2;
        s0->unk616 = 0xFF;
        func_8001611C(0x1000);
        func_800A3758(arg0);
        func_800A39AC(arg0);
        func_800B0530(arg0);
        func_800A5DCC(arg0, 4);
        func_800A5CCC(arg0, 3);
        func_80012508();
        break;
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009A75C", func_8009AAA4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009A75C", func_8009AC88);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009A75C", func_8009B23C);
