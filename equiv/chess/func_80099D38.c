#include "common.h"

/* real-callee: func_80015B3C */
/* real-callee: func_800136C8 */
/* real-callee: func_80013C14 */
/* rand-u16: 0x80078B7C 1 0 */
/* rand-u16: 0x80078B7E 1 32786 */
/* rand-u16: 0x8012C554 1 0 */
/* rand-u16: 0x8012C556 1 0 */
/* rand-u16: 0x8012C578 1 4096 */
/* rand-u16: 0x8012C57A 1 32786 */
/* rand-u16: 0x8012C57C 1 0 */
/* rand-u16: 0x8012C57E 1 0 */
/* rand-u16: 0x80121008 1 0 */
/* rand-u16: 0x8012100A 1 0 */
/* rand-u16: 0x8012C558 16 0 */
/* rand-u16: 0x80121000 1 144 */
/* rand-u16: 0x80119714 1 0,1,5,19,20,29,30,31,199 */
/* rand-u16: 0x80119716 1 0 */
/* rand-ptr: 0x8008F760 3 */
/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,10,15,19,20,21,31,32,63,64,98,99,100,65535 */
/* real-callee: __adddf3 */
/* real-callee: __divdf3 */
/* real-callee: __fixdfsi */
/* real-callee: __floatsidf */
/* real-callee: __muldf3 */
/* real-callee: __negdf2 */
/* real-callee: __subdf3 */
/* real-callee: _add_mant_d */
/* real-callee: _comp_mant */
/* real-callee: _dbl_shift */
/* real-callee: _dbl_shift_us */
/* real-callee: _err_math */
/* real-callee: _mainasu */
/* real-callee: _mul_mant_d */
/* real-callee: func_80015D14 */
/* real-callee: func_8004FE2C */
/* real-callee: func_800459CC */
/* callee-contract: RotTransPers */
/* callee-contract: RotTransPers4 */
/* callee-contract: SetRotMatrix */
/* callee-contract: SetTransMatrix */
/* real-callee: func_800FE188 */
/* real-callee: func_800FEC2C */
/* real-callee: func_800FE21C */
/* real-callee: func_800FEBF4 */
/* real-callee: func_800FF460 */
/* real-callee: func_800FF0A0 */
/* real-callee: func_800FF3B4 */
/* real-callee: func_800FE74C */
/* real-callee: func_800DD428 */
/* real-callee: func_800FF190 */
/* real-callee: func_800FF2CC */
/* real-callee: func_800DDA78 */
/* compiler: 2.8.1-psx */
#include "ghidra.h"
#define D_801010B0 (*(s32 *)0x801010B0)
#define func_80020304 ((s32 (*)())0x80020304)
#define func_80099A5C ((s32 (*)())0x80099A5C)
#define func_800A835C ((s32 (*)())0x800A835C)
int func_80099D38(int param_1)

{
  union { u64 align; u8 bytes[0x58]; } recovered_local_frame;
#define local_80 (*(undefined1 volatile (*)[72])(recovered_local_frame.bytes + 0x0))
#define local_38 (*(int volatile *)(recovered_local_frame.bytes + 0x48))
#define local_34 (*(uint * volatile *)(recovered_local_frame.bytes + 0x4C))
#define local_30 (*(int volatile *)(recovered_local_frame.bytes + 0x50))
#define local_2c (*(int volatile *)(recovered_local_frame.bytes + 0x54))

  bool bVar1;
  s8 cVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;






  iVar14 = 0;
  local_38 = param_1 + 0x5d0;
  local_2c = 0x18;
  local_34 = *(uint **)(((u8 *)0x801010B0) + (uint)*(byte *)(param_1 + 0x5d9) * 0x34);
  do {
    local_30 = func_80020304(4);
    local_30 = local_30 + 2;
    iVar11 = 0;
    puVar6 = local_80;
    do {
      puVar6[1] = 0;
      *puVar6 = 0;
      iVar11 = iVar11 + 1;
      puVar6 = puVar6 + 2;
    } while (iVar11 < 0x23);
    iVar13 = 0;
    iVar12 = 0;
    iVar11 = local_38 + iVar14;
    puVar9 = local_34;
    do {
      iVar7 = 0;
      puVar6 = local_80 + iVar13 * 2;
      puVar8 = puVar9;
      do {
        if ((((*puVar8 >> 0x16 & 3) == (uint)*(byte *)(iVar11 + 0xe)) &&
            (uVar4 = *puVar8 >> 6 & 0x1fff, uVar4 != 0)) && (uVar4 < 3)) {
          *puVar6 = (s8)iVar12;
          puVar6[1] = (s8)iVar7;
          puVar6 = puVar6 + 2;
          iVar13 = iVar13 + 1;
        }
        iVar7 = iVar7 + 1;
        puVar8 = puVar8 + 1;
      } while (iVar7 < 0xd);
      iVar12 = iVar12 + 1;
      puVar9 = puVar9 + 0xd;
    } while (iVar12 < 0xd);
    iVar11 = 5;
    iVar12 = local_30 + 1;
    do {
      iVar7 = local_38 + local_2c + iVar11 * 0x7c;
      iVar10 = 0;
      if ((iVar11 == 5) || (iVar11 < iVar12 / 2)) {
        do {
          iVar5 = func_80020304(iVar13);
          iVar10 = iVar10 + 1;
          *(undefined1 *)(iVar7 + 0x15) = local_80[iVar5 * 2];
          *(undefined1 *)(iVar7 + 0x16) = local_80[iVar5 * 2 + 1];
          cVar2 = func_80099A5C(param_1,iVar7,*(undefined1 *)(iVar7 + 0x15),
                               *(undefined1 *)(iVar7 + 0x16),iVar11);
          if (cVar2 != '\0') break;
        } while (iVar10 < 100);
        bVar1 = iVar10 < 100;
        puVar6 = local_80;
        if (iVar10 == 100) {
          do {
            *(undefined1 *)(iVar7 + 0x15) = *puVar6;
            *(undefined1 *)(iVar7 + 0x16) = puVar6[1];
            cVar2 = func_80099A5C(param_1,iVar7,*(undefined1 *)(iVar7 + 0x15),
                                 *(undefined1 *)(iVar7 + 0x16),iVar11);
            bVar1 = true;
            puVar6 = puVar6 + 2;
          } while (cVar2 == '\0');
        }
      }
      else {
        iVar10 = 1;
        if (iVar11 < local_30) {
          do {
            uVar3 = func_80020304(0xd);
            *(undefined1 *)(iVar7 + 0x15) = uVar3;
            uVar3 = func_80020304(0xd);
            *(undefined1 *)(iVar7 + 0x16) = uVar3;
            cVar2 = func_80099A5C(param_1,iVar7,*(undefined1 *)(iVar7 + 0x15),
                                 *(undefined1 *)(iVar7 + 0x16),iVar11);
            bVar1 = iVar10 < 100;
            if (cVar2 != '\0') goto LAB_80099fb0;
            iVar10 = iVar10 + 1;
          } while (bVar1);
          bVar1 = false;
        }
        else {
          iVar10 = 100;
LAB_80099fb0:
          bVar1 = iVar10 < 100;
        }
      }
      if (bVar1) {
        *(byte *)((int)local_34 +
                 (uint)*(byte *)(iVar7 + 0x16) * 4 + (uint)*(byte *)(iVar7 + 0x15) * 0x34 + 3) =
             (s8)iVar11 + 1U & 0x7f;
        if (iVar14 != 0) {
          iVar10 = (uint)*(byte *)(iVar7 + 0x16) * 4 + (uint)*(byte *)(iVar7 + 0x15) * 0x34;
          *(byte *)((int)local_34 + iVar10 + 3) = *(byte *)((int)local_34 + iVar10 + 3) | 0x80;
        }
      }
      else {
        *(undefined1 *)(iVar7 + 0xe) = 0;
        *(undefined1 *)(iVar7 + 0x15) = 0xff;
        *(undefined1 *)(iVar7 + 0x16) = 0xff;
        *(uint *)(iVar7 + 0x18) = *(uint *)(iVar7 + 0x18) | 0x100;
      }
      *(undefined1 *)(iVar7 + 0x17) = 1;
      uVar3 = func_800A835C(param_1,iVar14);
      iVar11 = iVar11 + -1;
      *(undefined1 *)(iVar7 + 0x25) = uVar3;
    } while (-1 < iVar11);
    iVar14 = iVar14 + 1;
    local_2c = local_2c + 0x2e8;
    if (1 < iVar14) {
      return 0;
    }
  } while( true );
}

#undef local_80
#undef local_38
#undef local_34
#undef local_30
#undef local_2c

/* arg0: 0x80140000 */
/* real-callee: func_80020304 */
/* real-callee: rand */
/* real-callee: func_800A835C */
/* rand-u16: 0x801405D8 1 0,256,768 */
/* rand-u16: 0x801405DE 1 513 */
/* rand-u32-strided: 0x801010B0 4 52 0x80150000 */
/* rand-u32-strided: 0x80150000 169 4 0x42 */
/* rand-u32-strided: 0x801405E8 12 124 0,1,3 */
/* rand-u32-strided: 0x80140600 12 124 0,0x200,0x80000000 */
/* rand-u32-strided: 0x80150000 7 4 0x400042 */
/* rand-u32-strided: 0x80150034 7 4 0x400042 */
/* rand-u32-strided: 0x80150068 7 4 0x400042 */
/* rand-u32-strided: 0x8015009c 7 4 0x400042 */
/* rand-u32-strided: 0x801500d0 7 4 0x400042 */
/* rand-u32-strided: 0x801501a0 7 4 0x800042 */
/* rand-u32-strided: 0x801501d4 7 4 0x800042 */
/* rand-u32-strided: 0x80150208 7 4 0x800042 */
/* rand-u32-strided: 0x8015023c 7 4 0x800042 */
/* rand-u32-strided: 0x80150270 7 4 0x800042 */
