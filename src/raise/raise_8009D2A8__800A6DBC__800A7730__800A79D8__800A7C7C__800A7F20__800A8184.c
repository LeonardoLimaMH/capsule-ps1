#include "common.h"

extern u8 D_800916E8[];
extern s16 D_800EC588[][17];
extern s16 D_800ECB84[][17];

void func_800A8184(u8 *o) {
    struct Obj {
        u8 pad[0x38];
        u32 b0:1;
        u32 pad1:2;
        u32 b3:1;
        u32 pad4:28;
        s32 unk3C;
        u8 pad40[0x10];
        s16 unk50, unk52, unk54;
        u8 pad56[0x1E];
        s16 unk74, unk76, unk78;
    };
    extern s32 D_8008543C, D_8008ED80;
    extern s16 D_800ED8EA, D_800ED8EC;
    extern void func_80013920(void *);
    extern void func_800A847C(void);
    struct Obj *p = (struct Obj *)o;
    u16 t;
    s32 b;
    if (D_8008543C == 0) {
        D_800ED8EA = 0;
        D_800ED8EC = 6;
        func_80013920(o);
    } else {
        t = D_800ED8EA;
        switch (D_800ED8EA) {
        case 0:
            if (p->unk3C != 0) p->unk3C -= 1;
            else {
                D_800ED8EA = t + 1;
                p->unk54 = 0x1000;
                p->b3 = 0;
            }
            break;
        case 1:
            if ((D_8008ED80 & 0xF) == 0) {
                p->b0 ^= 1;
                if (--D_800ED8EC == 0) {
                    b = p->b0;
                    if (b == 1) D_800ED8EC = 1;
                    else {
                        register s32 delta asm("v1") = -0xAA;
                        p->unk54 = 0x1000;
                        p->unk50 = 0x1000;
                        p->unk52 = 0x1000;
                        p->unk3C = 0x18;
                        p->unk78 = delta;
                        p->unk74 = delta;
                        p->unk76 = delta;
                        D_800ED8EA = t + 1;
                        p->b3 = 1;
                    }
                }
            }
            break;
        case 2:
            if (p->unk3C != 0) p->unk3C -= 1;
            else {
                p->b3 = 0;
                p->b0 = 1;
                func_800A847C();
                D_800ED8EA += 1;
            }
            break;
        case 3:
            D_800ED8EA = 0;
            D_800ED8EC = 6;
            func_80013920(o);
            break;
        }
    }
}

