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
    u8 _p346[0x40];
    s16 unk_386;
    u8 _p388[0x410];
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
    u8 pad_92[0xFA];
    s32 unk_18C;
    u8 pad_190[0x18];
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

void func_800D5538(s32 arg0) {
    register s32 a1 asm("a1") = arg0;
    extern u8 D_8008ED68[];
    extern void func_800D613C(u32, s32, s32, s32);
    u8 *s1 = D_8008ED68;
    u8 *s0 = (u8 *)D_80100F38 + (a1 & 0xFFFF) * 0x79C;
    s32 s390;
    register s32 val asm("v1");
    if (*(s16 *)(s0 + 0x396) == 0) return;
    if (s1[0x99A] == 0) {
        register s32 one asm("v1") = 1;
        register s32 t asm("v0");
        s390 = *(s16 *)(s0 + 0x390);
        if (*(s16 *)(s0 + 0x398) == one) val = s390 + 4;
        else val = s390 - 4;
        t = (s16)val;
        *(s16 *)(s0 + 0x390) = val;
        if (t >= 0) {
            if (t < 0xF1) goto clamp_done;
            val = 0xF0;
        } else {
            val = 0;
        }
        *(s16 *)(s0 + 0x390) = val;
    }
clamp_done:
    func_800D613C(a1 & 0xFFFF, *(s16 *)(s0 + 0x3A4), *(s16 *)(s0 + 0x3A6), 3);
    if (s1[0x99A] == 0) {
        if (*(s16 *)(s0 + 0x398) == 1) {
            if (*(s16 *)(s0 + 0x390) == 0xF0) *(s16 *)(s0 + 0x398) = 0;
        } else if (*(s16 *)(s0 + 0x390) == 0) *(s16 *)(s0 + 0x398) = 1;
    }
}

