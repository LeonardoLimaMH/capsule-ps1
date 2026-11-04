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

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10__80037244", func_800372B4);

extern u8 D_800922F0[];
extern s32 SpuReadDecodedData();
extern u16 D_800922F0_;
void func_800373A0(void) {
    s32 b[4];
    s32 a[4];

    if (*(u16 *)D_800922F0 & 0xF) {
        ((u8 *)a)[0] = 0x2A;
        ((u8 *)a)[1] = 0;
        a[2] = -0x20;
        func_80036DB0(a);
        ((u8 *)b)[0] = 0x26;
        func_80036DB0(b);
        ((u8 *)b)[0] = 0x11;
        func_80036DB0(b);
    }
}
