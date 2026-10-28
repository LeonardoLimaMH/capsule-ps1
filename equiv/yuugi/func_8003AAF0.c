#include "common.h"
/* arg0: 0x80140000 */
/* rand-u16: 0x80078C9C 1 0,1,2 */
/* rand-u16: 0x80078C9E 1 0 */
/* rand-u16: 0x80140000 1 0 */
/* rand-u16: 0x80140002 1 0 */
/* rand-mem: 0x80150000 16 256 */
/* rand-u16: 0x8009473C 1 0 */
/* rand-u16: 0x8009473E 1 32789 */
/* rand-u16: 0x8009474C 1 1,2,3,4,8,16 */
/* rand-u16: 0x8009474E 1 0 */
/* rand-u16: 0x800949E8 1 0 */
/* rand-u16: 0x800949EA 1 32789 */
/* rand-u16: 0x800949F8 1 1,2,3,4,8,16 */
/* rand-u16: 0x800949FA 1 0 */
/* rand-u16: 0x80094C94 1 0 */
/* rand-u16: 0x80094C96 1 32789 */
/* rand-u16: 0x80094CA4 1 1,2,3,4,8,16 */
/* rand-u16: 0x80094CA6 1 0 */
#include "ghidra.h"
#define DAT_8009473c (*(u8 *)0x8009473C)
#define DAT_8009474c (*(u8 *)0x8009474C)
uint func_8003AAF0(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  iVar1 = *(int *)(((s32)0x80078B6C) + 0x130) * 0x2ac;
  uVar2 = (uint)*(byte *)(*(int *)(&DAT_8009473c + iVar1) + *param_1);
  uVar3 = *param_1 + 1;
  *param_1 = uVar3;
  if (*(uint *)(&DAT_8009474c + iVar1) < uVar3) {
    *(undefined1 *)(param_1 + 8) = 1;
    uVar2 = 0xffffffff;
  }
  uVar3 = 0;
  if (uVar2 != 0) {
    if (uVar2 == 0xff) {
      *(undefined1 *)(param_1 + 8) = 1;
      uVar3 = 0;
    }
    else {
      uVar3 = uVar2;
      if ((uVar2 & 0x80) != 0) {
        uVar3 = uVar2 & 0x7f;
        do {
          iVar1 = *(int *)(((s32)0x80078B6C) + 0x130) * 0x2ac;
          uVar2 = (uint)*(byte *)(*(int *)(&DAT_8009473c + iVar1) + *param_1);
          uVar4 = *param_1 + 1;
          *param_1 = uVar4;
          if (*(uint *)(&DAT_8009474c + iVar1) < uVar4) {
            *(undefined1 *)(param_1 + 8) = 1;
            uVar2 = 0xffffffff;
          }
          uVar3 = uVar3 * 0x80 + (uVar2 & 0x7f);
        } while ((uVar2 & 0x80) != 0);
      }
    }
  }
  return uVar3;
}
