#include "common.h"
#include "yuugi.h"


extern u8 D_80085428[];
extern s32 D_8008F6B8[];


extern s32 func_8001F1A8(s16, s16, s32, s32, s32, s32, s32, s32, s32);



extern u8 D_8008F702[];
extern u32 D_800922D8[];
extern void func_80033450();
extern s32 func_800185F8();

/* o valor em v0 na saída é o que sobra nos registradores do original (no caso 0, o
   endereço lido da tabela de saltos) */


extern u8 *func_80015B3C();
extern s32 func_8001A434();
extern void func_8003350C();
extern void func_800161C4();
extern u8 D_80065390[];


extern u8 *func_80015B3C();
extern s32 func_8001A44C();
extern void func_8003350C();
extern void func_800161C4();
extern u8 D_80065390[];

void func_80033100(void *arg0, s32 arg1, u8 arg2) {
    typedef struct {
        u8 pad0[0x2B];
        u8 unk2B;
        u8 pad2C[0x50];
    } Etc33100_Item;
    typedef struct {
        u8 pad0[0x5E8];
        Etc33100_Item unk5E8[2][6];
    } Etc33100_Ctx;
    typedef struct {
        u8 pad0[0x14];
        u8 unk14[0x14];
        s16 unk28;
        s16 unk2A;
        u8 pad2C[4];
        u32 unk30;
        u32 unk34;
        u32 unk38;
        u8 pad3C[0xA];
        s16 unk46;
        s16 unk48;
        s16 unk4A;
        s16 unk4C;
        s16 unk4E;
        u8 pad50[0x1A];
        s16 unk6A;
        u8 pad6C[0x10];
        s32 unk7C;
        s32 unk80;
    } Obj33100;
    extern u8 D_800981F0[];
    extern u8 D_800ACF80[];
    extern u16 D_800AD55C[];
    extern s32 func_80097AF0();
    extern s32 func_80019F30();
    register Etc33100_Ctx *ctx asm("s7") = (Etc33100_Ctx *)arg0;
    register u8 r_arg2 asm("s6") = arg2;
    s32 side;
    s32 i;
    s32 y;
    Obj33100 *obj;
    s32 tex;
    for (side = 0; side < 2; side++) {
        i = 5;
        y = 0xA0;
        do {
            if (ctx->unk5E8[side][i].unk2B != 1) {
                obj = (Obj33100 *)func_80015B3C(D_800ACF80, D_800981F0, arg1);
                obj->unk30 = (obj->unk30 & ~0x30) | 0x10;
                func_80015EF8(obj);
                obj->unk4E = 3;
                obj->unk4A = (i >> 1) * 0x38 - 0x18;
                obj->unk7C = side;
                obj->unk80 = i;
                {
                    register u32 f30 asm("a0") = obj->unk30;
                    u32 f34 = obj->unk34;
                    obj->unk30 = (f30 & ~0x1C0) | 0x40;
                    obj->unk34 = f34 & ~0x7F;
                }
                if (side != 0) {
                    if (i & 1) {
                        obj->unk46 = 0xC8;
                    } else {
                        obj->unk46 = 0x100;
                    }
                } else {
                    if (i & 1) {
                        obj->unk46 = -0x100;
                    } else {
                        obj->unk46 = -0xC8;
                    }
                }
                if (side != 0) {
                    obj->unk6A = -2;
                } else {
                    obj->unk6A = 2;
                }
                obj->unk38 |= 8;
                tex = func_80097AF0(ctx, side, i);
                if (side == r_arg2) {
                    s32 tx;
                    register s32 ty asm("v1");
                    register s32 offset asm("v1");
                    func_80015CD0(obj->unk14, func_80019F30(tex | 0x70000, 0x1C), 0);
                    offset = D_800AD55C[0];
                    tx = 0x280 - offset;
                    obj->unk28 = tx;
                    ty = side << 7;
                    ty -= D_800AD55C[1];
                    tx -= 0xC0;
                    obj->unk28 = tx + y;
                    obj->unk2A = ty;
                } else {
                    func_80015CD0(obj->unk14, func_80019F30(tex | 0x70000, 0), 0);
                }
            }
            y -= 0x20;
            i--;
        } while (i >= 0);
    }
}



extern u8 D_800922F0[];

extern void func_800371A4(), func_8003CD70(), func_8003CE14(), func_8003CA90();
extern void func_80033BD0(), SpuSetKey(), func_80036DB0();
extern s32 func_8003D518();

