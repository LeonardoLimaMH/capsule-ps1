#include "common.h"
#include "yuugi.h"

#include "common.h"

extern u8 D_800922F0[];
extern s32 SpuReadDecodedData();

typedef struct {
    u8 cmd;
    u8 arg;
    u8 pad[6];
    s32 value;
} Msg;

void func_80037244(s16 value, s8 arg)
{
  Msg m;
  m.cmd = 0x29;
  m.value = value;
  m.arg = arg;
  func_80036DB0(&m);
}

#include "common.h"


void func_8003727C(s16 value, s8 arg)
{
  Msg m;
  m.cmd = 0x2A;
  m.value = value;
  m.arg = arg;
  func_80036DB0(&m);
}

s32 func_800372B4(void) {
    typedef struct {
        u16 flags;
        u8 pad0[0x146];
        s32 status;
        u8 decoded[0x1000];
        s16 *a0, *a1, *b0, *b1;
        s32 energyA, energyB;
    } SoundState;
    SoundState *p = (SoundState *)D_800922F0;
    s16 *a, *b;
    s32 i, v;
    if ((p->flags & 3) == 0) {
        v = SpuReadDecodedData(p->decoded, 5);
        p->status = v;
        if (v == 0) {
            a = p->a0;
            b = p->b0;
        } else {
            a = p->a1;
            b = p->b1;
        }
        p = (SoundState *)D_800922F0;
        p->energyA = 0;
        p->energyB = 0;
        for (i = 0; i < 256; i++) {
            p->energyA += (*a * *a) >> 8;
            p->energyB += (*b * *b) >> 8;
            a++;
            b++;
        }
        v = *(s16 *)((u8 *)p + 0x115E);
        p->energyA = v;
        p->energyB = *(s16 *)((u8 *)p + 0x1162);
        return v;
    }
    return 0;
}

extern u16 D_800922F0_;
void func_800373A0(void) {
    Msg b;
    Msg a;

    if (*(u16 *)D_800922F0 & 0xF) {
        register Msg *p asm("a0") = &a;
        p->cmd = 0x2A;
        p->value = -0x20;
        p->arg = 0;
        func_80036DB0(p);
        b.cmd = 0x26;
        func_80036DB0(&b);
        b.cmd = 0x11;
        func_80036DB0(&b);
    }
}
