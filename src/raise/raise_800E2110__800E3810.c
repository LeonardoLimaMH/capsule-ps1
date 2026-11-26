#include "common.h"

typedef struct {
    u8 pad0[0x30];
    struct { u32 unk0:3, unk3:1, unk4:2, unk6:3, unk9:23; } f30;
    struct { u32 unk0:8, unk8:1, unk9:1, unk10:2, unk12:20; } f34;
    struct { u32 unk0:1, unk1:2, unk3:1, unk4:2, unk6:1, unk7:25; } f38;
} Flags_800E3090;



s32 func_800E3810(s32 a0) {
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
    extern s32 func_800B1260(s32), func_800B12D8(s32);
    s32 raw, k, side, ret;
    s32 idx;
    raw = func_800B1260(a0);
    idx = (u16)raw;
    k = func_800B12D8(a0);
    side = a0 != 1;
    switch (a0) {
    case 1:
        if ((u16)k == 0xFFFF) return 1;
        switch (D_800EE9B8[side]) {
        case -1: ret = 1; break;
        case 1:
            ret = 4;
            if (D_80091618[idx].unk90 != 0) ret = 1;
            break;
        case 0:
        default:
            ret = 1;
            if (D_80091618[(u16)raw].unk90 != 0) ret = 4;
            break;
        }
        break;
    case 0:
    default:
        switch (D_800EE9B8[side]) {
        case 1: ret = 4; break;
        case -1:
            ret = 1;
            if (D_80091618[D_80091618[D_8006AF80[0]].unk8A].unk90 != 0) ret = 4;
            break;
        case 0:
        default:
            ret = 4;
            if (D_80091618[(u16)raw].unk90 != 0) ret = 1;
            break;
        }
        break;
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

