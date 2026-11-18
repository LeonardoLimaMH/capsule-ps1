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

void func_800C5748(void *arg0) {
    extern struct { u8 pad[0x103]; u8 tick; u8 pad104[4]; s32 x; s32 y; } D_8008ED68[];
    extern s32 rsin();
    extern void func_800185F8();
    extern void func_80020578();
    extern s32 func_800CD9F0();
    s16 pos[3];
    s16 offset[2];
    void *obj = M2C_FIELD(arg0, void **, 0x80);
    u32 count;
    s32 angle;
    s32 value;

    count = M2C_FIELD(arg0, u32 *, 0x3C) + (D_8008ED68[0].tick >= 2 ? D_8008ED68[0].tick : 1);
    M2C_FIELD(arg0, u32 *, 0x3C) = count;
    if (count == 20) {
        M2C_FIELD(obj, u32 *, 0x18) |= 0x80000;
    } else if (count > 40) {
        func_800185F8(arg0);
    }
    angle = rsin((u32)(M2C_FIELD(arg0, s32 *, 0x3C) << 10) / 50) * 50;
    if (angle < 0) {
        angle += 0xFFF;
    }
    func_80020578((angle << 4) >> 16, 0,
        ((M2C_FIELD(arg0, s32 *, 0x3C) * 208 + 136) * (M2C_FIELD(arg0, u32 *, 0x34) & 0x7F)) & 0xFF8,
        &offset[0], &offset[1]);
    pos[0] = M2C_FIELD(arg0, u16 *, 0x84) + offset[0];
    pos[1] = M2C_FIELD(arg0, u16 *, 0x88) + M2C_FIELD(arg0, s32 *, 0x3C) * 4 - 200;
    pos[2] = M2C_FIELD(arg0, u16 *, 0x8C) + offset[1];
    if ((M2C_FIELD(arg0, u32 *, 0x34) & 0x7F) == 0) {
        M2C_FIELD(arg0, u16 *, 0x4E) = func_800CD9F0(pos, arg0, 1);
    } else {
        M2C_FIELD(arg0, u16 *, 0x4E) = func_800CD9F0(pos, arg0, 0);
    }
    M2C_FIELD(arg0, u16 *, 0x46) -= D_8008ED68[0].x / 2;
    value = D_8008ED68[0].y;
    M2C_FIELD(arg0, u32 *, 0x38) &= ~1;
    M2C_FIELD(arg0, u16 *, 0x4A) -= value / 2;
}
