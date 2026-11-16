#include "common.h"

/* objeto de func_80015B3C: flags em bitfields nos words 0x34/0x38 */
struct Obj_800C523C {
    u8 pad[0x34];
    u32 f34_0 : 7;
    u32 f34_7 : 25;
    u32 f38_0 : 1;
    u32 f38_1 : 3;
    u32 f38_4 : 2;
    u32 f38_6 : 1;
    u32 f38_7 : 25;
    u8 *f3C;
    u8 *f40;
};

void func_800C63AC();
void func_800161C4();
s32 func_800202A4(s32);

void func_800C4FC4();
void func_800AADE0();
void *func_80015B3C();

void func_800C5748();
void func_80015EF8();
s32 func_80019F30(s32, s32);
void func_80015CD0();
s32 func_800A46B8();
void func_800C5748();
void func_80015EF8();
s32 func_80019F30(s32, s32);
void func_80015CD0();
s32 func_800A46B8();

void *func_800C5928(s32 arg0, void *arg1, s32 arg2, s32 arg3) {
    struct Obj {
        u8 pad[0x34];
        u32 f34_0 : 7;
        u32 f34_7 : 25;
        u32 f38_0 : 1;
        u32 f38_1 : 3;
        u32 f38_4 : 2;
        u32 f38_6 : 1;
        u32 f38_7 : 25;
        u8 *f3C;
        void *f40;
        u8 pad2[0x22];
        s16 f66;
        u8 pad3[0x18];
        void *f80;
        s32 f84;
        s32 f88;
        s32 f8C;
    } *o;
    s32 i;
    u8 *piece;
    s16 pos[3];

    piece = (u8 *)arg0 + (arg2 * 0x2E8 + 0x5E8) + (arg3 * 0x7C);
    func_800A46B8(arg0, piece[0x15], piece[0x16], pos);

    for (i = 0; i < 0x1E; i++) {
        o = func_80015B3C(func_800C5748, func_800161C4, 5);
        func_80015EF8(o);
        o->f38_0 = 1;
        func_80015CD0((u8 *)o + 0x14, func_80019F30(0x70013, 0x5C), 0);
        o->f40 = arg1;
        o->f34_0 = i;
        o->f66 = i % 6;
        o->f84 = pos[0];
        o->f88 = pos[1];
        o->f8C = pos[2];
        o->f80 = piece;
    }
    return o;
}

extern u8 D_8008ED68[];
void func_800185F8();

