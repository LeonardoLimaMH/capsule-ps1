#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001F918__80023964", func_80023964);

#include "common.h"

extern void func_8001F8D8();

s32 func_80023A90(void) {
    func_80013668();
    return func_80012200(func_8001F8D8);
}

#include "common.h"

void func_80023ABC(void)
{
  extern M2C_UNK D_80069A5C[];
  extern s32 D_80078C04;
  s8 *new_var;
  new_var = (s8 *) ((D_80078C04 * 0x18) + ((u8 *) D_80069A5C));
  func_800121B4(*((s32 *) (new_var + 4)));
  func_800121C4();
}

void func_80023B04(void) {

}

typedef struct {
    s16 x;
    s16 y;
    s32 unk4;
    u8 unk8[0x10];
} Entry_80023B0C;

extern void func_8001DBF4(s32, s32, s32, s32, void *, void *);
extern u8 D_80078C08[];
void func_80023B0C(s32 arg0, s32 arg1, s32 arg2, Entry_80023B0C *arg3) {
    if (arg0 != 0) {
        if (arg0 < 0) return;
        if (arg0 >= 3) return;
        goto single;
    }
    if (arg0 < arg1) {
        s32 i = 0;
        do {
            func_8001DBF4(arg3[i].x, arg3[i].y, 0, i == arg2, D_80078C08, arg3[i].unk8);
            i++;
        } while (i < arg1);
    }
    return;

single:
    {
        Entry_80023B0C *p = arg3 + arg2;
        func_8001DBF4(p->x, p->y, 0, arg0 == 1, D_80078C08, p->unk8);
    }
}

void func_80023C00(s32 mode, s32 a1, s32 a2) {
    extern u8 D_80069E4C[];
    extern s32 D_80069B28[];

    if (mode == 1) {
        goto case_1;
    }
    if (mode < 2) {
        goto set_b28;
    }
    if (mode == 2) {
        goto case_2;
    }
    *D_80069B28 = mode;
    goto end;

case_1:
    {
        u8 *p = D_80069E4C;
        *(s32 *)(p + 0x64) = a1;
        *(s32 *)(p + 0x68) = *(s32 *)(p + 0x60);
    }
    goto set_b28;

case_2:
    {
        u8 *p = D_80069E4C;
        *(s32 *)(p + 0x64) = a1;
        *(s32 *)(p + 0x68) = a2;
        *(s32 *)(p + 0x60) = a1;
    }

set_b28:
    *D_80069B28 = mode;

end:
    {
        u8 *p = D_80069E4C;
        *(s32 *)(p + 0x6C) = 0;
        *(s32 *)(p + 0x70) = 0x40;
    }
}

typedef struct {
    u16 x;
    u16 y;
    u16 z;
    u16 pad;
} Vec3s_80023C74;

typedef struct {
    u8 pad0[8];
    s32 unk8;
    u8 padC[0xB4 - 0xC];
    Vec3s_80023C74 *unkB4;
    Vec3s_80023C74 *unkB8;
} Struct_80023C74;

void func_80023C74(Struct_80023C74 *arg0, s32 arg1, Vec3s_80023C74 *arg2) {
    extern s32 D_80069B28[];
    extern s32 D_80069BB4[];
    extern s32 D_80069EB0[];
    register Vec3s_80023C74 *s2 asm("s2");
    register Vec3s_80023C74 *s1 asm("s1");
    register Vec3s_80023C74 *s0 asm("s0");
    register s32 i asm("s3");
    register Vec3s_80023C74 *t1 asm("t1");
    register s32 a0_val asm("a0");
    s32 j;

    a0_val = arg0->unk8;
    if (a0_val == 1) {
        goto target_8;
    }
    s2 = arg2 + 4;
    if (a0_val >= 2) {
        goto after_if;
    }
    if (a0_val != 0) {
        goto after_if;
    }
target_8:
    s2 = arg2 + 1;
after_if:

    s1 = arg0->unkB4;
    i = 0;
    s1 = (Vec3s_80023C74 *)((u8 *)s1 + (arg1 << 5));
    s0 = s1;
    for (; i < 4; i++) {
        s0->x = (rand() % 0x800) - 0x400;
        s0->y = (rand() % 0x800) - 0x400;
        s0->z = rand() % 0x400;
        s0++;
    }

    t1 = arg0->unkB8;
    t1 = (Vec3s_80023C74 *)((u8 *)t1 + (arg1 << 5));
    if (*D_80069B28 == 1) {
        goto case_1;
    }
    if (*D_80069B28 < 2) {
        goto end;
    }
    if (*D_80069B28 == 2) {
        goto case_2;
    }
    goto end;

case_1:
    {
        u16 *ps14;
        u16 *ps13;
        u16 *ps12;
        u16 *p_t1 = (u16 *)t1;
        u16 *p_s1 = (u16 *)s1;
        u16 *p_s2 = (u16 *)s2;

        j = 0;
        ps14 = (u16 *)t1 + 2;
        ps13 = (u16 *)s1 + 2;
        ps12 = (u16 *)s2 + 2;
        do {
            u16 v1, v2;
            j++;
            v1 = *p_s2;
            p_s2 += 4;
            v2 = *p_s1;
            p_s1 += 4;
            *p_t1 = (v1 - v2) * 2;
            p_t1 += 4;
            ps14[-1] = (ps12[-1] - ps13[-1]) * 2;
            v1 = *ps12;
            ps12 += 4;
            v2 = *ps13;
            ps13 += 4;
            *ps14 = (v1 - v2) * 2;
            ps14 += 4;
        } while (j < 4);
    }
    goto end;

case_2:
    {
        u16 *ps12;
        u16 *pu16;
        u16 *pu15;
        u16 *p_t1 = (u16 *)t1;
        u16 *p_s1 = (u16 *)s1;
        u16 *p_s2 = (u16 *)s2;

        j = 0;
        ps12 = (u16 *)t1 + 2;
        pu16 = (u16 *)s1 + 2;
        pu15 = (u16 *)s2 + 2;
        do {
            u16 u3, u4;
            j++;
            *p_t1 = *p_s1 - *p_s2;
            p_t1 += 4;
            ps12[-1] = pu16[-1] - pu15[-1];
            u3 = *pu15;
            pu15 += 4;
            u4 = *pu16;
            pu16 += 4;
            *ps12 = u4 - u3;
            *(Vec3s_80023C74 *)p_s1 = *(Vec3s_80023C74 *)p_s2;
            p_s2 += 4;
            p_s1 += 4;
            ps12 += 4;
        } while (j < 4);
    }

end:
    *D_80069BB4 = *D_80069EB0;
}

void func_80023ECC(Struct_80023C74 *arg0, s32 arg1) {
    extern u8 D_8008F702[];

    if (*D_8008F702 != 1) {
        register u16 *a2 asm("a2");
        register u16 *a3 asm("a3");
        register u16 *a1 asm("a1");
        register s32 t0 asm("t0");
        register s32 v1 asm("v1");
        register s32 v0 asm("v0");
        register s32 offset asm("v0");

        offset = arg1 << 5;
        t0 = 0;
        a2 = (u16 *)arg0->unkB4;
        arg0 = (Struct_80023C74 *)arg0->unkB8;
        a2 = (u16 *)((u8 *)a2 + offset);
        arg0 = (Struct_80023C74 *)((u8 *)arg0 + offset);
        a3 = (u16 *)arg0 + 2;
        a1 = a2 + 2;

        do {
            t0++;
            v1 = *(u16 *)arg0;
            arg0 = (Struct_80023C74 *)((u16 *)arg0 + 4);
            v0 = *a2;
            v1 = (s16)v1 >> 7;
            v0 = v0 + v1;
            *a2 = v0;
            a2 += 4;

            v1 = a3[-1];
            v0 = a1[-1];
            v1 = (s16)v1 >> 7;
            v0 = v0 + v1;
            a1[-1] = v0;

            v1 = *a3;
            a3 += 4;
            v0 = *a1;
            v1 = (s16)v1 >> 7;
            v0 = v0 + v1;
            *a1 = v0;
            a1 += 4;
        } while (t0 < 4);
    }
}

#include "common.h"

void func_80023F68(void) {
    extern M2C_UNK D_80069AD4[];
    extern M2C_UNK D_80069E4C[];
    s32 temp_a0;

    if (M2C_GFIELD(D_80069E4C, s32, 0x6C) == 0) {
        M2C_GFIELD(D_80069E4C, s32, 0x6C) = 1;
        M2C_GFIELD(D_80069E4C, s32, 0x70) = 0x40;
        return;
    }
    temp_a0 = M2C_GFIELD(D_80069E4C, s32, 0x70) - 1;
    M2C_GFIELD(D_80069E4C, s32, 0x70) = temp_a0;
    M2C_GFIELD(D_80069AD4, s32, 0xE0) = (s32) (M2C_GFIELD(D_80069AD4, s32, 0xE0) + ((s32) (M2C_GFIELD(D_80069E4C, s32, 0x68) - M2C_GFIELD(D_80069E4C, s32, 0x64)) >> 6));
    if (temp_a0 == 0) {
        M2C_GFIELD(D_80069E4C, s32, 0x6C) = 0;
        M2C_GFIELD(D_80069AD4, s32, 0xE0) = (s32) M2C_GFIELD(D_80069E4C, s32, 0x68);
        M2C_GFIELD(D_80069AD4, s32, 0x54) = 0;
    }
}

void func_80023FD8(void) {

}

void func_80023FE0(void) {

}

#include "common.h"

extern u8 D_80069E4C[];

s32 func_80023FE8(void) {
    M2C_GFIELD(D_80069E4C, s32, 0x60) = -0x800;
    M2C_GFIELD(D_80069E4C, s32, 0x64) = -0x800;
    M2C_GFIELD(D_80069E4C, s32, 0x68) = 0x1000;
    M2C_GFIELD(D_80069E4C, s32, 0x54) = 0;
    M2C_GFIELD(D_80069E4C, s32, 0x58) = 0;
    M2C_GFIELD(D_80069E4C, s32, 0x5C) = 0;
    M2C_GFIELD(D_80069E4C, s32, 0x6C) = 0;
    M2C_GFIELD(D_80069E4C, s32, 0x70) = 0;
    M2C_GFIELD(D_80069E4C, s32, 0x74) = 3;
    return (s32)D_80069E4C;
}

extern volatile s16 D_80078C20 __attribute__((aligned(16)));
extern u8 D_80069AD4[], D_80078C18[], D_80069B84[];
extern void func_8001A998(), SetBackColor(), SetColorMatrix(), RotMatrix();
void func_80024024(void) {
    u8 *s;
    u8 *p;
    s32 *b32;
    s16 *b16;
    u8 *b;
    s32 i;

    s = D_80069AD4;
    D_80078C20 = 0;
    func_8001A998(s, 0x180);
    s[0x6E] = 0x80;
    s[0x6D] = 0x80;
    s[0x6C] = 0x80;
    SetBackColor(0x80, 0x80, 0x80);
    *(s16 *)(s + 0x70) = 0x980;
    *(s16 *)(s + 0x76) = 0x980;
    *(s16 *)(s + 0x7C) = 0x980;
    *(s16 *)(s + 0x72) = 0;
    *(s16 *)(s + 0x78) = 0;
    *(s16 *)(s + 0x7E) = 0;
    *(s16 *)(s + 0x74) = 0;
    *(s16 *)(s + 0x7A) = 0;
    *(s16 *)(s + 0x80) = 0;
    *(s32 *)(s + 0x84) = 0;
    *(s32 *)(s + 0x88) = 0;
    *(s32 *)(s + 0x8C) = 0;
    SetColorMatrix(s + 0x70);
    *(s16 *)(s + 0x90) = 0x800;
    *(s16 *)(s + 0x92) = 0x800;
    *(s16 *)(s + 0x94) = 0x800;
    *(s16 *)(s + 0x9A) = 0;
    *(s16 *)(s + 0x98) = 0;
    *(s16 *)(s + 0x96) = 0;
    *(s16 *)(s + 0xA0) = 0;
    *(s16 *)(s + 0x9E) = 0;
    *(s16 *)(s + 0x9C) = 0;
    *(s32 *)(s + 0xA4) = 0;
    *(s32 *)(s + 0xA8) = 0;
    *(s32 *)(s + 0xAC) = 0;
    *(s32 *)(s + 8) = 0x1000;
    *(s32 *)(s + 4) = 0x1000;
    *(s32 *)(s + 0) = 0x1000;
    *(s32 *)(s + 0xC) = 0;
    *(s32 *)(s + 0x50) = 1;
    *(s32 *)(s + 0x54) = 0;
    RotMatrix(D_80078C18, s + 0x30);
    *(s32 *)(s + 0x4C) = 0;
    *(s32 *)(s + 0x48) = 0;
    *(s32 *)(s + 0x44) = 0;
    *(s32 *)(s + 0xD4) = 0;
    *(s32 *)(s + 0xD0) = 0;
    *(s32 *)(s + 0xCC) = 0;
    for (i = 0; i < 4; i++) {
        p = s + i * 4;
        p[0x5E] = 0x80;
        p[0x5D] = 0x80;
        p[0x5C] = 0x80;
        p[0x5F] = (i / 2) * 16 + 0x28 + (i % 2) * 4;
    }
    b = D_80069B84;
    *(s16 *)b = 0;
    b32 = (s32 *)(b + 0x28);
    *(s16 *)(b + 2) = 0;
    *(s16 *)(b + 4) = 0;
    *(s32 *)(b + 0x28) = 0;
    b32[1] = -0x20;
    b32[2] = 0x740;
    b16 = (s16 *)(b + 0x38);
    *(s16 *)(b + 0x38) = 0x1C0;
    b16[1] = 0x200;
    b16[2] = 0;
    {
        u8 *t = b - 0xB0;
        *(s32 *)(t + 0x130) = 0;
        *(s32 *)(t + 0x134) = 0x20;
        *(s32 *)(t + 0x178) = 0;
        *(s32 *)(t + 0x17C) = 0;
    }
}
