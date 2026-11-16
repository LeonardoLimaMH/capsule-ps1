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

u8 *func_800C523C(s32 a0, u8 *a1, s32 a2, s32 a3) {
    u8 *o = func_80015B3C(func_800C4FC4, func_800AADE0, 5);
    struct Obj_800C523C *p;
    func_80015EF8(o);
    *(s32 *)(o + 0x7c) = a2;
    *(s32 *)(o + 0x80) = a3;
    *(s32 *)(o + 0x84) = 0;
    *(s32 *)(o + 0x38) |= 1;
    func_8001AA70(o + 0x14, a1 + 0x14, 0x20);
    p = (struct Obj_800C523C *)o;
    p->f40 = a1;
    p->f34_0 = 1;
    p->f38_6 = 1;
    p->f38_4 = 1;
    return o;
}

void func_800C5748();
void func_80015EF8();
s32 func_80019F30(s32, s32);
void func_80015CD0();
s32 func_800A46B8();

extern u8 D_8008ED68[];
void func_800185F8();

