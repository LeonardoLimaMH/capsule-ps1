#include "common.h"

/* registro de 0x79C bytes; o campo 0x798 é lido como palavra ou como byte */
typedef struct {
    u8 _p0[0x2BC];
    s32 unk_2BC;
    u8 _p2C0[0x64];
    s16 unk_324;
    u16 unk_326;
    s16 unk_328;
    u8 _p32A[0x1A];
    s16 unk_344;
    u8 _p346[0x452];
    union {
        u32 w;
        u8 b;
    } f_798;
} S_80100F38;

typedef struct {
    u8 pad_0[0x10];
    u16 unk_10;
    u8 pad_12[0x7E];
    u16 unk_90;
    u8 pad_92[0x116];
} Slot_80091618;
extern S_80100F38 D_80100F38[];

typedef struct {
    u8 pad[0x8B];
    u8 grid[2][8][8];
} S_800EFF58;

typedef struct {
    u8 _p0[0x64];
    s32 f_64;
    s32 f_68;
    s32 f_6C;
    s32 f_70;
} Struct_80069E4C;

typedef struct {
    u8 _p0[0x54];
    s32 f_54;
    u8 _p58[0xE0 - 0x58];
    s32 f_E0;
} Struct_80069AD4;


typedef struct { u8 pad[0x386]; s16 field; u8 tail[0x414]; } Record_800D2894;

void func_800D5658(s32 arg0) {
    register s32 a1 asm("a1") = arg0;
    extern u8 D_8008ED68[];
    extern void func_800D5C80(u32, s32, s32, s32);
    u8 *s1 = D_8008ED68;
    u8 *s0 = (u8 *)D_80100F38 + (a1 & 0xFFFF) * 0x79C;
    s32 s3a0;
    s32 val;
    if (*(s16 *)(s0 + 0x39C) == 0) return;
    if (s1[0x99A] == 0) {
        register s32 one asm("v1") = 1;
        s3a0 = *(s16 *)(s0 + 0x3A0);
        if (*(s16 *)(s0 + 0x39E) == one) val = s3a0 + 2;
        else val = s3a0 - 2;
        s3a0 = (s16)val;
        *(s16 *)(s0 + 0x3A0) = val;
        if (s3a0 >= 0x32) {
            if (s3a0 < 0x51) goto clamp_done;
            val = 0x50;
        } else {
            val = 0x32;
        }
        *(s16 *)(s0 + 0x3A0) = val;
    }
clamp_done:
    func_800D5C80(a1 & 0xFFFF, *(s16 *)(s0 + 0x3A4), *(s16 *)(s0 + 0x3A6), 3);
    if (s1[0x99A] == 0) {
        if (*(s16 *)(s0 + 0x39E) == 1) {
            if (*(s16 *)(s0 + 0x3A0) == 0x50) *(s16 *)(s0 + 0x39E) = 0;
        } else if (*(s16 *)(s0 + 0x3A0) == 0x32) *(s16 *)(s0 + 0x39E) = 1;
    }
}

void func_800D577C(s32 a0, s32 a1) {
    extern u8 D_8008ED68[];
    extern void func_800D0730(s16 *, s32, s32, s32);
    extern void func_800D6960(void *, s32, s32, s32);
    s16 v[4];
    u8 *p;
    s16 i;

    D_8008ED68[0x102] = 2;
    p = (u8 *)D_80100F38 + (u16)a0 * 0x79C;
    *(u16 *)(p + 0x396) = 1;
    *(u16 *)(p + 0x398) = a1;
    func_800D0730(v, (s16)(*(u16 *)(p + 0x332) - 1), (s16)(*(u16 *)(p + 0x334) - 1), 0);
    *(u16 *)(p + 0x3A4) = v[0];
    *(u16 *)(p + 0x3A6) = v[2];
    func_800D6960(p + 0x20, 0xA0, 0xA0, 0x10);
    func_800D6960(p + 0x24, 0xC0, 0x90, 0x20);
    func_800D6960(p + 0x30, 0xC0, 0x90, 0x20);
    func_800D6960(p + 0x34, 0xE0, 0x80, 0x40);
    func_800D6960(p + 0x40, 0xE0, 0x80, 0x40);
    func_800D6960(p + 0x44, 0x80, 0x80, 0x70);
    func_800D6960(p + 0x50, 0x80, 0x80, 0x70);
    func_800D6960(p + 0x54, 0x20, 0xE0, 0x70);
    func_800D6960(p + 0x60, 0x20, 0xE0, 0x70);
    func_800D6960(p + 0x64, 0x30, 0xF0, 0x40);
    func_800D6960(p + 0x70, 0x30, 0xF0, 0x40);
    func_800D6960(p + 0x74, 0xC0, 0x40, 0xD0);
    func_800D6960(p + 0x80, 0xC0, 0x40, 0xD0);
    func_800D6960(p + 0x84, 0x80, 0x60, 0xE0);
    func_800D6960(p + 0x90, 0x80, 0x60, 0xE0);
    func_800D6960(p + 0x94, 0xA0, 0xA0, 0x10);
    if (*(s32 *)(D_8008ED68 + 0x18) & 1) {
        register s32 offset asm("s0");
        i = 0;
        do {
            u8 *q;
            if (i & 1) {
                offset = i * 16 + 0x20;
                q = p + offset;
                func_800D6960(q + 8, 0xC0, 0x20, 0x40);
                func_800D6960(q + 0xC, 0xD0, 0x20, 0x20);
            } else {
                offset = i * 16 + 0x20;
                q = p + offset;
                func_800D6960(q + 0xC, 0xC0, 0x20, 0x40);
                func_800D6960(q + 8, 0xD0, 0x20, 0x20);
            }
            i++;
        } while (i < 8);
    } else {
        register s32 offset asm("s0");
        i = 0;
        do {
            u8 *q;
            if (i & 1) {
                offset = i * 16 + 0x20;
                q = p + offset;
                func_800D6960(q + 8, 0xC0, 0x90, 0x20);
                func_800D6960(q + 0xC, 0xA0, 0xA0, 0x10);
            } else {
                offset = i * 16 + 0x20;
                q = p + offset;
                func_800D6960(q + 0xC, 0xC0, 0x90, 0x20);
                func_800D6960(q + 8, 0xA0, 0xA0, 0x10);
            }
            i++;
        } while (i < 8);
    }
}
