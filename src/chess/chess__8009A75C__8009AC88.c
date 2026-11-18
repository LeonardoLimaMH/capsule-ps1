#include "ghidra.h"
#include "matching.h"
#include "common.h"

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009A75C__8009AC88", func_8009AC88);

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
