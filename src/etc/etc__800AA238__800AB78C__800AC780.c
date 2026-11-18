#include "common.h"

#include "ghidra.h"
void func_800AC780(void *arg0) {
    typedef struct {
        u8 unk0[0x38];
        s32 unk38;
        u8 unk3C[0xA];
        s16 unk46;
        u8 unk48[2];
        s16 unk4A;
        u8 unk4C[4];
        u16 unk50;
        u16 unk52;
        u8 unk54[0x20];
        u16 unk74;
        u16 unk76;
    } Obj;
    extern struct {
        u8 unk0[0xDC];
        u16 unkDC;
        u16 unkDE;
        u16 unkE0;
    } D_8008ED68[];
    extern u8 D_800B3D20[];
    extern u8 D_800B3D24[];
    Obj *obj = (Obj *)arg0;
    s16 var_a2;
    s32 e0_raw;
    s32 e0;

    if (D_8008ED68->unkDC == 5 && D_8008ED68->unkE0 == 2 && *D_800B3D20 == 0) {
        s32 mask;
        s32 b;
        var_a2 = 0;
        mask = ~1;
        b = *D_800B3D24;
        obj->unk38 &= mask;
        if (b == 0) {
            var_a2 = -0x98;
        }
        obj->unk46 = var_a2;
        obj->unk50 -= obj->unk74;
        obj->unk52 -= obj->unk76;
        if ((s16)obj->unk50 <= 0) {
            obj->unk52 = 0;
            obj->unk50 = 0;
            *D_800B3D20 = 1;
        }
    } else if (D_8008ED68->unkDC == 5 && D_8008ED68->unkE0 == 3) {
        s32 mask;
        s32 b;
        s32 done;
        var_a2 = 0;
        mask = ~1;
        b = *D_800B3D24;
        obj->unk38 &= mask;
        if (b == 0) {
            var_a2 = -0x98;
        }
        done = *D_800B3D20;
        obj->unk46 = var_a2;
        if (done == 0) {
            obj->unk50 += obj->unk74;
            obj->unk52 += obj->unk76;
            if ((s16)obj->unk50 >= 0x1000) {
                obj->unk52 = 0x1000;
                obj->unk50 = 0x1000;
                *D_800B3D20 = 1;
            }
        }
    } else {
        u16 dc = D_8008ED68->unkDC;
        if (dc == 6) {
            e0_raw = D_8008ED68->unkE0;
            e0 = e0_raw & 0xFFFF;
            if (e0 == 0) {
                obj->unk52 = 0;
                obj->unk50 = 0;
            } else if ((u32)(e0_raw - 1) < 2U) {
                if (*D_800B3D20 == 0) {
                    obj->unk50 -= obj->unk74;
                    obj->unk52 -= obj->unk76;
                    if ((s16)obj->unk50 <= 0) {
                        obj->unk52 = 0;
                        obj->unk50 = 0;
                        *D_800B3D20 = 1;
                    }
                }
            } else if (e0 == 3 || e0 == dc) {
                s32 done;
                s32 mask;
                obj->unk46 = -0x50;
                obj->unk4A = 0x10;
                mask = ~1;
                done = *D_800B3D20;
                obj->unk38 &= mask;
                if (done == 0) {
                    obj->unk50 += obj->unk74;
                    obj->unk52 += obj->unk76;
                    if ((s16)obj->unk50 >= 0x1000) {
                        obj->unk52 = 0x1000;
                        obj->unk50 = 0x1000;
                        *D_800B3D20 = 1;
                    }
                }
            } else {
                obj->unk38 |= 1;
            }
        } else {
            obj->unk38 |= 1;
        }
    }
}

