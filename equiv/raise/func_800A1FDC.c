#include "common.h"

#include "ghidra.h"
#define D_80085429 (*(u8 *)0x80085429)
#define D_8008542E (*(u8 *)0x8008542E)
#define D_8008F702 (*(u8 *)0x8008F702)
#define D_8008F703 (*(u8 *)0x8008F703)
#define D_800EF300 (*(s32 *)0x800EF300)
#define D_800EF304 (*(s32 *)0x800EF304)
#define D_800F0710 (*(s16 *)0x800F0710)
#define D_800F2CD8 (*(u16 *)0x800F2CD8)
#define D_800F2CF0 (*(u16 *)0x800F2CF0)
#define _D_8006AF80 (*(u16 *)0x8006AF80)
#define _D_8008ED80 (*(s32 *)0x8008ED80)
#define _D_800ED890 (*(s32 *)0x800ED890)
#define _D_800ED894 (*(s32 *)0x800ED894)
#define _D_800F2CD8 (*(u16 *)0x800F2CD8)
#define _D_800F2CF2 (*(u16 *)0x800F2CF2)
#define _D_800F2CF8 (*(u16 *)0x800F2CF8)
#define _D_800F2D10 (*(u16 *)0x800F2D10)
#define cRam8008ee6d (*(u8 *)0x8008EE6D)
#define sRam800f2cfa (*(u16 *)0x800F2CFA)
#define sRam800f2cfc (*(u16 *)0x800F2CFC)
#define sRam800f2cfe (*(u16 *)0x800F2CFE)
#define sRam800f2d00 (*(u16 *)0x800F2D00)
#define sRam800f2d02 (*(u16 *)0x800F2D02)
#define sRam800f2d04 (*(u16 *)0x800F2D04)
#define sRam800f2d06 (*(u16 *)0x800F2D06)
#define sRam800f2d08 (*(u16 *)0x800F2D08)
#define sRam800f2d0a (*(u16 *)0x800F2D0A)
#define sRam800f2d0c (*(u16 *)0x800F2D0C)
#define sRam800f2d0e (*(u16 *)0x800F2D0E)
extern s32 SpuInitHot();
extern s32 func_800135A8();
extern s32 func_800A1DD4();
extern s32 func_800A2A90();
extern s32 func_800A3434();
extern s32 func_800BE290();
extern s32 func_800BE434();
extern s32 func_800BE61C();
extern s32 func_800BE674();
extern s32 func_800BEA6C();
extern s32 func_800BEA90();
extern s32 func_800BEB3C();
extern s32 func_800BEB60();
extern s32 func_800BEB68();
extern s32 func_800BEBD0();
extern s32 func_800BEBD8();
extern s32 func_800BEBEC();
extern s32 func_800BED10();
extern s32 func_800BEDA8();
extern s32 func_800BF14C();
extern s32 func_800D1CC4();
extern s32 rand();
undefined4 func_800A1FDC(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  if ((D_8008F702 == '\x01') && (_D_800ED890 != 0xb)) {
    return 0;
  }
  if (_D_800ED890 == 1) {
    *(int *)((uint)_D_8006AF80 * 0x1a8 + -0x7ff6e91c) =
         *(int *)((uint)_D_8006AF80 * 0x1a8 + -0x7ff6e91c) + 1;
    if (_D_800ED894 == 0xd) {
      iVar1 = func_800BEBEC();
      if (iVar1 != 0) {
        _D_800ED894 = 0xe;
      }
    }
    else if (_D_800ED894 < 0xe) {
      if (_D_800ED894 != 0xc) {
        return 0;
      }
      func_800BEBD8();
      _D_800ED894 = 0xd;
    }
    else if (_D_800ED894 == 0xe) {
      func_800BED10();
      _D_800ED894 = 0xf;
    }
    else {
      if (_D_800ED894 != 0xf) {
        return 0;
      }
      iVar1 = func_800BEDA8();
      if (iVar1 != 0) {
        *(uint *)(D_800EF300 + 0x38) = *(uint *)(D_800EF300 + 0x38) | 1;
        *(uint *)(D_800EF304 + 0x38) = *(uint *)(D_800EF304 + 0x38) | 1;
        *(uint *)(D_800EF300 + 0x38) = *(uint *)(D_800EF300 + 0x38) & 0xffffffbf;
        _D_800ED890 = 2;
        *(uint *)(D_800EF304 + 0x38) = *(uint *)(D_800EF304 + 0x38) & 0xffffffbf;
        func_800D1CC4(_D_8006AF80,1,0,0);
        _D_800ED894 = 0x10;
      }
    }
  }
  else if (_D_800ED890 < 2) {
    if (_D_800ED890 != 0) {
      return 0;
    }
    switch(_D_800ED894) {
    case 0:
      D_8008F703 = 0;
      func_800BE290();
      _D_800ED894 = 1;
      break;
    case 1:
      iVar1 = func_800BE434();
      if (iVar1 != 0) {
        _D_800ED894 = 2;
      }
      break;
    case 2:
      func_800BE61C();
      _D_800ED894 = 3;
      break;
    case 3:
      iVar1 = func_800BE674();
      if (iVar1 != 0) {
        _D_800ED894 = 6;
      }
      break;
    case 6:
      func_800BEA6C();
      _D_800ED894 = 7;
      break;
    case 7:
      iVar1 = func_800BEA90();
      if (iVar1 != 0) {
        _D_800ED894 = 8;
      }
      break;
    case 8:
      func_800BEB3C();
      _D_800ED894 = 9;
      break;
    case 9:
      func_800BEB60();
      _D_800ED894 = 10;
      break;
    case 10:
      func_800BEB68();
      _D_800ED894 = 0xb;
      break;
    case 0xb:
      if (D_80085429 == '\0') {
        func_800A2A90();
      }
      if (D_8008F702 != '\x01') {
        *(int *)((uint)_D_8006AF80 * 0x1a8 + -0x7ff6e91c) =
             *(int *)((uint)_D_8006AF80 * 0x1a8 + -0x7ff6e91c) + 1;
        func_800135A8();
        if (cRam8008ee6d != '\0') {
          D_8008542E = D_8008542E | 1;
        }
        if (0x78 < *(int *)((uint)_D_8006AF80 * 0x1a8 + -0x7ff6e91c)) {
          func_800BEBD0();
        }
        if (*(int *)((uint)_D_8006AF80 * 0x1a8 + -0x7ff6e91c) < 300) {
          return 0;
        }
        func_800A3434();
        uVar7 = (uint)_D_8006AF80;
        iVar1 = uVar7 * 0x1a8;
        *(short *)(iVar1 + -0x7ff6e916) = *(short *)(iVar1 + -0x7ff6e916) + _D_800F2CF8
        ;
        *(short *)(iVar1 + -0x7ff6e910) = *(short *)(iVar1 + -0x7ff6e910) + sRam800f2d04;
        *(short *)(iVar1 + -0x7ff6e90e) = *(short *)(iVar1 + -0x7ff6e90e) + sRam800f2cfc;
        *(short *)(iVar1 + -0x7ff6e90c) = *(short *)(iVar1 + -0x7ff6e90c) + sRam800f2cfe;
        *(short *)(iVar1 + -0x7ff6e90a) = *(short *)(iVar1 + -0x7ff6e90a) + sRam800f2d00;
        *(short *)(iVar1 + -0x7ff6e908) = *(short *)(iVar1 + -0x7ff6e908) + sRam800f2d06;
        *(short *)(iVar1 + -0x7ff6e906) = *(short *)(iVar1 + -0x7ff6e906) + sRam800f2cfa;
        *(short *)(iVar1 + -0x7ff6e904) = *(short *)(iVar1 + -0x7ff6e904) + sRam800f2d02;
        *(short *)(iVar1 + -0x7ff6e900) = *(short *)(iVar1 + -0x7ff6e900) + sRam800f2d08;
        *(short *)(iVar1 + -0x7ff6e8fe) = *(short *)(iVar1 + -0x7ff6e8fe) + sRam800f2d0a;
        _D_800ED890 = 1;
        *(short *)(iVar1 + -0x7ff6e8fc) = *(short *)(iVar1 + -0x7ff6e8fc) + sRam800f2d0c;
        if (*(short *)(iVar1 + -0x7ff6e8fa) != 0) {
          *(short *)(iVar1 + -0x7ff6e8fa) = *(short *)(iVar1 + -0x7ff6e8fa) + sRam800f2d0e;
        }
        iVar1 = 1;
        puVar3 = (undefined2 *)0x800f2cda;
        do {
          *puVar3 = 0;
          iVar1 = iVar1 + 1;
          puVar3 = puVar3 + 1;
        } while (iVar1 < 0xc);
        iVar1 = 1;
        iVar6 = uVar7 * 0x1a8 + -0x7ff6e9e6;
        _D_800F2CD8 = 0;
        D_800F2CF0 = *(ushort *)(uVar7 * 0x1a8 + -0x7ff6e88e);
        _D_800F2CF2 = 1;
        do {
          if (D_800F2CF0 < *(ushort *)(iVar6 + 0x15a)) {
            iVar5 = 1;
            puVar3 = (undefined2 *)&D_800F2CD8;
            do {
              puVar3 = puVar3 + 1;
              *puVar3 = 0;
              iVar5 = iVar5 + 1;
            } while (iVar5 < 0xc);
            D_800F2CF0 = *(ushort *)(iVar6 + 0x15a);
            _D_800F2CF2 = 1;
            _D_800F2CD8 = (short)iVar1;
          }
          else if (D_800F2CF0 == *(ushort *)(iVar6 + 0x15a)) {
            uVar4 = (uint)_D_800F2CF2;
            _D_800F2CF2 = _D_800F2CF2 + 1;
            *(short *)(&D_800F2CD8 + uVar4 * 2) = (short)iVar1;
          }
          iVar1 = iVar1 + 1;
          iVar6 = iVar6 + 2;
        } while (iVar1 < 0xc);
        uVar2 = _D_800F2CD8;
        if (_D_800F2CF2 != 1) {
          iVar1 = rand();
          uVar2 = *(undefined2 *)
                   (&D_800F2CD8 +
                   ((uint)(iVar1 + _D_8008ED80) % (uint)_D_800F2CF2) * 2);
        }
        _D_800F2D10 = uVar2;
        switch(uVar2) {
        case 0:
          *(short *)(uVar7 * 0x1a8 + -0x7ff6e916) = *(short *)(uVar7 * 0x1a8 + -0x7ff6e916) + 5;
          break;
        case 1:
          *(short *)(uVar7 * 0x1a8 + -0x7ff6e906) = *(short *)(uVar7 * 0x1a8 + -0x7ff6e906) + 5;
          break;
        case 2:
          *(short *)(uVar7 * 0x1a8 + -0x7ff6e90e) = *(short *)(uVar7 * 0x1a8 + -0x7ff6e90e) + 5;
          break;
        case 3:
          *(short *)(uVar7 * 0x1a8 + -0x7ff6e90c) = *(short *)(uVar7 * 0x1a8 + -0x7ff6e90c) + 5;
          break;
        case 4:
          *(short *)(uVar7 * 0x1a8 + -0x7ff6e90a) = *(short *)(uVar7 * 0x1a8 + -0x7ff6e90a) + 5;
          break;
        case 5:
          *(short *)(uVar7 * 0x1a8 + -0x7ff6e904) = *(short *)(uVar7 * 0x1a8 + -0x7ff6e904) + 5;
          break;
        case 6:
          *(short *)(uVar7 * 0x1a8 + -0x7ff6e910) = *(short *)(uVar7 * 0x1a8 + -0x7ff6e910) + 5;
          break;
        case 7:
          *(short *)(uVar7 * 0x1a8 + -0x7ff6e908) = *(short *)(uVar7 * 0x1a8 + -0x7ff6e908) + 5;
          break;
        case 8:
          *(short *)(uVar7 * 0x1a8 + -0x7ff6e900) = *(short *)(uVar7 * 0x1a8 + -0x7ff6e900) + 5;
          break;
        case 9:
          *(short *)(uVar7 * 0x1a8 + -0x7ff6e8fe) = *(short *)(uVar7 * 0x1a8 + -0x7ff6e8fe) + 5;
          break;
        case 10:
          *(short *)(uVar7 * 0x1a8 + -0x7ff6e8fc) = *(short *)(uVar7 * 0x1a8 + -0x7ff6e8fc) + 5;
          break;
        case 0xb:
          iVar1 = uVar7 * 0x1a8;
          if (*(short *)(iVar1 + -0x7ff6e8fa) != 0) {
            *(short *)(iVar1 + -0x7ff6e8fa) = *(short *)(iVar1 + -0x7ff6e8fa) + 5;
          }
        }
        SpuInitHot();
        func_800A1DD4();
        _D_800ED894 = 0xc;
      }
    }
  }
  else {
    if (_D_800ED890 != 2) {
      return 0;
    }
    *(int *)((uint)_D_8006AF80 * 0x1a8 + -0x7ff6e91c) =
         *(int *)((uint)_D_8006AF80 * 0x1a8 + -0x7ff6e91c) + 1;
    if (_D_800ED894 != 0x10) {
      if (_D_800ED894 != 0x11) {
        return 0;
      }
      if (D_800F0710 != 0) {
        return 0;
      }
      _D_800ED890 = 0;
      _D_800ED894 = 0;
      return 0xffffffff;
    }
    func_800BF14C();
    _D_800ED894 = 0x11;
  }
  return 0;
}
