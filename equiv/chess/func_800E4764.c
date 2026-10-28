#include "common.h"

typedef struct { u32 value; } __attribute__((packed)) UnalignedTaskWord;
#define UNALIGNED_U32(p) (((UnalignedTaskWord *)(p))->value)
#include "common.h"

#include "common.h"

#include "common.h"

/* task-callback */
/* callee-contract: RotAverage4 */
/* rand-u16: 0x8008ED68 1 0 */
/* rand-u16: 0x8008ED6A 1 32786 */
/* rand-u16: 0x80121090 1 8192 */
/* rand-u16: 0x80121092 1 32786 */
/* rand-u16: 0x80130014 1 0 */
/* rand-u16: 0x80130016 1 32788 */
/* rand-u16: 0x80130038 1 4,5,8,12,16 */
/* rand-u16: 0x8013003A 1 8,16,32,64,128 */
/* rand-u16: 0x8013003C 1 8,16,32,64,128 */
/* rand-u16: 0x8013003E 1 0,1,2,15,255,4095 */
/* rand-u16: 0x80130042 1 0,1,2,255,65535 */
/* rand-u16: 0x8013004E 1 0,1,2,3,4,5,6,7,65535 */
/* rand-u16: 0x80130054 1 0,1,2,3,4,5,19,20,79,80,81,100 */
/* rand-u16: 0x80130056 1 0 */
/* rand-u16: 0x80130064 1 0,1,5,19,20,40,80,100 */
/* rand-u16: 0x80130066 1 0 */
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
/* real-callee: func_800DD428 */
/* real-callee: func_800DDA78 */
/* real-callee: func_800FE188 */
/* real-callee: func_800FE21C */
/* real-callee: func_800FE74C */
/* real-callee: func_800FEBF4 */
/* real-callee: func_800FEC2C */
/* real-callee: func_800FF0A0 */
/* real-callee: func_800FF190 */
/* real-callee: func_800FF2CC */
/* real-callee: func_800FF3B4 */
/* real-callee: func_800FF460 */
/* callee-contract: RotTransPers */
/* callee-contract: RotTransPers4 */
/* callee-contract: SetRotMatrix */
/* callee-contract: SetTransMatrix */
/* compiler: 2.8.1-psx */
/* rand-u16: 0x8013007A 1 0,1,2,3,4,5,6,7,8,9,10,15,31,65535 */
/* rand-u16: 0x8013003C 1 0,1,5,19,20,29,30,31,39,40,49,50,79,80,89,90,99,100,127,128,199 */
/* rand-u16: 0x8013003E 1 0 */
/* rand-u16: 0x80130070 1 4096 */
/* rand-u16: 0x80130072 1 32788 */
/* rand-u16: 0x80130074 1 8192 */
/* rand-u16: 0x80130076 1 32788 */
/* compiler: 2.8.1-psx */
#include "ghidra.h"
typedef struct { s16 vx, vy, vz, pad; } SVECTOR;
extern s32 GetClut();
extern s32 GetTPage();
#define func_80013920 ((s32 (*)())0x80013920)
#define func_80015B3C ((s32 (*)())0x80015B3C)
#define func_800D3274 ((s32 (*)())0x800D3274)
#define func_800FE21C ((s32 (*)())0x800FE21C)
void func_800E4764(int param_1)

{
  union { u64 align; u8 bytes[0x8]; } recovered_local_frame;
#define local_18 (*(byte volatile *)(recovered_local_frame.bytes + 0x0))
#define local_17 (*(byte volatile (*)[7])(recovered_local_frame.bytes + 0x1))

  short sVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;



  sVar1 = *(short *)(param_1 + 0x4a) + 1;
  *(short *)(param_1 + 0x4a) = sVar1;
  if (*(short *)(param_1 + 0x46) <= sVar1) {
    *(undefined2 *)(param_1 + 0x4a) = 0;
    sVar1 = *(short *)(param_1 + 0x48) + 1;
    *(short *)(param_1 + 0x48) = sVar1;
    if (sVar1 == 1) {
      iVar3 = func_80015B3C(-0x7ff197d8,-0x7ff09738,1);
      uVar4 = UNALIGNED_U32((u8 *)param_1+0x36);
      *(undefined4 *)(iVar3 + 0x28) = UNALIGNED_U32((u8 *)param_1+0x32);
      *(undefined4 *)(iVar3 + 0x2c) = uVar4;
      *(undefined1 *)(iVar3 + 0x3c) = 9;
      *(undefined2 *)(iVar3 + 0x3e) = 0x28;
      *(undefined2 *)(iVar3 + 0x40) = 0x78;
      *(undefined2 *)(iVar3 + 0x46) = 0x8c;
      uVar2 = GetTPage(0,1,0x280,0x100);
      *(undefined2 *)(iVar3 + 0x48) = uVar2;
      uVar2 = GetClut(0x10,0x1f0);
      *(undefined2 *)(iVar3 + 0x4a) = uVar2;
      *(undefined1 *)(iVar3 + 0x4d) = 0;
      *(undefined1 *)(iVar3 + 0x4e) = 0;
      *(undefined1 *)(iVar3 + 0x4c) = 1;
    }
    else {
      *(undefined2 *)(param_1 + 0x48) = 0;
      sVar1 = *(short *)(param_1 + 0x4c) + 1;
      *(short *)(param_1 + 0x4c) = sVar1;
      if (sVar1 < 2) {
        local_18 = *(byte *)(param_1 + 0x3c);
        local_17[0] = *(byte *)(param_1 + 0x3e);
        iVar3 = func_800D3274(*(undefined1 *)(param_1 + 0x28),&local_18,local_17);
        if (iVar3 < 2) {
          UNALIGNED_U32((u8 *)param_1+0x2a) = UNALIGNED_U32((u8 *)param_1+0x32);
          UNALIGNED_U32((u8 *)param_1+0x2e) = UNALIGNED_U32((u8 *)param_1+0x36);
          func_800FE21C((uint)local_18,(uint)local_17[0],(SVECTOR *)(param_1 + 0x32));
          *(ushort *)(param_1 + 0x3c) = (ushort)local_18;
          *(ushort *)(param_1 + 0x3e) = (ushort)local_17[0];
          return;
        }
      }
      func_80013920(param_1);
    }
  }
  return;
}

#undef local_18
#undef local_17
