#include "common.h"

#include "ghidra.h"
void func_80110D1C(void)

{
    extern s32 D_80110060[];
    extern s32 D_80110070[];
    extern s32 D_80110080[];
  undefined1 auStack_10 [8];
  
  slpm_printf(D_80110060);
  slpm_DrawSync(0);
  SsEnd();
  func_8011BBC4();
  auStack_10[0] = 0x80;
  CdControlB(0xe,auStack_10,0);
  DecDCToutCallback(0);
  CdDataCallback(0);
  CdReadyCallback(0);
  CdControlB(9,0,0);
  slpm_StopRCnt(0xf2000000);
  slpm_StopRCnt(0xf2000001);
  slpm_StopRCnt(0xf2000002);
  slpm_StopRCnt(0xf2000003);
  slpm_PadStop();
  slpm_ResetGraph(3);
  slpm_StopCallback();
  slpm_printf(D_80110070);
  func_80111B24();
  func_80111B14(&D_80110080,0x801ff000,0);
  slpm__96_remove();
  return;
}
