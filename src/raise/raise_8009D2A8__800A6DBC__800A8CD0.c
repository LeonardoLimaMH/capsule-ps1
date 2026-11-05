#include "common.h"

typedef struct {
    s32 state;
    s32 cells[27];
    s32 indices[9];
    s32 unk94;
    u8 col[4];
} Result_800EE914;

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC__800A8CD0", func_800A8CD0);

s16 func_800A8DB8(s16 arg0, u16 *arg1) {
    s32 sum;
    s16 i;
    s32 t;

    sum = 0;
    i = 0;
    if (arg0 > 0) {
        do {
            sum += arg1[i];
            i++;
        } while (i < arg0);
    }
    t = sum - 1;
    return arg1[i] + t;
}

s32 func_800A8E1C(u16 arg0) {
    if (arg0 == 1 || arg0 == 5 || arg0 == 3) {
        return 3;
    }
    return 2;
}

void func_800A8E48(void) {
    func_800B7FA8(0);
    func_800B7ED8(1);
    func_800B7F40(0);
}

void func_800A8E78(u32 *arg0) {
    u32 v34 = arg0[13];
    u32 v38 = arg0[14];
    u32 a = v34 & ~0x100;
    a |= (~(v34 >> 8) & 1) << 8;
    arg0[14] = v38 | 1;
    arg0[13] = a;
}

#include "common.h"

void func_800A8EAC(void) {
    extern s32 D_80069BB4[];
    extern s32 D_80069EAC[];
    (*D_80069EAC) = (*D_80069BB4);
    func_80023C00(1, -0x800, (*D_80069BB4));
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC__800A8CD0", func_800A8EE0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC__800A8CD0", func_800A8FF0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC__800A8CD0", func_800A91A0);

s32 func_800A9490(void) {
    extern s32 D_80069AD4[];
    extern u8 D_80091618[];
    extern s32 func_800B1260(s32);
    extern void func_800A9A74(void), func_80023F68(void);
    s32 i;
    register s32 n asm("a2");
    s32 *state = D_80069AD4;
    u8 *slots;
    if (state[0x15] != 0) {
        func_800A9A74();
        func_80023F68();
        if (state[0x15] != 0) return 0;
    }
    i = 1;
    slots = D_80091618;
    do {
        u32 k = (u16)func_800B1260(i);
        u32 v;
        if (k != 0xFFFF) {
            v = *(u16 *)(slots + k * 0x1A8 + 0x10);
            n = (v == 1 || v == 5 || v == 3) ? 3 : 2;
            {
                s32 j = 0;
                if (n != 0) {
                    u8 *e = (u8 *)(k * 0x1A8 + (u32)slots);
                    do {
                        u8 *p = *(u8 **)(e + 0x18C);
                        *(s32 *)(p + 0x50) |= 1;
                        e += 4;
                    } while (++j < n);
                }
            }
        }
        i--;
    } while (i >= 0);
    return -1;
}

void func_800A95AC(void) {

}

void func_800A95B4(void) {

}

void func_800A95BC(void) {

}

void func_800A95C4(void) {

}

void func_800A95CC(void) {

}

void func_800A95D4(void) {
    typedef struct {
        s32 state;
        s32 cells[9];
        s32 extra[2][9];
        s32 indices[9];
        s32 unk94;
        u8 col[4];
    } LocalResult;
    extern Result_800EE914 D_800EE914;
    register void *temp_res asm("v0") = &D_800EE914;
    LocalResult *res = temp_res;
    s32 i;
    s32 j;

s32 func_800A9658(s16 arg0) {
    register s32 r asm("v0");
    r = 1;
    if (arg0 != 0) {
        if (arg0 == r) {
            r = 4;
        } else {
            r = 9;
        }
    }
    return r;
}

void func_800A967C(s32 arg0, s32 arg1) {
    extern s16 D_80078C22[];
    extern s32 D_800900C0[];
    extern Result_800EE914 D_800EE914;
    extern s32 D_800EE9A8[];
    Result_800EE914 *res;
    s32 i;
    s32 count;
    s32 step;
    s32 temp;

    D_800EE914.state = 0;
    switch (D_80078C22[0]) {
    case 0:
        temp = 1;
        break;
    case 1:
        temp = 4;
        break;
    default:
        temp = 9;
        break;
    }
    count = temp;

    i = 0;
    if (count != 0) {
        step = D_80078C22[0] + 1;
        res = &D_800EE914;
        do {
            s32 y = i / step;
            s32 x = i % step;
            s32 val = (arg0 - y) * 8 + (arg1 - x);
            res->indices[i] = val;
            res->cells[i] = D_800900C0[0x15C / 4] + val * 0x2C;
            i++;
        } while (i < count);
    }

    D_800EE9A8[0] = 0x40;
}
