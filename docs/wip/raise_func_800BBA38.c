#include "common.h"

typedef struct Unk8 { s16 v[4]; } Unk8;

typedef struct ObjRes {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ s32 unk4[2];
    /* 0x0C */ s32 unkC;
    /* 0x10 */ s32 unk10[2];
    /* 0x18 */ s32 unk18;
} ObjRes;

typedef struct Obj {
    /* 0x00 */ u8 pad0[0x14];
    /* 0x14 */ s32 unk14;
    /* 0x18 */ s32 unk18;
    /* 0x1C */ s32 unk1C;
    /* 0x20 */ u8 pad20[0x10];
    /* 0x30 */ u32 f30_0 : 3;
               u32 f30_3 : 1;
               u32 f30_4 : 2;
               u32 f30_6 : 3;
               u32 f30_9 : 23;
    /* 0x34 */ s32 unk34;
    /* 0x38 */ u32 f38_0 : 1;
               u32 f38_1 : 3;
               u32 f38_4 : 2;
               u32 f38_6 : 1;
               u32 f38_7 : 25;
    /* 0x3C */ u8 pad3C[0xA];
    /* 0x46 */ s16 unk46;
    /* 0x48 */ s16 unk48;
    /* 0x4A */ s16 unk4A;
    /* 0x4C */ s16 unk4C;
    /* 0x4E */ s16 unk4E;
    /* 0x50 */ u8 pad50[0xB];
    /* 0x5B */ u8 unk5B;
    /* 0x5C */ Unk8 unk5C;
    /* 0x64 */ u8 pad64[2];
    /* 0x66 */ u16 unk66;
    /* 0x68 */ u8 pad68[0x14];
    /* 0x7C */ s32 unk7C;
} Obj;

typedef struct ScreenInfo {
    u8 pad[0x108];
    /* 0x108 */ s32 width;
    /* 0x10C */ s32 height;
} ScreenInfo;

extern ScreenInfo D_8008ED68;
extern void func_800BB814();
extern void func_800161C4();
extern Obj* func_80015B3C();
extern void func_80015EF8();
extern s32 func_80019F30();
extern void func_80015CD0();

Obj* func_800BBA38(s32 arg0, s32 x, s32 y, s32 arg3, u16 arg4, ObjRes* res, s32 arg6, s32 arg7,
                   s32 arg8, s32 arg9, u16 arg10, s32 arg11, Unk8* arg12) {
    Obj* obj;
    s32 tmp;

    obj = func_80015B3C(func_800BB814, func_800161C4, arg0);
    if (obj != NULL) {
        func_80015EF8(obj);
        if (arg7 == 0) {
            func_80015CD0(&obj->unk14, func_80019F30(res->unk0 | 0x70000, tmp = res->unk18 + arg6), 0);
            obj->unk7C = tmp;
        } else {
            tmp = func_80019F30(res->unk0 | 0x60000, res->unkC + arg6);
            obj->unk1C = 0;
            obj->unk18 = tmp;
        }
        obj->unk66 = arg4;
        obj->f30_6 = 0;
        obj->f30_4 = arg10;
        obj->f30_3 = 0;
        obj->unk46 = x - D_8008ED68.width / 2;
        obj->unk4E = arg3;
        obj->unk4A = y - D_8008ED68.height / 2;
        obj->f38_0 = arg8;
        obj->f38_4 = 0;
        obj->f38_6 = arg9;
        obj->unk5B = arg11;
        if (arg11 == 1) {
            obj->unk5C = *arg12;
        }
    }
    return obj;
}
