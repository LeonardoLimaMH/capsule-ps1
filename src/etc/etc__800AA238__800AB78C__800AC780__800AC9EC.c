#include "common.h"

#include "ghidra.h"

void func_800AC9EC(void *arg0) {
    typedef struct {
        u8 unk0[0x38];
        s32 unk38;
        u8 unk3C[0xA];
        s16 unk46;
        u8 unk48[2];
        s16 unk4A;
        u8 unk4C[0x38];
        s32 unk84;
    } Obj;
    extern u8 D_8008ED68[];
    extern u16 D_8008EE44[];
    extern u16 D_8008EE48[];
    extern u8 D_800B3D24;
    extern u8 D_800B3D25;
    extern s32 D_800B3D50[];
    extern s32 D_800B3D54[];
    Obj *obj = (Obj *)arg0;
    u8 *d = D_8008ED68;

    if (*(u16 *)(d + 0xDC) == 6 && *(u16 *)(d + 0xE0) != 0) {
        s32 val;
        s16 var_v1;

        if ((*(u16 *)(d + 0xE0) == 1 && D_800B3D24 == 0 && obj->unk84 != 0) ||
            (*D_8008EE48 == 2 && D_800B3D24 != 0 && obj->unk84 == 0)) {
            obj->unk38 |= 1;
        } else {
            obj->unk38 &= ~1;
        }

        if (obj->unk84 == 0) {
            val = *D_800B3D50;
            obj->unk46 = (val % 3) * 0x30 - 0x9A;
            if (D_800B3D24 != 0 && D_800B3D25 != 1 && val >= 3) {
                var_v1 = -0x50;
                if (val == 3) {
                    var_v1 = -0x80;
                }
                obj->unk46 = var_v1;
            }
            var_v1 = -0x68;
            if (*D_800B3D50 / 3 != 0) {
                var_v1 = -0x30;
            }
            obj->unk4A = var_v1;
        } else {
            val = *D_800B3D54;
            obj->unk46 = (val % 3) * 0x30 + 0xA;
            if (D_800B3D24 == 0 && D_800B3D25 != 1 && val >= 3) {
                var_v1 = 0x50;
                if (val == 3) {
                    var_v1 = 0x20;
                }
                obj->unk46 = var_v1;
            }
            var_v1 = -0x68;
            if (*D_800B3D54 / 3 != 0) {
                var_v1 = -0x30;
            }
            obj->unk4A = var_v1;
        }
    } else {
        if (*D_8008EE44 == 8) {
            obj->unk38 &= ~1;
        } else {
            obj->unk38 |= 1;
        }
    }
}

