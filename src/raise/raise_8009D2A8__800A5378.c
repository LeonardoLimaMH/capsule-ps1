#include "common.h"

typedef struct {
    u8 pad_000[0x428];
    s32 f_428;
    u8 pad_42C[8];
    u8 f_434[8];
    s32 f_43C;
    s32 f_440;
    s32 f_444;
    u8 grid[3][7][17];
    u8 pad_5AD[0x33];
    void *f_5E0;
    void *f_5E4;
} RaiseCursorState;

typedef struct {
    u8 pad_000[0x108];
    s32 f_108;
    s32 f_10C;
} RaiseDisplayState;

void func_800A5378(void) {
    s32 z, w, v;

    if (v || w) {
        z = 0;
    } else {
        z = 0;
    }
    func_800A5CF8(z, z);
    func_800A5954();
}

s32 func_800A53A4(void) {
    extern u8 D_800EFF58[], D_80091618[];
    extern s32 D_800ED8D8[];
    extern u16 D_8006AF80[];
    u8 *f;
    register u32 index asm("v1");
    u16 *selection;
    register u8 *g asm("a2");
    register u8 *e asm("a0");
    register u16 i asm("a1");
    func_800A5CF8(2, 0);
    f = D_800EFF58;
    g = f;
    if (*(s32 *)(f + 0x420) == 2) {
        if (D_800ED8D8[0] != 0) {
            D_800ED8D8[0]--;
        } else if (*(s32 *)(f + 0x424) > 0) {
            *(s32 *)(f + 0x424) -= 1;
            func_800BD684(2);
        } else {
            *(s32 *)(f + 0x420) = 0;
        }
        return 0;
    }
    i = 0;
    selection = D_8006AF80;
    e = D_80091618;
    index = *selection;
    e += index * 0x1A8;
    do {
        register u32 off asm("v1") = i;
        register u8 value asm("v0") = g[0x434 + off];
        i++;
        (e + off)[8] = value;
    } while (i < 8);
    return -1;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A5378", func_800A548C);

s32 func_800A5954(void) {
    extern u8 D_8008ED68[];
    extern void func_800A5CF8();
    extern s32 D_800ED8D8[];
    extern s16 D_800EEA78[];
    extern s16 D_800EEA7A[];
    extern s16 D_800EEA7C[];
    extern s16 D_800EEA7E[];
    extern RaiseCursorState D_800EFF58[];
    extern u16 D_800F0568[];
    extern u8 D_80103EE4[];
    u8 *input = D_8008ED68;
    s32 temp_v0;
    RaiseCursorState *cursor;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;

    func_800D1598(D_80103EE4);
    if (M2C_FIELD(input, s32 *, 0x88) & 0x20) {
        func_80034AB0(0x48);
        cursor = D_800EFF58;
        if (cursor->f_440 == 0x11) {
            if (M2C_GFIELD(cursor, s32, 0x444) != 3) {
                if ((M2C_GFIELD(cursor, s32, 0x444) < 4) && (M2C_GFIELD(cursor, s32, 0x444) >= 0)) {
                    cursor->f_43C = (s32) M2C_GFIELD(cursor, s32, 0x444);
                    goto block_42;
                }
                goto invalid_row;
            }
            cursor->f_434[cursor->f_428] = 0;
            *((cursor->f_428) + D_800F0568) = 0;
            if (cursor->f_428 != 7) {
                cursor->f_428 = (s32) (cursor->f_428 + 1);
                goto block_42;
            }
            goto block_10;
invalid_row:
            func_800BD66C(2);
            D_800ED8D8[0] = 0x3C;
            return -1;
        }
        cursor->f_434[cursor->f_428] = cursor->grid[cursor->f_43C][M2C_GFIELD(cursor, s32, 0x444)][cursor->f_440];
        *((cursor->f_428) + D_800F0568) = 0;
        if (cursor->f_428 == 7) {
block_10:
            cursor->f_428 = 8;
            func_800BD66C(2, cursor);
            (*D_800ED8D8) = 0x3C;
            return -1;
        }
        cursor->f_428 = (s32) (cursor->f_428 + 1);
        goto block_42;
    }
    if (M2C_GFIELD(D_8008ED68, s32, 0x88) & 0x40) {
        func_80034AB0(0x5D);
        *((D_800EFF58[0].f_428) + D_800F0568) = 0xA6;
        temp_v0 = D_800EFF58[0].f_428;
        if (temp_v0 > 0) {
            temp_v0--;
            D_800EFF58[0].f_428 = temp_v0;
            D_800EFF58[0].f_434[temp_v0] = 0;
            *((D_800EFF58[0].f_428) + D_800F0568) = 0xA6;
        }
    } else {
        if (!(M2C_GFIELD(D_8008ED68, s32, 0x88) & 0x8000)) {
            if ((M2C_FIELD(input, s32 *, 0xB0) != 0) && (temp_v0_2 = M2C_GFIELD((((*D_800EEA78) * 4) + D_8008ED68), s32, 0xA4), (temp_v0_2 != 7))) {
                if ((temp_v0_2 & 7) == 7) {
                    goto block_20;
                }
            }
        } else {
block_20:
            func_800A5CF8(2, 0);
            func_800A548C(0);
            func_800A5CF8(1, 0);
        }
        if (!(M2C_GFIELD(D_8008ED68, s32, 0x88) & 0x2000)) {
            if ((M2C_FIELD(input, s32 *, 0xA8) != 0) && (temp_v0_3 = M2C_GFIELD((((*D_800EEA7A) * 4) + D_8008ED68), s32, 0xA4), (temp_v0_3 != 7))) {
                if ((temp_v0_3 & 7) == 7) {
                    goto block_27;
                }
            }
        } else {
block_27:
            func_800A5CF8(2, 0);
            func_800A548C(1);
            func_800A5CF8(1, 0);
        }
        if (!(M2C_GFIELD(D_8008ED68, s32, 0x88) & 0x1000)) {
            if ((M2C_FIELD(input, s32 *, 0xA4) != 0) && (temp_v0_4 = M2C_GFIELD((((*D_800EEA7C) * 4) + D_8008ED68), s32, 0xA4), (temp_v0_4 != 7))) {
                if ((temp_v0_4 & 7) == 7) {
                    goto block_34;
                }
            }
        } else {
block_34:
            func_800A5CF8(2, 0);
            func_800A548C(2);
            func_800A5CF8(1, 0);
        }
        if (!(M2C_GFIELD(D_8008ED68, s32, 0x88) & 0x4000)) {
            if ((M2C_FIELD(input, s32 *, 0xAC) != 0) && (temp_v0_5 = M2C_GFIELD((((*D_800EEA7E) * 4) + D_8008ED68), s32, 0xA4), (temp_v0_5 != 7))) {
                if ((temp_v0_5 & 7) == 7) {
                    goto block_41;
                }
            }
        } else {
block_41:
            func_800A5CF8(2, 0);
            func_800A548C(3);
            func_800A5CF8(1, 0);
block_42:
        }
    }
    return 0;
}

void func_800A5CF8(s32 arg0) {
    extern RaiseDisplayState D_8008ED68[];
    extern RaiseCursorState D_800EFF58[];
    
    u32 temp_a2;

    if (arg0 >= 0) {
        if (arg0 >= 2) {
            if (arg0 == 2) {
                register RaiseCursorState *p asm("v1") = D_800EFF58;
                M2C_FIELD(p->f_5E0, s32 *, 0x38) = (s32) (M2C_FIELD(p->f_5E0, s32 *, 0x38) | 1);
                M2C_FIELD(p->f_5E4, s32 *, 0x38) = (s32) (M2C_FIELD(p->f_5E4, s32 *, 0x38) | 1);
            }
        } else {
            RaiseCursorState *p;
            arg0 = (s32) D_8008ED68[0].f_108 / 2;
            temp_a2 = (s32) D_8008ED68[0].f_10C / 2;
            p = D_800EFF58;
            if (p->f_440 == 0x11) {
                M2C_FIELD(p->f_5E4, s16 *, 0x46) = (s16) (0x108 - (u32)arg0);
                M2C_FIELD(p->f_5E4, s16 *, 0x4A) = (s16) (((p->f_444 * 0x14) + 0x68) - temp_a2);
                M2C_FIELD(p->f_5E0, s32 *, 0x38) = (s32) (M2C_FIELD(p->f_5E0, s32 *, 0x38) | 1);
                M2C_FIELD(p->f_5E4, s32 *, 0x38) = (s32) (M2C_FIELD(p->f_5E4, s32 *, 0x38) & ~1);
                return;
            }
            M2C_FIELD(p->f_5E0, s16 *, 0x46) = (s16) (((p->f_440 * 0xE) + 0x18) - (u32)arg0);
            M2C_FIELD(p->f_5E0, s16 *, 0x4A) = (s16) (((p->f_444 * 0xE) + 0x68) - temp_a2);
            M2C_FIELD(p->f_5E0, s32 *, 0x38) = (s32) (M2C_FIELD(p->f_5E0, s32 *, 0x38) & ~1);

            M2C_FIELD(p->f_5E4, s32 *, 0x38) = (s32) (M2C_FIELD(p->f_5E4, s32 *, 0x38) | 1);
        }
    }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A5378", func_800A5E54);

#include "common.h"

void func_800A6BDC(void) {
    extern u8 D_80069BE4[];
    extern u8 D_800900C0[];
    extern int func_80012508();
    void *temp_s0;
    void *temp_v1;

    func_8001A998(D_800900C0, 0x1318);
    func_8001A998(D_80069BE4, 0x20);
    func_80013668();
    func_80024024();
    func_8002CC2C();
    temp_v1 = D_80069BE4 - 0x38;
    M2C_FIELD(D_80069BE4, s32 *, -0x38) = 0;
    M2C_FIELD(temp_v1, s32 *, 4) = -0x20;
    M2C_FIELD(temp_v1, s32 *, 8) = 0x740;
    M2C_FIELD(D_80069BE4, s16 *, -0x28) = 0x1C0;
    temp_s0 = D_80069BE4 - 0x28;
    M2C_FIELD(temp_s0, s16 *, 2) = 0x200;
    M2C_FIELD(temp_s0, s16 *, 4) = 0;
    func_8001A464(0xE, 0x80113000);
    func_8001A464(0xF, 0x80146A18);
    func_8001A480(0xF, 0x80113000);
    func_80019F30(0x12000F, &func_80012508);
}

#include "common.h"

void func_800A6CAC(void) {
    extern M2C_UNK D_80085428[];
    M2C_GFIELD(D_80085428, u16, 0xC) = (u16) (M2C_GFIELD(D_80085428, u16, 0xC) + 1);
    func_80018F90(M2C_GFIELD(D_80085428, u16, 0xC), 3);
}

void func_800A6CE8(void) {
    extern s32 D_8006AF84[];
    M2C_UNK var_a1;
    M2C_UNK var_a2;

    func_8001A49C(0x80113000);
    func_8001A49C(0x80146A18);
    func_800C0C60();
    func_800A6ED4();
    func_8001AD48(8);
    func_8001611C(0x1000);
    if ((u32)(((*D_8006AF84) % 28800) - 0x20D0) < 0x3840U) {
        func_80014D30(1, 0, 0);
    } else {
        func_80014D30(1, 1, 4);
    }
    func_800AED5C(7, 0);
    func_80033974(0);
}
