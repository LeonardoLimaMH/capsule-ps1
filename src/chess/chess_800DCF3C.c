#include "common.h"

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800DCF3C);

s32 func_800DD1D4(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;
    s32 temp_a2;
    s32 var_v0;

    temp_a1 = arg1 - M2C_FIELD(arg0, u8 *, 0x15);
    temp_a2 = arg2 - M2C_FIELD(arg0, u8 *, 0x16);
    if (temp_a1 > 0) {
        var_v0 = 5;
        if (temp_a2 <= 0) {
            var_v0 = 6;
            if (temp_a2 < 0) {
                return 7;
            }
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return var_v0;
    }
    if (temp_a1 < 0) {
        var_v0 = 3;
        if (temp_a2 <= 0) {
            var_v0 = 2;
            if (temp_a2 < 0) {
                return 1;
            }
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return var_v0;
    }
    var_v0 = (temp_a2 > 0) * 4;
    return var_v0;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800DD230);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800DD274);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800DD2EC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800DD3D8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800DD428);

void func_800DD4A8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
        func_80013920();
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800DD4D8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800DD824);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800DD920);

void func_800DDA78(void *arg0) {
    extern u8 D_80018600[];
    extern int func_800DD920();
    void *temp_v0;

    temp_v0 = func_80015B3C(&func_800DD920, D_80018600, 1);
    M2C_FIELD(temp_v0, void **, 0x14) = arg0;
    func_800FE188(arg0, temp_v0 + 0x2C);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) | 0x80000000);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800DDAD4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800DDB38);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800DDBC8);

void func_800DDC98(void *arg0, void *arg1, s32 arg2, s8 arg3) {
    extern int func_800DDEDC();
    void *temp_v0;

    temp_v0 = func_80020CE4(M2C_FIELD(arg0, s32 *, 0x70), &func_800DDEDC, 5);
    M2C_FIELD(temp_v0, s8 *, 0x5A) = arg3;
    M2C_FIELD(temp_v0, s8 *, 0x59) = arg3;
    M2C_FIELD(temp_v0, s8 *, 0x58) = arg3;
    M2C_FIELD(temp_v0, s32 *, 0x84) = arg2;
    M2C_FIELD(temp_v0, s32 *, 0x38) = (s32) (((M2C_FIELD(temp_v0, s32 *, 0x38) | 0x40) & ~0x30) | 0x10);
    M2C_FIELD(temp_v0, u16 *, 0x6A) = (u16) M2C_FIELD(arg1, u16 *, 0);
    M2C_FIELD(temp_v0, u16 *, 0x6E) = (u16) M2C_FIELD(arg1, u16 *, 2);
    M2C_FIELD(temp_v0, u16 *, 0x72) = (u16) M2C_FIELD(arg1, u16 *, 4);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800DDD34);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800DDE7C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800DDEDC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800DDF6C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800DE0F4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800DE26C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800DE518);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800DE944);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800DED1C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800DF3A0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800DF67C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800DF7CC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800DF95C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800DFD98);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800DFE44);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E01D8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E0360);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E0538);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E0A1C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E0E2C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E1180);

void func_800E1210(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x34) = (u16) (M2C_FIELD(arg0, u16 *, 0x34) + 0x10);
    M2C_FIELD(arg0, u16 *, 0x3C) = (u16) (M2C_FIELD(arg0, u16 *, 0x3C) + 0x40);
    if ((u16) M2C_FIELD(arg0, u16 *, 0x34) >= 0x191U) {
        func_80013920();
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E1258);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E1978);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E1F68);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E21D8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E260C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E2778);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E2D34);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E31BC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E33FC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E3798);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E3864);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E392C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E3F88);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E41E0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E4414);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E4764);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E4914);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E4B48);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E4EAC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E5078);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E5530);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E584C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E5D18);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E6828);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E68A4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E69A8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E6C14);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E6F18);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E7328);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E78A4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E7E5C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E7F4C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E824C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E85E0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E8994);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E8B68);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E8F64);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E9294);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E97A0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800E9C98);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800EA3E4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800EA824);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800EA97C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800EADFC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800EAFE0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800EB5BC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800EB6CC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800EB968);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800EBBBC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800EBD84);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800EC22C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800EC5B0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800EC878);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800ECB98);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800ECC94);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800ED3E0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800ED9CC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800EDAC8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800EDC1C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800EDD8C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800EDE7C);

#include "ghidra.h"
void func_800EE02C(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
    extern u8 D_80018600[];
    extern u8 D_80085A10[];
    extern int func_800EDE7C();
  int iVar1;
  undefined1 *puVar2;

  iVar1 = func_80015B3C(func_800EDE7C,D_80018600,1);
  puVar2 = D_80085A10 + param_3 * 0x2e8 + param_4 * 0x7c;
  *(uint *)(puVar2 + 0x18) = *(uint *)(puVar2 + 0x18) | 0x80000;
  *(undefined1 **)(iVar1 + 0x14) = puVar2;
  func_800FE188(puVar2,iVar1 + 0x2c);
  func_80034AB0(0x800d);
  return;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800EE0C8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800EE224);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800EE2D4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800EE434);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800EE4F4);

#include "ghidra.h"
void func_800EE690(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
    extern u8 D_80085A10[];
    extern int func_800EE4F4();
    extern int func_800F8B48();
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;

  iVar3 = 0;
  puVar4 = D_80085A10 + param_3 * 0x2e8 + param_4 * 0x7c;
  puVar4[0x20] = 3;
  puVar4[0x21] = 4;
  *(uint *)(puVar4 + 0x18) = *(uint *)(puVar4 + 0x18) | 0x200000;
  do {
    iVar2 = func_80015B3C(func_800EE4F4,func_800F8B48,1);
    func_800FE188(puVar4,iVar2 + 0x28);
    *(undefined1 *)(iVar2 + 0x30) = 0x7f;
    *(undefined1 *)(iVar2 + 0x31) = 0x7f;
    *(undefined1 *)(iVar2 + 0x32) = 0x7f;
    *(undefined1 *)(iVar2 + 0x34) = 0x7f;
    *(undefined1 *)(iVar2 + 0x35) = 0x7f;
    *(undefined1 *)(iVar2 + 0x36) = 0x7f;
    *(undefined1 *)(iVar2 + 0x38) = 5;
    uVar1 = GetTPage(0,1,0x280,0x100);
    *(undefined2 *)(iVar2 + 0x3a) = uVar1;
    uVar1 = GetClut(0x20,0x1f0);
    *(char *)(iVar2 + 0x14) = (char)iVar3;
    iVar3 = iVar3 + 1;
    *(undefined2 *)(iVar2 + 0x3c) = uVar1;
    *(undefined1 *)(iVar2 + 0x40) = 1;
    *(undefined2 *)(iVar2 + 0x42) = 0x14;
    *(undefined1 *)(iVar2 + 0x3e) = 0;
    *(undefined1 *)(iVar2 + 0x3f) = 0;
    *(undefined2 *)(iVar2 + 0x46) = 0x32;
    *(undefined2 *)(iVar2 + 0x44) = 0x32;
    *(int *)(iVar2 + 0x18) = (int)*(short *)(iVar2 + 0x2a);
  } while (iVar3 < 5);
  return;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800EE7D4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800EE8CC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800EEA30);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800EEAE0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800EEBC0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800EECC0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800EF1FC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800EF478);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800EFA28);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800EFBA4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800EFCF4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800F0BEC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800F1058);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800F1280);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800F197C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800F1BDC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800F1FF8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800F234C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800F2F2C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800F3080);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800F373C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800F3BB4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800F4484);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800F49B8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800F4CAC);

void func_800F5114(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x34) = (u16) (M2C_FIELD(arg0, u16 *, 0x34) + 9);
    M2C_FIELD(arg0, u16 *, 0x3C) = (u16) (M2C_FIELD(arg0, u16 *, 0x3C) + 0x1E);
    if ((u16) M2C_FIELD(arg0, u16 *, 0x34) >= 0x385U) {
        func_80013920();
    }
}

void func_800F515C(void) {
    extern s32 D_8008F7C0[];
    if ((*D_8008F7C0) != 0) {
        func_80013920();
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800F5188);

void func_800F5228(void *arg0)
{
  u16 temp_v1;
  *((u16 *) (((s8 *) arg0) + 0x2A)) = (u16) ((*((u16 *) (((s8 *) arg0) + 0x2A))) - func_800202A4(2));
  temp_v1 = 8;
  temp_v1 = ((*((u16 *) (((s8 *) arg0) + 0x36))) - temp_v1) + func_800202A4(0x11);
  *((u16 *) (((s8 *) arg0) + 0x36)) = temp_v1;
  if (((s16) temp_v1) >= 0x2E)
  {
    *((u16 *) (((s8 *) arg0) + 0x36)) = 0x2DU;
  }
  if (((s16) (*((u16 *) (((s8 *) arg0) + 0x36)))) <= 0)
  {
    *((u16 *) (((s8 *) arg0) + 0x36)) = 1U;
  }
  temp_v1 = 7;
  *((u16 *) (((s8 *) arg0) + 0x28)) = (u16) (((*((u16 *) (((s8 *) arg0) + 0x28))) - temp_v1) + func_800202A4(0xF));
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800F52C4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800F5514);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800F5894);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800F5AF4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800F6320);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800F68C8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800F6E88);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800F71B4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800F7484);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800F77D4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800F7AB4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800F7D1C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800F7DE4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800F8374);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800F865C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800F8B48);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800F9154);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800F97FC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800F9E50);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800FA548);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800FAC74);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800FB0A0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800FB368);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800FB650);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800FBB90);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800FBBF4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800FBF40);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800FC42C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800FCB5C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800FDA08);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800FE0B4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800FE188);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800FE21C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800FE2C4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800FE378);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800FE428);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800FE5B0);

#include "ghidra.h"
void func_800FE74C(short *param_1,short *param_2)

{
  SquareRoot0(((int)*param_1 - (int)*param_2) * ((int)*param_1 - (int)*param_2) +
                  ((int)param_1[1] - (int)param_2[1]) * ((int)param_1[1] - (int)param_2[1]) +
                  ((int)param_1[2] - (int)param_2[2]) * ((int)param_1[2] - (int)param_2[2]));
  return;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800FE7B8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C", func_800FE840);
