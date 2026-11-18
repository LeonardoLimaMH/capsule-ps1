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

void func_8009B23C(void *arg0) {
    typedef struct {
        u8 pad0[0x13];
        u8 unk13;
        u8 unk14;
        u8 unk15;
        u8 unk16;
        u8 unk17;
        s32 unk18;
        s32 unk1C;
        u8 unk20;
        u8 unk21;
        u8 unk22;
        u8 unk23;
        u8 unk24;
        u8 unk25;
        u8 unk26;
        u8 unk27;
        u8 unk28;
        u8 unk29;
        u8 unk2A;
        u8 unk2B;
        u8 pad2C[2];
        u8 unk2E[0x3C];
        u8 unk6A;
        u8 unk6B[5];
        s32 unk70;
        s32 unk74;
        s32 unk78;
    } Unit5D0_t;

    typedef struct {
        u8 pad0[0xA];
        u8 unkA;
        u8 padB[0x18 - 0xB];
        Unit5D0_t units[2][6];
        s32 unk5E8;
        u8 unk5EC[6];
        u8 unk5F2[6];
        u8 unk5F8[2];
        u8 unk5FA;
        u8 unk5FB[2];
        u8 pad5FD;
        u16 unk5FE;
        u8 unk600;
        u8 unk601[2][2];
        u8 unk605[2];
        u8 pad607;
        u16 unk608;
        u8 unk60A[2];
        u8 unk60C;
        u8 unk60D;
        u8 unk60E;
        u8 unk60F;
        u8 unk610;
        u8 unk611;
        u16 unk612;
        u8 unk614;
        u8 unk615;
        u8 unk616[2];
        u8 unk618;
        u8 unk619;
        u8 unk61A;
        u8 unk61B;
        u8 unk61C;
        u8 unk61D;
        u8 unk61E;
        u8 unk61F;
        u8 unk620[0xB];
        u8 pad62B;
        s32 unk62C;
        u8 unk630[0xA9];
        u8 unk6D9[7];
        u8 unk6E0[0x2B];
        u8 pad70B;
        u8 unk70C[6];
        u8 unk712[4];
        u8 unk716[3];
        u8 unk719[3];
        u8 unk71C[6];
        u8 unk722[0xC];
        u8 pad72E[2];
        u8 unk730[0x48];
        u8 unk778;
        u8 pad779[3];
        s32 unk77C[3];
        s32 unk788;
        s32 unk78C[3];
        s32 unk798[3];
        u8 unk7A4;
        u8 unk7A5[2];
        u8 unk7A7[2];
    } Sub5D0_t;

    typedef struct {
        u8 pad0[0x14];
        s32 unk14;
        u8 pad18[0x5CB - 0x18];
        u8 unk5CB;
        u8 pad5CC[4];
        Sub5D0_t sub5D0;
    } Arg0_t;

    extern void func_8001A998(void *, s32);

    Arg0_t *s5 = (Arg0_t *)arg0;
    Sub5D0_t *s2 = &s5->sub5D0;
    s32 i;
    s32 j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 6; j++) {
            Unit5D0_t *u = &s2->units[i][j];
            u->unk15 = 0;
            u->unk16 = 0;
            u->unk17 = 0;
            u->unk18 = 0;
            u->unk1C = 0;
            u->unk20 = 0;
            u->unk21 = 0;
            u->unk22 = 0;
            u->unk23 = 0;
            u->unk24 = 0;
            u->unk28 = 0;
            u->unk29 = 0;
            u->unk25 = 0;
            u->unk26 = 0;
            u->unk27 = 0;
            u->unk2B = 0;
            u->unk2A = 0;
            u->unk14 = u->unk13;
            func_8001A998(u->unk2E, 0x3C);
            u->unk6A = 0;
            func_8001A998(u->unk6B, 5);
            u->unk70 = 0;
            u->unk74 = 0;
            u->unk78 = 0;
        }
    }

    func_8001A998(s2->unk5EC, 6);
    func_8001A998(s2->unk5F2, 6);
    func_8001A998(s2->unk5F8, 2);
    s2->unk5FE = 0;
    func_8001A998(&s2->unk600, 1);

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            s2->unk601[i][j] = 0;
        }
        s2->unk5FB[i] = 0;
        s2->unk605[i] = 0;
        s2->unk60A[i] = 0;
        s2->unk616[i] = 0;
        s2->unk7A5[i] = 0;
        s2->unk7A7[i] = 0;
    }

    s2->unk608 = 0;
    s2->unk60C = 0;
    s2->unk60D = 0;
    s2->unk60E = 0;
    s2->unk60F = 0;
    s2->unk610 = 0;
    s2->unk611 = 0;
    s2->unk612 = 0;
    s2->unk614 = 0;
    s2->unk615 = 0;
    s2->unk618 = 0;
    s2->unk619 = 0;
    s2->unk61A = 0;
    s2->unk61B = 0;
    s2->unk61C = 0;
    s2->unk61D = 0;
    s2->unk61E = 0;
    s2->unk61F = 0;
    s2->unk5E8 = 0;
    s2->unk5FA = s2->unkA;
    func_8001A998(s2->unk620, 0xB);
    s2->unk62C = 0;
    func_8001A998(s2->unk630, 0xA9);
    func_8001A998(s2->unk6D9, 7);
    func_8001A998(s2->unk6E0, 0x2B);
    func_8001A998(s2->unk70C, 6);
    func_8001A998(s2->unk712, 4);
    func_8001A998(s2->unk716, 3);
    func_8001A998(s2->unk719, 3);
    func_8001A998(s2->unk71C, 6);
    func_8001A998(s2->unk722, 0xC);
    func_8001A998(s2->unk730, 0x48);

    s2->unk778 = 0;
    for (i = 0; i < 3; i++) {
        s2->unk77C[i] = 0;
        s2->unk78C[i] = 0;
        s2->unk798[i] = 0;
    }

    s2->unk788 = 0;
    s2->unk7A4 = 0;
    s5->unk14 = 0;
    s5->unk5CB = 4;
}
