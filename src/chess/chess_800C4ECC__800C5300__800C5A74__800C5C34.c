#include "common.h"

/* objeto de func_80015B3C: flags em bitfields nos words 0x34/0x38 */
struct Obj_800C523C {
    u8 pad[0x34];
    u32 f34_0 : 7;
    u32 f34_7 : 25;
    u32 f38_0 : 1;
    u32 f38_1 : 3;
    u32 f38_4 : 2;
    u32 f38_6 : 1;
    u32 f38_7 : 25;
    u8 *f3C;
    u8 *f40;
};

void func_800C63AC();
void func_800161C4();
s32 func_800202A4(s32);
void func_800C4FC4();
void func_800AADE0();
void *func_80015B3C();

void func_800C5C34(void *arg0, void *arg1) {
    extern u8 D_80085428[];
    extern struct { u8 pad[0x108]; s32 unk108; s32 unk10C; } D_8008ED68[];
    u16 vec[3];
    s32 state;
    s32 state2;

    state = M2C_FIELD(arg0, s32 *, 0x88);
    if (state == 0) {
        M2C_FIELD(arg0, u16 *, 0x50) = M2C_FIELD(arg1, u16 *, 0x50) + M2C_FIELD(arg0, u16 *, 0x74);
        M2C_FIELD(arg0, u16 *, 0x52) = M2C_FIELD(arg1, u16 *, 0x52) + M2C_FIELD(arg0, u16 *, 0x76);
        M2C_FIELD(arg0, s32 *, 0x44) = M2C_FIELD(arg1, s32 *, 0x44) + M2C_FIELD(arg0, s32 *, 0x68);
        M2C_FIELD(arg0, s32 *, 0x48) = M2C_FIELD(arg1, s32 *, 0x48) + M2C_FIELD(arg0, s32 *, 0x6C);
        M2C_FIELD(arg0, s32 *, 0x4C) = M2C_FIELD(arg1, s32 *, 0x4C) + M2C_FIELD(arg0, s32 *, 0x70);
    } else if (state != 3) {
        vec[0] = M2C_FIELD(arg0, u16 *, 0x6A);
        vec[1] = M2C_FIELD(arg0, u16 *, 0x6E);
        vec[2] = M2C_FIELD(arg0, u16 *, 0x72);
        M2C_FIELD(arg0, u16 *, 0x4E) = func_800CD950(vec, arg0);
        M2C_FIELD(arg0, u16 *, 0x46) -= D_8008ED68[0].unk108 / 2;
        M2C_FIELD(arg0, u16 *, 0x4A) -= D_8008ED68[0].unk10C / 2;
        func_800C9534(D_80085428, arg0, 0x140);
        M2C_FIELD(arg0, u16 *, 0x50) += M2C_FIELD(arg0, u16 *, 0x74);
        state2 = M2C_FIELD(arg0, s32 *, 0x88);
        M2C_FIELD(arg0, u16 *, 0x52) += M2C_FIELD(arg0, u16 *, 0x76);
        if (state2 == 1) {
            M2C_FIELD(arg0, u16 *, 0x4E) -= 10;
        } else if (state2 != 4) {
            M2C_FIELD(arg0, u16 *, 0x4E) = 6;
        }
        if (M2C_FIELD(arg0, s16 *, 0x4E) < 6) {
            M2C_FIELD(arg0, u16 *, 0x4E) = 6;
        }
    } else {
        M2C_FIELD(arg0, u16 *, 0x50) = M2C_FIELD(arg0, u16 *, 0x74);
        M2C_FIELD(arg0, u16 *, 0x52) = M2C_FIELD(arg0, u16 *, 0x76);
        M2C_FIELD(arg0, s32 *, 0x44) = M2C_FIELD(arg0, s32 *, 0x68);
        M2C_FIELD(arg0, s32 *, 0x48) = M2C_FIELD(arg0, s32 *, 0x6C);
        M2C_FIELD(arg0, s32 *, 0x4C) = M2C_FIELD(arg0, s32 *, 0x70);
    }
}

