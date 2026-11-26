#include "common.h"

typedef struct {
    u8 pad0[0x30];
    struct { u32 unk0:3, unk3:1, unk4:2, unk6:3, unk9:23; } f30;
    struct { u32 unk0:8, unk8:1, unk9:1, unk10:2, unk12:20; } f34;
    struct { u32 unk0:1, unk1:2, unk3:1, unk4:2, unk6:1, unk7:25; } f38;
} Flags_800E3090;



s32 func_800E36E4(s32 a0) {
    typedef struct {
        u8 pad0[0x8A];
        u16 unk8A;
        u8 pad8C[4];
        u16 unk90;
        u8 pad92[0x1A8 - 0x92];
    } S_80091618;
    extern S_80091618 D_80091618[];
    extern u16 D_8006AF80[];
    extern s32 D_800EE9B8[];
    s32 s = a0 != 1;
    S_80091618 *base = D_80091618;
    S_80091618 *e = &base[D_8006AF80[0]];
    s32 ret;

    if (e->unk8A == 0xFFFF) {
        ret = 1;
    } else if (a0 == 1) {
        if (D_800EE9B8[s] != 0) {
            ret = 4;
            if (e->unk90 != 0) {
                ret = 1;
            }
        } else {
            ret = 1;
            if (e->unk90 != 0) {
                ret = 4;
            }
        }
    } else if (D_800EE9B8[s] != 0) {
        ret = 1;
        if (base[e->unk8A].unk90 != 0) {
            ret = 4;
        }
    } else {
        ret = 4;
        if (base[e->unk8A].unk90 != 0) {
            ret = 1;
        }
    }
    return ret;
}

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

