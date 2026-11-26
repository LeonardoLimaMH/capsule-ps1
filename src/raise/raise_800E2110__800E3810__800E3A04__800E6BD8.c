#include "common.h"

typedef struct {
    u8 pad0[0x30];
    struct { u32 unk0:3, unk3:1, unk4:2, unk6:3, unk9:23; } f30;
    struct { u32 unk0:8, unk8:1, unk9:1, unk10:2, unk12:20; } f34;
    struct { u32 unk0:1, unk1:2, unk3:1, unk4:2, unk6:1, unk7:25; } f38;
} Flags_800E3090;

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

s32 func_800E6BD8(u16 a0, u16 a1) {
    typedef struct {
        u8 pad0[0xA0];
        u16 unkA0;
        u8 padA2[0xC2 - 0xA2];
        s16 unkC2;
        u8 padC4[0x1A8 - 0xC4];
    } S_80091618;
    typedef struct {
        u8 pad0[0x26];
        s16 unk26;
    } S_801061E0;
    extern S_80091618 D_80091618[];
    extern s16 D_800ED228[][3];
    extern S_801061E0 D_801061E0[];
    extern u32 D_8008ED80[];
    s16 v;
    s32 n;
    float f;

    D_801061E0[a0].unk26 = v = D_800ED228[a1][D_80091618[a0].unkA0];
    switch (v) {
    default: n = 1; break;
    case 0: n = 0; break;
    case 1: n = 1; break;
    case 2: n = 2; break;
    }
    f = (float)n * (float)D_80091618[a0].unkC2 / 255.0f * 100.0f;
    if (f < (float)(D_8008ED80[0] % 100)) {
        return -1;
    }
    return 0;
}
