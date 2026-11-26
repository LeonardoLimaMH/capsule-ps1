#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E2110);

s32 func_800E2558(void) {
    typedef struct {
        u16 unk0;
        u16 unk2;
        u16 unk4;
        u8 pad6[0xA];
        u16 unk10;
        u8 pad12[0x1A8 - 0x12];
    } S_800E2558;
    extern S_800E2558 D_80091618[];
    extern u8 D_800F2D30[];
    extern u16 D_800F1ED2[];
    extern void func_800A7730(u16), func_800A79D8(u16), func_800A7C7C(u16), func_800A7F20(u16), func_800A8484(u16);
    extern s32 func_800A8CB4(u16), func_800A0E6C(u16);
    extern void func_8001A464(s32, s32);
    extern s32 func_80012508();
    u16 k = D_800F1ED2[0];
    S_800E2558 *e = &D_80091618[k];
    s32 g;
    u16 c;
    u16 d, i;

    c = e->unk0 = e->unk4;
    func_800A7730(k);
    func_800A79D8(k);
    func_800A7C7C(k);
    func_800A7F20(k);
    func_800A8484(k);
    if (D_800F2D30[c] != 0xFF) {
        return 1;
    }
    g = func_800A8CB4(c);
    d = e->unk2;
    for (i = 0; i < 6; i++) {
        if (i == k) continue;
        if (D_80091618[i].unk10 == 0xFFFF) continue;
        if (D_80091618[i].unk0 == d) break;
    }
    if (i == 6) {
        func_8001A464(g, D_800F2D30[d] * 0x15800 + 0x80146A18);
    } else {
        func_8001A464(g, func_800A0E6C(c));
    }
    func_80019F30(g, (s32)func_80012508);
    return 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E2714);

void func_800E2A98(void) {

}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E2AA0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E2D7C);

typedef struct {
    u8 pad0[0x30];
    struct { u32 unk0:3, unk3:1, unk4:2, unk6:3, unk9:23; } f30;
    struct { u32 unk0:8, unk8:1, unk9:1, unk10:2, unk12:20; } f34;
    struct { u32 unk0:1, unk1:2, unk3:1, unk4:2, unk6:1, unk7:25; } f38;
} Flags_800E3090;

void *func_800E3090(s32 arg0) {
    extern u16 D_80078C20[];
    extern u8 D_80091618[];
    extern s32 D_800EBFF4[];
    extern s32 D_800EE630[];
    extern void func_800BA1B4(), func_800B9F2C(), func_800161C4();
    extern void *func_80015B3C(void *, void *, s32);
    extern void func_80015EF8(void *);
    extern s32 func_80020364(s32);
    extern s32 func_80019F30(s32, s32);
    extern void func_80013920(void *);
    extern s32 func_800B1260(s32);

    void *var_a0;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_v0_2;
    u16 temp_s5;
    u16 var_s6;
    void *temp_v0;

    temp_s3 = func_800B1260(arg0) & 0xFFFF;
    temp_s5 = *(u16 *)((temp_s3 * 0x1A8) + D_80091618);
    if (arg0 != 1) {
        var_s6 = 1 - D_80078C20[0];
    } else {
        var_s6 = D_80078C20[0];
    }
    D_800EBFF4[0] = 3;
    if (arg0 == 1) {
        var_a0 = func_800BA1B4;
    } else {
        var_a0 = func_800B9F2C;
    }
    temp_v0 = func_80015B3C(var_a0, func_800161C4, 0xB);
    if (temp_v0 != NULL) {
        func_80015EF8(temp_v0);
        temp_s1 = D_800EE630[0];
        temp_v0_2 = func_80019F30(temp_s1 | 0x60000, *(s32 *)((u8 *)D_800EE630 + 0xC) + D_800EBFF4[0] + func_80020364(temp_s5 & 0xFF));
        if (temp_v0_2 == 0) {
            func_80013920(temp_v0);
            return NULL;
        }
        {
            u32 m_30 = ~0x30;
            u32 m_8 = ~8;
            register u32 v30 asm("v1");
            register u32 v34 asm("a0");
            Flags_800E3090 *p=temp_v0;

            *(s32 *)((u8 *)temp_v0 + 0x18) = temp_v0_2;
            v30 = *(s32 *)((u8 *)temp_v0 + 0x30);
            v34 = *(s32 *)((u8 *)temp_v0 + 0x34);
            *(s16 *)((u8 *)temp_v0 + 0x66) = 0;
            *(s32 *)((u8 *)temp_v0 + 0x1C) = 0;
            *(s32 *)((u8 *)temp_v0 + 0x8C) = temp_s5;

            v30 = (v30 & ~0x1C0) | 0x40;
            v34 &= ~0x100;
            v34 |= ((var_s6 & 1) << 8);
            v34 &= ~0x200;
            v34 |= ((arg0 & 1) << 9);
            v34 &= ~0xC00;
            v34 |= ((temp_s3 & 3) << 10);
            v30 &= m_30;
            v30 &= m_8;
            *(s32 *)((u8 *)temp_v0 + 0x30) = v30;
            *(s32 *)((u8 *)temp_v0 + 0x34) = v34;
            p->f38.unk0=1;
            p->f38.unk3=0;
            p->f38.unk4=0;
            p->f38.unk6=0;
        }
    }
    return temp_v0;
}

void func_800E3260(s32 a0, s32 a1, s32 a2) {
    extern u8 D_80091618[];
    extern s32 func_800B1260(s32);
    register u8 *base asm("a0");
    u16 k = func_800B1260(a0);
    base = D_80091618;
    {
        u8 *p = base + (k * 0x1A8);
        *(s32 *)(p + 0xA4) = a1;
        *(s32 *)(p + 0xA8) = a2;
        *(s32 *)(p + 0xAC) = 5;
    }
}

#include "common.h"

void func_800E32D0(s32 arg0, s16 *arg1, s16 *arg2) {
    extern s16 D_800F1EE0[];
    (*D_800F1EE0) = 1;
    func_800A4984();
    (*D_800F1EE0) = 0;
    func_80025CEC(arg0, *arg1, *arg2, 1);
    func_80025E54(arg0, *arg1, *arg2);
}

void func_800E334C(s32 arg0, s16 *arg1, s16 *arg2) {
    extern s16 D_800F1EE0[];
    extern void func_800A4984(s32, s16 *, s16 *);
    extern void func_80025CEC(s32, s32, s32, s32);
    extern void func_80025E54(s32, s32, s32);

loop:
    (*D_800F1EE0) = 1;
    func_800A4984(arg0, arg1, arg2);
    (*D_800F1EE0) = 0;
    if (*arg1 + *arg2 < 10) {
        goto loop;
    }

    func_80025CEC(arg0, *arg1, *arg2, 1);
    func_80025E54(arg0, *arg1, *arg2);
}

#include "common.h"

void func_800E33E4(s32 arg0, s16 *arg1, s16 *arg2) {
    extern s16 D_800F1EE0[];
    (*D_800F1EE0) = 0;
    func_800A4984();
    func_80025CEC(arg0, *arg1, *arg2, 1);
    func_80025E54(arg0, *arg1, *arg2);
}

void func_800E3450(s32 arg0, s32 arg1, s32 arg2) {
    extern u8 *D_800FDE08[];
    extern u8 D_80100F38[];
    extern s32 func_800B1260(void);
    extern void func_800D0730(void *, s32, s32, s32);
    extern void func_800CED80(s32, s32, s32);
    extern s32 func_800E3A04(s32, void *, void *);
    s32 s3 = arg0;
    s32 s1 = arg1;
    register s32 s5 asm("s5") = arg2;
    s32 s = s3 != 1;
    u8 *temp_s0 = (u8 *)D_80100F38 + ((func_800B1260() & 0xFFFF) * 0x79C);
    register u8 *temp_s4 asm("s4") = temp_s0 + 0x1CC;
    s32 temp_s1 = s1 - 1;
    s16 val = temp_s1 * 8 - 1;
    u8 **temp_s2;
    val += s5;

    *(s16 *)(temp_s0 + 0x32C) = val;
    *(s16 *)(temp_s0 + 0x32A) = val;
    *(s16 *)(temp_s0 + 0x326) = 0;
    *(s16 *)(temp_s0 + 0x324) = 0;
    func_800D0730(temp_s4, (s16)temp_s1, (s16)(s5 - 1), 0);
    func_800CED80(s3, *(s16 *)(temp_s0 + 0x32A), *(s16 *)(temp_s0 + 0x32C));
    temp_s2 = &D_800FDE08[s];
    *(s16 *)(*temp_s2 + 0x4E) = func_800E3A04(s3, temp_s4, temp_s2);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E2110", func_800E355C);
