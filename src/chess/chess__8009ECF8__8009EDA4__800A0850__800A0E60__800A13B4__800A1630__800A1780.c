#include "ghidra.h"
#include "matching.h"
#include "common.h"

typedef struct {
    u8 unk_0x00[0x34];
    u32 unk_0x34 : 7;
    u32 : 25;
    u32 unk_0x38_0 : 1;
    u32 : 31;
} Obj800A1780Flags;

void *func_800A1780(void) {
    extern u16 D_8008EE4C[];
    extern void func_800161C4();
    extern void func_800A13B4();
    extern void func_800A1630();
    extern void func_800A2D38();
    extern void *func_80015B3C(void (*)(), void (*)(), s32);
    extern void func_80015EF8(void *);
    extern s32 func_80019F30(s32, s32);
    register void *obj asm("s5");
    register void *first asm("s4");
    register s32 y asm("s0");

    obj = func_80015B3C(&func_800A13B4, &func_800161C4, 2);
    func_80015EF8(obj);
    ((Obj800A1780Flags *)obj)->unk_0x38_0 = 1;
    M2C_FIELD(obj, s32 *, 0x18) = func_80019F30(0x60013, 0);
    M2C_FIELD(obj, s16 *, 0x46) = -0xC2;
    M2C_FIELD(obj, s16 *, 0x4A) = -0xA2;
    M2C_FIELD(obj, s16 *, 0x6A) = 2;
    M2C_FIELD(obj, s16 *, 0x6E) = 2;
    M2C_FIELD(obj, s16 *, 0x4E) = 4;
    first = obj;
    obj = func_80015B3C(&func_800A2D38, &func_800161C4, 2);
    func_80015EF8(obj);
    ((Obj800A1780Flags *)obj)->unk_0x38_0 = 1;
    M2C_FIELD(obj, s32 *, 0x18) = func_80019F30(0x60013, 1);
    M2C_FIELD(obj, s16 *, 0x46) = -0x48;
    y = -0x28;
    M2C_FIELD(obj, s16 *, 0x4A) = y;
    M2C_FIELD(obj, s16 *, 0x4E) = 4;
    ((Obj800A1780Flags *)obj)->unk_0x34 = 0;
    obj = func_80015B3C(&func_800A2D38, &func_800161C4, 2);
    func_80015EF8(obj);
    M2C_FIELD(obj, s16 *, 0x4E) = 3;
    M2C_FIELD(obj, s16 *, 0x4A) = y;
    ((Obj800A1780Flags *)obj)->unk_0x38_0 = 1;
    ((Obj800A1780Flags *)obj)->unk_0x34 = 1;
    obj = func_80015B3C(&func_800A1630, &func_800161C4, 2);
    func_80015EF8(obj);
    M2C_FIELD(obj, s16 *, 0x4E) = 4;
    ((Obj800A1780Flags *)obj)->unk_0x38_0 = 1;
    M2C_FIELD(obj, s32 *, 0x7C) = *D_8008EE4C;
    return first;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4__800A0850__800A0E60__800A13B4__800A1630__800A1780", func_800A1924);

void func_800A1BD4(s32 arg0, u8 *arg1) {
    typedef struct {
        u8 pad[3];
        u8 f3;
    } BoardCell;
    typedef struct {
        u8 pad[0x2D];
        u8 f2D;
        u8 f2E;
        u8 f2F;
        u8 pad2[0x7C - 0x30];
    } Unit;
    typedef struct {
        Unit units[2][6];
    } UnitsBlock;
    extern struct {
        BoardCell (*board)[13];
        u8 pad[0x30];
    } D_801010B0[];
    extern void func_8001A998(void *, s32);
    BoardCell (*board)[13];
    s32 i;
    s32 j;

    board = D_801010B0[arg1[9]].board;
    func_8001A998(arg1 + 0x6D9, 7);

    for (i = 0; i < 13; i++) {
        for (j = 12; j >= 0; j--) {
            board[i][j].f3 = 0;
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 6; j++) {
            ((UnitsBlock *)arg1)->units[i][j].f2D = 0;
            ((UnitsBlock *)arg1)->units[i][j].f2E = 0;
            ((UnitsBlock *)arg1)->units[i][j].f2F = 0;
        }
    }
}
