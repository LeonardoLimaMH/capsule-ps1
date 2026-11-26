#include "common.h"

typedef struct {
    u8 pad0[0x30];
    struct { u32 unk0:3, unk3:1, unk4:2, unk6:3, unk9:23; } f30;
    struct { u32 unk0:8, unk8:1, unk9:1, unk10:2, unk12:20; } f34;
    struct { u32 unk0:1, unk1:2, unk3:1, unk4:2, unk6:1, unk7:25; } f38;
} Flags_800E3090;



#include "gte_inline.h"

extern u8 D_800900C0[], D_8008ED68[];
extern s32 func_800E3810(s32);
extern void PushMatrix(void), PopMatrix(void);
extern void func_8002CEC0(void *);
extern s32 RotTransPers(void *, s32 *, s32 *, s32 *);


extern u8 D_800900C0[], D_8008ED68[], D_80063940[], D_80100F38[];
extern s16 D_800F1A68[];
extern void PushMatrix(void), PopMatrix(void), func_8002CEC0(void *);


extern s32 D_800FAE10[];
extern s32 D_800FDE08[];



typedef struct {
    u8 pad[0x1A2];
    u16 timer;
    u8 tail[4];
} Record_800E68D8;

void func_800E6AF4(u16 a0, u16 a1) {
    typedef struct {
        u8 pad0[0xD2];
        s16 unkD2[12];
        u8 padEA[0xEE - 0xEA];
        s16 unkEE;
        u8 padF0[0x1A8 - 0xF0];
    } S_80091618;
    extern S_80091618 D_80091618[];
    extern s16 D_800ECBEC[][17];
    s16 *p = &D_80091618[a0].unkD2[0];
    s32 i = 2;
    register s32 end asm("t0") = 16;
    S_80091618 *e = &D_80091618[a0];
    s32 idx = a1;
    register s16 (*tbl)[17] asm("v1") = D_800ECBEC;
    s16 *row = tbl[idx];
    s16 *q = row + 2;
loop:
    if (i != end || e->unkEE != 0) {
        *p += *q;
    }
    if (*p < 0) {
        *p = 0;
    } else if (i >= 13) {
        if (*p > 100) *p = 100;
    } else if (*p > 255) {
        *p = 255;
    }
    q++;
    i++;
    p++;
    if (i < 17) goto loop;
}

