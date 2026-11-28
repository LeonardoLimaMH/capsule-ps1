#include "common.h"
#include "yuugi.h"

void func_80019C58(void)
{
  s32 var_s0;
  do
  {
  }
  while (DsControlB(9, 0, 0) == 0);
  do
  {
  }
  while (DsReset() == 0);
  var_s0 = 0;
  do
  {
    VSync(0);
    var_s0 += 1;
  }
  while (var_s0 < 0xC8);
}

#include "ghidra.h"
void func_80019CB8(int param_1)
{
  int iVar1;
  int iVar2;
  VSync(3);
  do
  {
    iVar1 = DsControlB(9, 0, 0);
  }
  while (iVar1 == 0);
  do
  {
    iVar1 = DsReset();
  }
  while (iVar1 == 0);
  iVar2 = 0;
  do
  {
    VSync(0);
    iVar2 = iVar2 + 1;
  }
  while (iVar2 < 200);
  *((undefined1 *) (param_1 + 3)) = 0xff;
  *((undefined1 *) (param_1 + 0x408)) = 0;
  *((undefined1 *) (param_1 + 2)) = 0;
  return;
}

void func_80019D38(s32 arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg2, s32 *, 0) = arg1;
    M2C_FIELD(arg2, s32 *, 4) = (s32) (arg0 & 0xFFFF);
}

void func_80019D48(int param_1,undefined4 param_2,undefined4 param_3)

{
  func_80019DB4(param_1,param_1 + 0x7ffU >> 0xb & 0xffff,param_2,param_3);
  return;
}

void func_80019D7C(int param_1,undefined4 param_2,undefined4 param_3)

{
  func_80019DB4(0,param_1 + 0x7ffU >> 0xb & 0xffff,param_2,param_3);
  return;
}

extern u8 D_8008ED68[];
extern u8 D_8008F7E0[];
void func_80019DB4(s32 arg0, u16 arg1, s32 arg2, s32 arg3) {
    s32 buf[8];
    s32 *p = buf;
    u8 *a = D_8008ED68;
    u8 *b = D_8008F7E0;
    p[0] = arg2;
    p[1] = arg1;
    func_800190F4(6, arg3, p, arg0);
    *(s32 *)(a + 0xF8) = 1;
    b[0x40C] = 1;
}

void func_80019E1C(s32 *f) {
    register s32 fd asm("s3");
    s32 size;
    s32 i;

    fd = PCopen(f[2], 0, 0);
    if (fd == -1) {
        return;
    }
    size = PClseek(fd, 0, 2);
    PClseek(fd, 0, 0);
    for (i = 0; (i + 1) * 800 < size; i++) {
        PClseek(fd, i * 800, 0);
        func_800425BC(fd, f[0] + i * 800, 800);
    }
    size -= i * 800;
    if (size > 0) {
        func_800425BC(fd, f[0] + i * 800, size);
    }
    func_800423E8(fd);
}
