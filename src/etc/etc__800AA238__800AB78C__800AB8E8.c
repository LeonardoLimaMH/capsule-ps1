#include "common.h"

#include "ghidra.h"

s32 func_800AB8E8(s32 arg0, s32 arg1) {
    typedef struct {
        u8 pad[0x2B];
        u8 unk2B;
        u8 pad2[0x7C - 0x2C];
    } Unit85A10;
    typedef struct {
        u8 pad[0x5E8];
        Unit85A10 units[2][6];
    } S_80085428;
    extern S_80085428 D_80085428[];
    extern u16 D_8008EE48[];
    extern s8 D_800B3D20[];
    extern u8 D_800B3D24[];
    extern u8 D_800B3D25[];
    extern s32 D_800B3D34[];
    extern struct { u8 col[6]; } D_800B3D38[];
    extern void func_80034AB0(s32);
    extern void func_80012578(void);
    extern void func_800125AC(s32);

    if ((*D_800B3D34 & 0x1000) && (arg1 >= 3)) {
        func_80034AB0(0x84);
        arg1 -= 3;
    } else if ((*D_800B3D34 & 0x4000) && (arg1 < 3)) {
        func_80034AB0(0x84);
        if (arg1 == 2 && *D_800B3D24 != arg0 && *D_800B3D25 != 1) {
            arg1 = 1;
        }
        arg1 += 3;
    } else if ((*D_800B3D34 & 0x8000) && (arg1 != (arg1 / 3) * 3)) {
        func_80034AB0(0x84);
        arg1 -= 1;
    } else if ((*D_800B3D34 & 0x2000) && (arg1 != 4 || *D_800B3D24 == arg0 || *D_800B3D25 == 1) && ((arg1 % 3) < 2)) {
        func_80034AB0(0x84);
        arg1 += 1;
    }

    if (*D_800B3D34 & 0x20) {
        if (D_80085428->units[arg0][arg1].unk2B == 1 ||
            (arg0 != *D_800B3D24 && arg1 < 5 && D_800B3D38[arg0].col[arg1] == 0)) {
            func_80034AB0(0x5D);
            return arg1;
        }
        func_80034AB0(0x48);
        *D_800B3D20 = 0;
        if (*D_8008EE48 == 1 && *D_800B3D24 != 0) {
            func_800125AC(3);
            return arg1;
        }
        if (*D_8008EE48 == 2 && *D_800B3D24 != 0) {
            func_800125AC(1);
            return arg1;
        }
        func_80012578();
        return arg1;
    }
    if (*D_800B3D34 & 0x40) {
        func_80034AB0(0x5D);
        if (*D_8008EE48 == 1 && *D_800B3D24 != 0) {
            func_800125AC(2);
        } else if (*D_8008EE48 == 2 && *D_800B3D24 == 0) {
            func_800125AC(1);
        } else {
            *D_800B3D20 = 0;
            func_800125AC(6);
        }
    }
    return arg1;
}

