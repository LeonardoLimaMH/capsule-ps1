#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E2110);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E2558);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E2714);

void func_800E2A98(void) {

}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E2AA0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E2D7C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E3090);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E3260);

#include "common.h"

void func_800E32D0(s32 arg0, s16 *arg1, s16 *arg2) {
    extern s16 D_800F1EE0[];
    (*D_800F1EE0) = 1;
    func_800A4984();
    (*D_800F1EE0) = 0;
    func_80025CEC(arg0, *arg1, *arg2, 1);
    func_80025E54(arg0, *arg1, *arg2);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E334C);

#include "common.h"

void func_800E33E4(s32 arg0, s16 *arg1, s16 *arg2) {
    extern s16 D_800F1EE0[];
    (*D_800F1EE0) = 0;
    func_800A4984();
    func_80025CEC(arg0, *arg1, *arg2, 1);
    func_80025E54(arg0, *arg1, *arg2);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E3450);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E355C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E36E4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E3810);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E3A04);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E3B14);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E3C24);

s32 func_800E3D10(void) {
    return 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E3D18);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E3F38);

#include "common.h"

extern s32 D_800FAE10[];
extern s32 D_800FDE08[];

void func_800E4158(s32 side) {
    s32 other = 1 - side;

    func_800C5850(D_800FDE08[other], D_800FAE10[other], 0, 1, 4);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E41B0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E43AC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E45A8);

void func_800E470C(void) {

}

void func_800E4714(void) {

}

s32 func_800E471C(void) {
    return 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E4724);

void func_800E47D8(void) {
    func_800E4AD0();
}

#include "common.h"

void func_800E47F8(void) {
    extern s16 D_80105990[];
    func_800E4838(1, 1);
    if ((*D_80105990) == 0) {
        func_80015524();
    }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E4838);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E4AD0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E53CC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E5C08);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E6158);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E66A4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E680C);

typedef struct {
    u8 pad[0x1A2];
    u16 timer;
    u8 tail[4];
} Record_800E68D8;
void func_800E68D8(u32 player) {
    extern Record_800E68D8 D_80091618[];
    u32 base = (u32)D_80091618;
    u32 offset = (player & 0xFFFF) * 0x1A8;
    Record_800E68D8 *record = (Record_800E68D8 *)(base + offset);
    record->timer /= 0x18;
    func_800A752C();
    record->timer = 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E6948);

s32 func_800E6A14(void) {
    return 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E6A1C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E6AF4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E6BD8);
