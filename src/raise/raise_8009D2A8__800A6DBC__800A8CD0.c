#include "common.h"

typedef struct {
    s32 state;
    s32 cells[27];
    s32 indices[9];
    s32 unk94;
    u8 col[4];
} Result_800EE914;

s16 func_800A8CD0(s16 arg0, s32 arg1) {
    extern s16 D_800F2D20[];
    extern s32 D_800F2D24[];
    extern s16 D_800F2D28[];

    *D_800F2D24 = func_800202A4(100);
    *D_800F2D20 = 0;
    if (arg0 > 0) {
        do {
            *D_800F2D28 = func_800A8DB8(*D_800F2D20, arg1);
            if (*D_800F2D28 >= *D_800F2D24) {
                return *D_800F2D20;
            }
            (*D_800F2D20)++;
        } while (*D_800F2D20 < arg0);
    }
    *D_800F2D20 = arg0 - 1;
    return *D_800F2D20;
}

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
    arg0[0x34 / 4] = (arg0[0x34 / 4] & ~0x100) | ((~(arg0[0x34 / 4] >> 8) & 1) << 8);
    arg0[0x38 / 4] |= 1;
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

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A6DBC__800A8CD0", func_800A9490);

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
    extern Result_800EE914 D_800EE914;
    s32 off;
    s32 j;
    u8 *q;
    s32 *p;
    s32 *end;

    D_800EE914.state = 0;
    D_800EE914.col[0] = 0x40;
    D_800EE914.col[1] = 0x74;
    D_800EE914.col[2] = 0xb8;
    D_800EE914.unk94 = 0;
    D_800EE914.col[3] = 0x2c;
    off = 0;
    p = (s32 *)&D_800EE914;
    end = p + 9;
    do {
        j = 0;
        q = (u8 *)&D_800EE914;
        p[1] = 0;
        p[28] = -1;
        do {
            *(s32 *)(q + off + 0x28) = 0;
            j++;
            q += 0x24;
        } while (j < 2);
        p++;
        off += 4;
    } while (p < end);
}

s32 func_800A9658(s16 arg0) {
    s32 ret = 1;
    if (arg0 != 0) {
        ret = 9;
        if (arg0 == 1) {
            ret = 4;
        }
    }
    return ret;
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
