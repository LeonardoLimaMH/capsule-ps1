#include "common.h"
#include "yuugi.h"

s32 func_8001CDE0(void)
{
  s32 temp_s1;
  s8 *new_var2;
  s8 *new_var;
  extern u8 D_8008ED68[];
  new_var2 = (s8 *) D_8008ED68;
  new_var = new_var2 + 0x950;
 do { temp_s1 = *((s32 *) new_var); } while (0);
  func_8001CB94();
  return (*((s32 *) new_var)) != temp_s1;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001CDE0", func_8001CE2C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001CDE0", func_8001D230);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001CDE0", func_8001D4FC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001CDE0", func_8001D748);

void func_8001D850(void) {
    extern u8 D_80085428[];
    extern struct {
        u8 f0;
        u8 f1;
        u8 pad2[2];
        s32 f4;
        u8 f8[0x2BC];
        u8 f2c4[0x67];
        u8 f32b;
        u8 f32c[3];
        u8 f32f[3][2];
        u8 f335;
        u8 f336;
        u8 f337;
    } D_8008FD80;
    extern s32 D_8008ED84[];
    extern struct {
        u8 pad0[0x14];
        u32 f14;
        u8 pad18[0x24];
    } D_80063940[];
    extern struct {
        s16 f0;
        s16 f2[3];
        s16 f8[3][2];
        s16 f14[5];
    } D_8006AF90[];
    extern struct {
        u8 f0;
        u8 pad1[0xD];
    } D_8006B1FC[];
    extern void func_8001AA70(void *, void *, s32);
    u8 *s1 = D_80085428;
    s32 i;
    s32 v;

    s1[2] = D_8008FD80.f0;
    s1[4] = D_8008FD80.f1;
    D_8008ED84[0] = D_8008FD80.f4;
    func_8001AA70(s1 + 0x50, D_8008FD80.f8, 0x2BC);
    for (i = 0; i < 0x67; i++) {
        D_80063940[i].f14 = (D_80063940[i].f14 & ~0x20) | ((D_8008FD80.f2c4[i] & 1) << 5);
    }
    s1[0x5D6] = D_8008FD80.f335;
    s1[0x5D4] = D_8008FD80.f337;
    s1[6] = D_8008FD80.f336;
    D_8006AF90[0].f0 = D_8008FD80.f32b;
    for (i = 0; i < 3; i++) {
        v = D_8008FD80.f32c[i];
        if (v == 0xFF) {
            v = 0xFFFF;
        }
        D_8006AF90[0].f2[i] = (v == 0xFFFF) ? -1 : v;

        v = D_8008FD80.f32f[i][0];
        if (v == 0xFF) {
            v = 0xFFFF;
        }
        D_8006AF90[0].f8[i][0] = (v == 0xFFFF) ? -1 : v;

        v = D_8008FD80.f32f[i][1];
        if (v == 0xFF) {
            v = 0xFFFF;
        }
        D_8006AF90[0].f8[i][1] = (v == 0xFFFF) ? -1 : v;
    }
    s1[3] = 0;
    s1[5] = 6;
    func_8001A998(s1 + 0x30C, 0x2BC);
    for (i = 0; i < 0x67; i++) {
        D_80063940[i].f14 &= ~0x40;
    }
    for (i = 0; i < 6; i++) {
        D_80063940[D_8006B1FC[i].f0].f14 |= 0x40;
    }
    s1[0x5D7] = 0;
    s1[0x5D5] = 0;
    s1[7] = 0;
    D_8006AF90[1].f0 = 0;
    for (i = 0; i < 3; i++) {
        D_8006AF90[1].f2[i] = 0xFF;
        D_8006AF90[1].f8[i][0] = 0xFF;
        D_8006AF90[1].f8[i][1] = 0xFF;
    }
}

#include "common.h"

void func_8001DAAC(void) {
    extern M2C_UNK D_80063740[];
    func_8001DADC(D_80063740, 0);
    func_8001DB54();
}

int func_8001DADC(u8 *p, s32 i) {
    extern u8 D_8008ED68[];
    extern int func_80012FB8(), func_80012FF0();
    u8 *b = D_8008ED68;
    *(u8 **)(b + i * 4 + 0x518) = p;
    func_80012FB8(*(s32 *)(p + 8), *(s16 *)(p + 0xC), *(s16 *)(p + 0xE), *(s16 *)(p + 0x10), *(s16 *)(p + 0x12));
    func_80012FF0(*(s32 *)(p + 0x18), *(s16 *)(p + 0x1C), *(s16 *)(p + 0x1E), *(s16 *)(p + 0x20), *(s16 *)(p + 0x22));
}

#include "common.h"

extern u8 D_8008ED68[];

void func_8001DB54(void)
{
  u8 *new_var2;
  u8 *new_var;
  u8 *new_var4;
  u8 (*new_var3)[];
  u8 *new_var5;
 do { new_var3 = &D_8008ED68; new_var2 = (*new_var3) + 0x538; new_var4 = (*new_var3) - -0x938; ; } while (0);
  new_var5 = (*((u8 **) new_var4) = new_var2);
  new_var = new_var5;
}

extern void func_80012FB8(), func_80012FF0();
void func_8001DB68(void) {
    u8 *base = D_8008ED68;
    s32 pad[4];
    *(u8 **)(base + 0x938) = base + 0x538;
    *(s32 *)(base + 0x93C) = 0;
}

#include "common.h"

extern s32 D_8008F6A4[];

void func_8001DB8C(char *fmt, ...) {
    char *ap = (char *)&fmt + sizeof(fmt);
    func_8001DC44(-0xA0, (s16)((*D_8008F6A4) * 8 - 0x60), 0, 0, fmt, ap, 1);
}
