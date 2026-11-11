#include "common.h"

/* fila circular de 32 entradas usada por func_800C0BC8 */
typedef struct {
    s32 unk0;
    u16 idx;
    u16 cnt;
    s16 unk8;
    s16 a[32];
    s16 b[32];
    s16 c[32];
} D_80100E60_t;

extern D_80100E60_t D_80100E60;
extern u8 D_80100F38[];
s32 func_800B1260(s32);
s32 func_800E1820(s32);
s32 func_800E17F8(s32);
void func_800C0EE8(s32, s16, s16);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C0898", func_800C0898);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C0898", func_800C0BC8);

void func_800C0C40(void) {
    func_800C0C98();
}

void func_800C0C60(void) {
    func_800C0CF0();
    func_800C0D48();
    func_800C0DD4();
    func_800C0C98();
}

#include "common.h"

void func_800C0C98(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        func_80012A20(func_80019F30(0x2000E, var_s0 + 0xF), 1, 0, 0);
        var_s0 += 1;
    } while (var_s0 < 6);
}

#include "common.h"

void func_800C0CF0(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        func_80012A20(func_80019F30(0x5000F, var_s0), 1, 0, 0);
        var_s0 += 1;
    } while (var_s0 < 0xA);
}

#include "common.h"

void func_800C0D48(void) {
    s32 var_s0;
    s32 var_s0_2;

    var_s0 = 0;
    do {
        func_80012A20(func_80019F30(0x2000F, var_s0), 1, 0, 0);
        var_s0 += 1;
    } while (var_s0 < 0x1C);
    var_s0_2 = 0;
    do {
        func_80012A20(func_80019F30(0x2000E, var_s0_2 + 0x1A), 1, 0, 0);
        var_s0_2 += 1;
    } while (var_s0_2 < 5);
}

void func_800C0DD4(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        func_800284C8(0xF, var_s0);
        var_s0 += 1;
    } while (var_s0 < 0xA);
}

void func_800C0E14(void) {

}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C0898", func_800C0E1C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C0898", func_800C0EE8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800C0898", func_800C1010);

#include "common.h"

extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

extern u8 D_800F170C[];

s32 func_800C1280(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    return (*(s32 (**)(s32, s32))(D_800F170C + **(u8 **)(p + 0x2C4) * 4))(a0, a1);
}

#include "common.h"

extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

s32 func_800C1310(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    return P32(0x2BC);
}
