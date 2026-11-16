#include "common.h"


/* objeto de peça usado por func_80100AF4 */
typedef struct {
    u8 _p0[0x18];
    s32 f18;
    u8 _p1[0x1C];
    s32 f38;
    u8 _p2[0x1C];
    u8 f58;
    u8 f59;
    u8 f5A;
} S80100AF4;

extern void func_80012578();

void func_80100618(void) {
    extern s32 D_8011976C[];
    extern s32 D_80119770[];
    extern s32 D_80119774[];
    extern s32 D_80119778[];
    extern void func_80100968();
    extern void func_80100AF4(S80100AF4 *);
    s32 i;
    register void *p asm("t0");
    register void *q asm("t0");
    i = 0;
loop:
    func_80012A20(func_80019F30(0x2000A, i + 5), 1, 0, 0);
    func_80012A20(func_80019F30(0x2003E, i + 4), 1, 0, 0);
    func_80012A20(func_80019F30(0x5003E, i), 1, 0, 0);
    i++;
    if (i < 3) goto loop;
    func_80012A20(func_80019F30(0x2000A, 0x10), 1, 0, 0);
    func_80012A20(func_80019F30(0x5000A, 0), 1, 0, 0);
    func_80012A20(func_80019F30(0x5000A, 2), 1, 0, 0);
    p = func_80032DB0(0, 0x18, 4, 0xA, 0x28, func_80100968);
    M2C_FIELD(p, s16 *, 0x6E) = -4;
    M2C_FIELD(p, s16 *, 0x74) = 9;
    M2C_FIELD(p, s8 *, 0x5A) = 0;
    M2C_FIELD(p, s8 *, 0x59) = 0;
    M2C_FIELD(p, s8 *, 0x58) = 0;
    M2C_FIELD(p, s32 *, 0x38) &= ~8;
    q = func_80032DB0(0, 0x18, 3, 0xA, 0x2B, func_80100AF4);
    M2C_FIELD(q, s8 *, 0x5A) = 0;
    M2C_FIELD(q, s8 *, 0x59) = 0;
    M2C_FIELD(q, s8 *, 0x58) = 0;
    *D_80119774 = 0;
    *D_80119770 = 0;
    *D_80119778 = 0;
    *D_8011976C = 0xD0;
    func_80012508();
}


