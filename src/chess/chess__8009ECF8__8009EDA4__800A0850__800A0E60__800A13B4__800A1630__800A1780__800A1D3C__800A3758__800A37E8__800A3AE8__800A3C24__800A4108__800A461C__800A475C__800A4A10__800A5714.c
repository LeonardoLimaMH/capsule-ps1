#include "ghidra.h"
#include "matching.h"
#include "common.h"

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4__800A0850__800A0E60__800A13B4__800A1630__800A1780__800A1D3C__800A3758__800A37E8__800A3AE8__800A3C24__800A4108__800A461C__800A475C__800A4A10__800A5714", func_800A5714);

void func_800A5850(void *arg0) {
    extern u16 D_8008EE4C[];
    extern u16 D_8008EE50[];
    extern int func_800161C4();
    extern int func_800A5BAC();
    register s32 temp_v1 asm("a0");
    s32 state;
    register s32 index asm("v1");
    register u8 *row asm("a0");
    s32 offset;
    s32 index2;
    void *temp_a1;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v0;
    void *temp_v0_2;

    switch ((*D_8008EE4C)) {
    case 0:
        temp_v0 = arg0 + 0x5D0;
        temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x5FA);
        M2C_FIELD(temp_v0, s8 *, 0x610) = 1;
        M2C_FIELD(temp_v0, s8 *, 0x619) = 1;
        M2C_FIELD(temp_v0, s8 *, 0x61B) = 1;
        M2C_FIELD(temp_v0, s8 *, 0x615) = 1;
        M2C_FIELD(temp_v0, u8 *, 0x616) = 0xFF;
        if (M2C_FIELD((temp_v1 + temp_v0), u8 *, 0x16) != 7) {
            temp_v0_2 = func_80015B3C(&func_800A5BAC, &func_800161C4, 5);
            func_80015EF8(temp_v0_2);
            M2C_FIELD(temp_v0_2, s32 *, 0x18) = func_80019F30(0x60012, 0x39);
            M2C_FIELD(temp_v0_2, s16 *, 0x46) = -0x98;
            M2C_FIELD(temp_v0_2, s16 *, 0x4A) = -0x6C;
            M2C_FIELD(temp_v0_2, s16 *, 0x4E) = 4;
            M2C_FIELD(temp_v0_2, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v0_2, s32 *, 0x38) | 0x40);
            M2C_FIELD(temp_v0_2, s32 *, 0x7C) = (s32) M2C_FIELD(arg0, u8 *, 0xBCA);
            M2C_FIELD(temp_v0_2, s32 *, 0x80) = (s32) M2C_FIELD((arg0 + M2C_FIELD(arg0, u8 *, 0xBCA)), u8 *, 0x5E6);
            if (M2C_FIELD(arg0, u8 *, 0xBCA) == 0) {
                M2C_FIELD(temp_v0_2, u16 *, 0x46) = (u16) (M2C_FIELD(temp_v0_2, u16 *, 0x46) + 0xD8);
            }
        }
        goto block_8;
    case 1:
        temp_s0 = arg0 + 0x5D0;
        if (func_800C9414() == 0) {
            M2C_FIELD(arg0, s16 *, 0xC) = 0;
            if (M2C_FIELD((temp_s0 + M2C_FIELD(temp_s0, u8 *, 0x5FA)), u8 *, 0x10) == 0) {
                func_800CFE1C();
                func_800125D8();
            }
block_8:
            func_800125D8();
        }
    default:
        return;
    case 2:
        func_800A4CB0(arg0, 0);
        return;
    case 3:
        M2C_FIELD(arg0, s8 *, 0xBE0) = 1;
        M2C_FIELD(arg0, s16 *, 0xC) = 0;
        M2C_FIELD(arg0, s8 *, 0xD77) = 0;
        func_800125D8();
        /* fallthrough */
    case 4:
        func_800A4F2C(arg0);
        return;
    case 5:
        temp_a1 = arg0 + 0x5D0;
        index = M2C_FIELD(temp_a1, u8 *, 0x5FA);
        row = temp_a1 + index;
        offset = index * 0x2E8 + 0x18;
        index2 = row[0x5FB];
        temp_s0_2 = temp_a1 + offset + index2 * 0x7C;
        state = *D_8008EE50;
        switch (state) {                       /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            func_800220B8(arg0);
            func_8009FD2C(arg0, temp_s0_2);
            func_80012628();
            /* fallthrough */
        case 1:                                     /* switch 1 */
            if (func_800212AC(arg0, 1, 0, 0) != 0) {
                func_80012628();
                return;
            }
            break;
        case 2:                                     /* switch 1 */
            M2C_FIELD(temp_a1, s8 *, 0x610) = state;
            func_800125AC(3);
            return;
        }
        break;
    case 6:
        func_800A559C(arg0);
        return;
    case 7:
        func_800A5714(arg0);
        break;
    }
}

void func_800A5B00(u8 *arg0) {
    typedef struct {
        u32 f88;
        u8 pad[0xC];
    } PadEntry;
    typedef struct {
        u8 pad[0x88];
        PadEntry entry[4];
    } EdGlobal;
    extern u8 D_80085428[];
    extern EdGlobal D_8008ED68[];
    extern void func_800185F8(u8 *);
    u8 *p = D_80085428;
    s32 idx = *(s32 *)(arg0 + 0x5C);
    u8 *q = p + idx * 2;
    register s32 flag asm("t0") = 0;

    if (q[0xBD1] != *(s32 *)(arg0 + 0x68)) {
        goto hit;
    }
    if (q[0xBD2] != *(s32 *)(arg0 + 0x6C)) {
        goto hit;
    }
    {
        u32 v = D_8008ED68->entry[idx].f88;
        if (v & 0x40) goto hit;
        if (v & 0x10) goto hit;
        if (v & 1) goto hit;
        if (v & 2) {
        hit:
            flag = 1;
            p[0xD77] = 0;
            p[0xBE0] = 1;
        }
    }
    if (flag != 0) {
        func_800185F8(arg0);
    }
}

void func_800A5BAC(void *arg0) {
    extern u16 D_8008EE48[];
    if ((*D_8008EE48) != 2) {
        func_800185F8(arg0);
        return;
    }
    func_8001F35C((s16) (((1 - M2C_FIELD(arg0, s32 *, 0x7C)) * 0xD8) - 0x63), -0x68, 0, 1, 0, M2C_FIELD(arg0, s32 *, 0x80), 1, 3);
}

void func_800A5C3C(u8 *arg0) {
    extern u8 D_80085428[];
    extern u8 D_8008ED68[];
    u8 *ed;
    u8 *p;

    *(s16 *)(arg0 + 0x60) = (*(s32 *)(arg0 + 0x3C) * 4) & 0xFF;
    ed = D_8008ED68;
    *(s32 *)(arg0 + 0x3C) += ed[0x103] < 2 ? 1 : ed[0x103];
    p = D_80085428;
    if (p[0xD78] != 0 && *(s16 *)(arg0 + 0x60) >= 0xF1) {
        p[0xD77] = 1;
        func_800185F8(arg0);
    }
}

void func_800A5CCC(s32 arg0, s32 arg1) {
    extern int func_800A60F8();
    extern int func_800AADE0();
    extern s32 func_80015B3C();
    extern void func_80015EF8();
    s32 p;
    s32 col;
    s32 off;
    s32 row;
    s32 rowoff;

    row = 0;
    rowoff = row;
    do {
        col = 0;
        off = rowoff;
        do {
            p = func_80015B3C(func_800A60F8, func_800AADE0, arg1);
            func_80015EF8(p);
            *(s32 *)(p + 0x80) = col;
            *(s32 *)(p + 0x7C) = row;
            *(u32 *)(p + 0x30) = (*(u32 *)(p + 0x30) & ~0x30) | 0x10;
            *(u32 *)(p + 0x30) = (*(u32 *)(p + 0x30) & ~0x1C0) | 0x40;
            *(u32 *)(p + 0x38) |= 1;
            *(s32 *)(arg0 + off + 0x658) = p;
            off += 0x7C;
            col++;
        } while (col < 5);
        *(s32 *)(arg0 + (col * 0x7C + rowoff) + 0x658) = 0;
        row++;
        rowoff += 0x2E8;
    } while (row < 2);
}

void func_800A5DCC(s32 arg0, s32 arg1) {
    extern int func_800161C4();
    extern int func_800A6578();
    extern int func_800A6938();
    s32 p;
    s32 image;
    code *callback;
    s32 col;
    register s32 off asm("s2");
    s32 layer;
    s32 row;
    s32 rowoff;
    u32 flags;
    layer = 0;
    do {
        row = 0;
        flags = (layer + 1U) & 0x7F;
        rowoff = row;
        do {
            col = 0;
            off = rowoff;
            do {
                if (layer == 0) {
                    callback = func_800A6578;
                } else {
                    callback = func_800A6938;
                }
                p = func_80015B3C(callback, func_800161C4, arg1);
                func_80015EF8(p);
                if (layer == 0) {
                    *(s32 *)(arg0 + off + 0x65C) = p;
                }
                *(s32 *)(p + 0x7C) = row;
                *(s32 *)(p + 0x80) = col;
                image = func_80020364(*(u8 *)(arg0 + off + 0x5E8));
                *(s32 *)(p + 0x84) = image;
                *(u32 *)(p + 0x34) = (*(u32 *)(p + 0x34) & ~0x7F) | flags;
                *(u32 *)(p + 0x38) |= 1;
                if (layer != 0) {
                    image = 0xD;
                    if (col != 5) {
                        image = 0;
                        *(u16 *)(p + 0x66) = *(u8 *)(arg0 + row + 0x5E2);
                    }
                    *(s32 *)(p + 0x18) = func_80019F30(0x60012, image);
                }
                col++;
                off += 0x7C;
            } while (col < 6);
            row++;
            rowoff += 0x2E8;
        } while (row < 2);
        layer++;
    } while (layer < 2);
}
