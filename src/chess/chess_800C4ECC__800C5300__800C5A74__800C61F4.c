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

extern u8 D_8008ED68[];
void func_800185F8();
void func_800C61F4(void *arg0) {
    struct O {
        u8 pad[0x24];
        s16 f24;
        u8 pad2[0x12];
        u32 f38;
        s32 f3C;
        struct O *f40;
        u8 pad3[2];
        u16 f46;
        u8 pad4[2];
        u16 f4A;
        u8 pad5[2];
        u16 f4E;
        u16 f50;
        u16 f52;
        u8 pad6[0x26];
        u16 f7A;
        u8 pad7[8];
        s32 f84;
    } *o = arg0;
    struct O *p;
    u8 *d = D_8008ED68;
    s32 val;
    s32 c;

    val = o->f3C;
    if (d[0x103] >= 2) {
        c = val + d[0x103];
    } else {
        c = val + 1;
    }
    o->f3C = c;
    switch (o->f7A) {
    case 0:
        o->f38 &= ~1;
        o->f7A++;
        break;
    case 1:
        if (o->f24 < 0) {
            func_800185F8(o);
        }
        break;
    }
    o->f46 = o->f40->f46;
    p = o->f40;
    o->f4A = p->f4A - 0x1e;
    o->f4E = p->f4E - 2;
    o->f50 = p->f50;
    o->f52 = p->f52;
    if (o->f84 == 1) {
        o->f50 = (s16)o->f50 / 2;
        o->f52 = (s16)o->f52 / 2;
    }
}

