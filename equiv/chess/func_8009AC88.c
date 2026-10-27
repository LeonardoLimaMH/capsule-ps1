/* rand-u16: 0x8008EE44 1 0,1,2,3,4,5,6,7,8,9,10,11,99,65535 */
/* rand-u16: 0x8008EE48 1 0,1,2,3,4,5,9,10,11,99,65535 */
#include "common.h"

/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,10,15,19,20,21,31,32,63,64,98,99,100,65535 */
#include "ghidra.h"
#define DAT_80085428 (*(s32 *)0x80085428)
#define DAT_80085429 (*(u8 *)0x80085429)
#define DAT_80085430 (*(u16 *)0x80085430)
#define DAT_80085434 (*(u16 *)0x80085434)
#define DAT_800859f0 (*(u8 *)0x800859F0)
#define DAT_80085a01 (*(u8 *)0x80085A01)
#define DAT_80085a10 (*(u8 *)0x80085A10)
#define DAT_80085a8c (*(u8 *)0x80085A8C)
#define DAT_80085b08 (*(u8 *)0x80085B08)
#define DAT_80085b84 (*(u8 *)0x80085B84)
#define DAT_80085c00 (*(u8 *)0x80085C00)
#define DAT_80085c7c (*(u8 *)0x80085C7C)
#define DAT_80085c91 (*(u8 *)0x80085C91)
#define DAT_80085c92 (*(u8 *)0x80085C92)
#define DAT_80085cf8 (*(u8 *)0x80085CF8)
#define DAT_80085d74 (*(u8 *)0x80085D74)
#define DAT_80085df0 (*(u8 *)0x80085DF0)
#define DAT_80085e6c (*(u8 *)0x80085E6C)
#define DAT_80085ee8 (*(u8 *)0x80085EE8)
#define DAT_80085f64 (*(u8 *)0x80085F64)
#define DAT_80085f79 (*(u8 *)0x80085F79)
#define DAT_80085f7a (*(u8 *)0x80085F7A)
#define DAT_80086010 (*(u8 *)0x80086010)
#define DAT_80086011 (*(u8 *)0x80086011)
#define DAT_80086013 (*(u8 *)0x80086013)
#define DAT_8008edf0 (*(s32 *)0x8008EDF0)
#define DAT_8008ee00 (*(s32 *)0x8008EE00)
#define DAT_8008ee44 (*(u16 *)0x8008EE44)
#define DAT_8008ee48 (*(u16 *)0x8008EE48)
#define DAT_8008ee4c (*(u16 *)0x8008EE4C)
#define DAT_8008ee50 (*(u16 *)0x8008EE50)
#define DAT_8008ee54 (*(u16 *)0x8008EE54)
#define DAT_8008ee6a (*(s8 *)0x8008EE6A)
#define DAT_801010dc (*(s32 *)0x801010DC)
#define D_800978B4 ((u8 *)0x800978B4)
#define D_800978D4 ((u8 *)0x800978D4)
#define func_80012200 ((s32 (*)())0x80012200)
#define func_80012508 ((s32 (*)())0x80012508)
#define func_80012578 ((s32 (*)())0x80012578)
#define func_800152C8 ((s32 (*)())0x800152C8)
#define func_8001611C ((s32 (*)())0x8001611C)
#define func_80019654 ((s32 (*)())0x80019654)
#define func_8001A49C ((s32 (*)())0x8001A49C)
#define func_8001DB8C ((s32 (*)())0x8001DB8C)
#define func_8002E640 ((s32 (*)())0x8002E640)
#define func_800337EC ((s32 (*)())0x800337EC)
#define func_800338DC ((s32 (*)())0x800338DC)
#define func_80099B48 ((s32 (*)())0x80099B48)
#define func_80099D38 ((s32 (*)())0x80099D38)
#define func_8009A30C ((s32 (*)())0x8009A30C)
#define func_8009A48C ((s32 (*)())0x8009A48C)
#define func_8009A498 ((s32 (*)())0x8009A498)
#define func_8009A608 ((s32 (*)())0x8009A608)
#define func_8009A75C ((s32 (*)())0x8009A75C)
#define func_8009A8B4 ((s32 (*)())0x8009A8B4)
#define func_8009AAA4 ((s32 (*)())0x8009AAA4)
#define func_8009B4C8 ((s32 (*)())0x8009B4C8)
#define func_8009BB98 ((s32 (*)())0x8009BB98)
#define func_8009BE30 ((s32 (*)())0x8009BE30)
#define func_8009C0E4 ((s32 (*)())0x8009C0E4)
#define func_8009C1B4 ((s32 (*)())0x8009C1B4)
#define func_8009C6F8 ((s32 (*)())0x8009C6F8)
#define func_8009C758 ((s32 (*)())0x8009C758)
#define func_8009C7D4 ((s32 (*)())0x8009C7D4)
#define func_8009C898 ((s32 (*)())0x8009C898)
#define func_8009C964 ((s32 (*)())0x8009C964)
#define func_800A461C ((s32 (*)())0x800A461C)
#define func_800AF9D4 ((s32 (*)())0x800AF9D4)
#define func_800B881C ((s32 (*)())0x800B881C)
#define func_800CA35C ((s32 (*)())0x800CA35C)
#define func_800CA4CC ((s32 (*)())0x800CA4CC)
#define func_800CA574 ((s32 (*)())0x800CA574)
extern s32 rand();
void func_8009AC88(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;

  rand();
  uVar3 = 0;
  if ((DAT_80085429 != '\0') && (((DAT_8008edf0 & 0x800) != 0 || ((DAT_8008ee00 & 0x800) != 0)))) {
    uVar3 = 1;
  }
  func_8001DB8C(D_800978B4,DAT_8008ee44,DAT_8008ee48,DAT_8008ee4c,DAT_8008ee50,DAT_8008ee54);
  if (DAT_80085429 != '\0') {
    func_8001DB8C(D_800978D4,DAT_80085a10 + 1,DAT_80085a8c + 1,DAT_80085b08 + 1,DAT_80085b84 + 1,
                  DAT_80085c00 + 1,DAT_80085c7c + 1,DAT_80085c91,DAT_80085c92);
    func_8001DB8C(D_800978D4,DAT_80085cf8 + 1,DAT_80085d74 + 1,DAT_80085df0 + 1,DAT_80085e6c + 1,
                  DAT_80085ee8 + 1,DAT_80085f64 + 1,DAT_80085f79,DAT_80085f7a);
  }
  switch(DAT_8008ee44) {
  case 0:
    func_8009A498(&DAT_80085428);
    break;
  case 1:
    if (DAT_8008ee48 == 1) {
      func_8009C6F8(&DAT_80085428);
    }
    else if (DAT_8008ee48 < 2) {
      if (DAT_8008ee48 != 0) break;
      func_8009C1B4(&DAT_80085428,0,0);
      func_8009C1B4(&DAT_80085428,0,1);
      func_8009C1B4(&DAT_80085428,1,0);
      func_8009C1B4(&DAT_80085428,1,1);
    }
    else {
      if (DAT_8008ee48 != 2) {
        if (DAT_8008ee48 != 3) break;
        func_8009C7D4(&DAT_80085428);
        func_8009C898();
        goto LAB_8009aedc;
      }
      func_8009C758(&DAT_80085428);
    }
    goto LAB_8009ae9c;
  case 2:
    func_8009A608(&DAT_80085428);
    break;
  case 3:
    if (DAT_8008ee48 == 1) {
      func_8001A49C(0x8013b9b4);
      func_8001A49C(*(undefined4 *)(&DAT_801010dc + (uint)DAT_80085a01 * 0x34));
    }
    else if (DAT_8008ee48 < 2) {
      if (DAT_8008ee48 != 0) break;
    }
    else {
      if (DAT_8008ee48 != 2) {
        if (DAT_8008ee48 != 3) break;
        if (DAT_80085429 != '\0') {
          func_80099B48(&DAT_80085428);
        }
        func_8009C0E4(&DAT_80085428);
        func_8009C964(&DAT_80085428);
        goto LAB_8009aedc;
      }
      func_8009B4C8(&DAT_80085428);
    }
    goto LAB_8009ae9c;
  case 4:
    if (DAT_8008ee48 == 1) break;
    if (1 < DAT_8008ee48) {
      if (DAT_8008ee48 != 2) break;
      goto LAB_8009aedc;
    }
    if (DAT_8008ee48 != 0) break;
    func_8009BB98(&DAT_80085428);
    DAT_80085434 = 0;
    goto LAB_8009ae9c;
  case 5:
    DAT_8008ee6a = 2;
    func_8009BE30(&DAT_80085428,DAT_8008ee48 / 5,(uint)DAT_8008ee48 % 5);
    func_80012578();
    if (DAT_8008ee48 != 10) break;
    goto LAB_8009aedc;
  case 6:
    func_8009A75C(&DAT_80085428);
    break;
  case 7:
    DAT_8008ee6a = 0;
    func_800A461C(&DAT_80085428);
    func_800B881C(&DAT_80085428);
    func_800AF9D4(&DAT_80085428);
    DAT_80086011 = 0;
    DAT_80086013 = 0;
    if (DAT_80085429 != '\0') {
      func_80099D38(&DAT_80085428);
    }
LAB_8009aedc:
    func_80012508();
    break;
  case 8:
    func_8009A8B4(&DAT_80085428);
    break;
  case 9:
    if (DAT_8008ee48 == 1) {
      iVar1 = func_80019654();
      if (iVar1 == 0) break;
    }
    else {
      if (1 < DAT_8008ee48) {
        if (DAT_8008ee48 != 2) break;
        DAT_80085430 = func_800CA4CC(&DAT_80085428);
        goto LAB_8009aedc;
      }
      if (DAT_8008ee48 != 0) break;
      func_800CA574(&DAT_80085428);
    }
    goto LAB_8009ae9c;
  case 10:
    if (DAT_8008ee48 != 0) {
      if ((DAT_8008ee48 != 1) ||
         ((uVar2 = func_800337EC(), (uVar2 & 0x80) == 0 && ((DAT_800859f0 & 4) != 0)))) break;
      goto LAB_8009aedc;
    }
    func_800338DC(DAT_80085430);
    DAT_80085434 = 0;
LAB_8009ae9c:
    func_80012578();
    break;
  case 0xb:
    func_8009AAA4(&DAT_80085428);
    break;
  case 0xc:
    func_80012200(func_8002E640);
    func_8001611C(0x1000);
    break;
  case 0xd:
    func_8009A48C(&DAT_80085428);
  }
  if (DAT_80085429 != '\0') {
    func_8009A30C(&DAT_80085428,uVar3);
  }
  if (DAT_80086010 != '\0') {
    func_800CA35C();
    func_800152C8();
  }
  return;
}
