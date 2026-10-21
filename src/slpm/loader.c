#include "common.h"

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80110C48);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80110D1C);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80110E10);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80110E70);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80110E90);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80110F10);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80110FDC);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_801111D4);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80111268);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80111464);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80111538);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80111584);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_801119E4);

void func_80111A40(void) {

}

INCLUDE_ASM("asm/slpm/nonmatchings/loader", __SN_ENTRY_POINT_loader);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80111B04);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80111B14);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80111B24);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm__96_remove);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80111B54);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_SetRCnt);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_GetRCnt);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_StartRCnt);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_StopRCnt);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_ResetRCnt);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_SetInitPadFlag);

s32 slpm_ReadInitPadFlag(void) {
    extern s32 D_801208B4[];
    return (*D_801208B4);
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_PAD_init);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_InitPAD);

s32 slpm_StartPAD(void) {
    func_80111FE4();
    func_80111B54(0);
    slpm_EnablePAD();
    return 1;
}

void slpm_StopPAD(void) {
    extern s32 D_801208B4[];
    slpm_DisablePAD();
    func_80111FF4();
    func_80111EF0();
    (*D_801208B4) = 0;
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80111E78);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80111EF0);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80111F28);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80111F90);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80111FD4);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80111FE4);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80111FF4);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80112004);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80112014);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80112024);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80112034);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80112044);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_EnablePAD);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_DisablePAD);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm__patch_pad);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_801120F4);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm__remove_ChgclrPAD);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_printf);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_prnt);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_toupper);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_tolower);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_memchr);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm__putchar);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm__putchar_flash);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_putchar);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80112B74);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_strlen);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", DecDCTReset);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", DecDCTGetEnv);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", DecDCTPutEnv);

u16 DecDCTBufSize(u16 *arg0) {
    return *arg0;
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader", DecDCTin);

void DecDCTout(void) {
    func_80113004();
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader", DecDCTinSync);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", DecDCToutSync);

void DecDCTinCallback(s32 arg0) {
    slpm_DMACallback(0, arg0);
}

void DecDCToutCallback(s32 arg0) {
    slpm_DMACallback(1, arg0);
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80112E84);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80112F74);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80113004);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80113090);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80113124);

s32 func_801131B8(void) {
    extern s32 * D_80120AA8[];
    return *(*D_80120AA8);
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_801131D0);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", DecDCTvlcSize);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", DecDCTvlc);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_LoadTPage);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_LoadClut);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_LoadClut2);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_SetDefDrawEnv);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_SetDefDispEnv);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_ResetGraph);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_SetGraphDebug);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_SetGraphQueue);

u8 slpm_GetGraphDebug(void) {
    extern u8 D_80131B36[];
    return (*D_80131B36);
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_DrawSyncCallback);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_SetDispMask);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_DrawSync);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80113C78);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_ClearImage);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_ClearImage2);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_LoadImage);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_StoreImage);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_MoveImage);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_ClearOTag);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_ClearOTagR);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_DrawPrim);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_DrawOTag);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_PutDrawEnv);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_DrawOTagEnv);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_GetDrawEnv);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_PutDispEnv);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_GetDispEnv);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_GetODE);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_SetTexWindow);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_SetDrawArea);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_SetDrawOffset);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_SetPriority);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_SetDrawStp);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_SetDrawMode);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_SetDrawEnv);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80114D30);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80114FA0);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80114FC0);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80115058);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_801150F0);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_8011510C);

s32 func_8011518C(void) {
    extern s32 * D_80131C3C[];
    return *(*D_80131C3C);
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_801151A4);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80115284);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_801154B4);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_801156F0);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80115970);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80115994);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_801159A8);

void func_801159E8(s32 arg0) {
    extern s32 * D_80131C3C[];
    extern s32 * D_80131C40[];
    extern s32 * D_80131C44[];
    extern s32 * D_80131C48[];
    *(*D_80131C3C) = 0x04000002;
    *(*D_80131C40) = arg0;
    *(*D_80131C44) = 0;
    *(*D_80131C48) = 0x01000401;
}

s32 func_80115A30(s32 arg0) {
    extern s32 * D_80131C38[];
    extern s32 * D_80131C3C[];
    *(*D_80131C3C) = arg0 | 0x10000000;
    return *(*D_80131C38) & 0xFFFFFF;
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80115A60);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80115A84);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80115D34);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80115F94);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_801160E4);

void func_80116220(void) {
    extern s32 D_80131C70[];
    extern s32 D_80131C74[];
    (*D_80131C70) = slpm_VSync(-1) + 0xF0;
    (*D_80131C74) = 0;
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80116254);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80116398);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_LoadImage2);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_StoreImage2);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_MoveImage2);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_DrawOTag2);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80116850);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80116878);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_801168A4);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_memcpy);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_GetTPage);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_GetClut);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", StSetRing);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", CdInit);

void func_80116A08(void) {
    func_80116A84(0xF0000003, 0x20);
}

void func_80116A30(void) {
    func_80116A84(0xF0000003, 0x40);
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80116A58);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80116A84);

u8 CdStatus(void) {
    extern u8 D_80131D2C[];
    return (*D_80131D2C);
}

u8 CdMode(void) {
    extern u8 D_80131D3C[];
    return (*D_80131D3C);
}

u8 CdLastCom(void) {
    extern u8 D_80131D3D[];
    return (*D_80131D3D);
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader", CdLastPos);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", CdReset);

void CdFlush(void) {
    slpm_CD_flush();
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader", CdSetDebug);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", CdComstr);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", CdIntstr);

void CdSync(void) {
    slpm_CD_sync();
}

void CdReady(void) {
    slpm_CD_ready();
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader", CdSyncCallback);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", CdReadyCallback);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", CdControl);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", CdControlF);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", CdControlB);

s32 CdMix(void) {
    slpm_CD_vol();
    return 1;
}

s32 CdGetSector(void) {
    return slpm_CD_getsector() == 0;
}

s32 CdGetSector2(void) {
    return slpm_CD_getsector2() == 0;
}

void CdDataCallback(s32 arg0) {
    slpm_DMACallback(3, arg0);
}

void CdDataSync(void) {
    slpm_CD_datasync();
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader", CdIntToPos);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", CdPosToInt);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80117224);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_CD_sync);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_CD_ready);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_CD_cw);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_CD_vol);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_CD_flush);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_CD_initvol);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_CD_initintr);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_CD_init);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_CD_datasync);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_CD_getsector);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_CD_getsector2);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_CD_set_test_parmnum);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_801188AC);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_puts);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", CdSearchFile);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80118CBC);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80118CDC);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80118FA0);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80119044);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_801192E0);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_strcmp);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", strncmp);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80119444);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_801196A4);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80119770);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", CdReadBreak);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", CdRead);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", CdReadSync);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", CdReadCallback);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", CdReadMode);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", CdRead2);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80119C78);

void StClearRing(void) {
    extern s32 D_80134E90[];
    extern s16 D_80134E94[];
    extern s32 D_80134E9C[];
    extern s32 D_80134EAC[];
    extern s32 D_80134EB4[];
    extern s32 D_80134EB8[];
    extern s32 D_80134EBC[];
    extern s32 D_80134ED4[];
    (*D_80134EBC) = 0;
    (*D_80134EB8) = 0;
    (*D_80134EB4) = 0;
    (*D_80134EAC) = 0;
    init_ring_status(0, (*D_80134ED4));
    (*D_80134E9C) = 0;
    (*D_80134E94) = 0;
    (*D_80134E90) = 0;
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader", StUnSetRing);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_80119D84);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", StGetBackloc);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", StSetStream);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", StFreeRing);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", init_ring_status);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", StGetNext);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_8011A0B4);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", StCdInterrupt);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_8011A9F0);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_8011AA1C);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_PadInit);

s32 slpm_PadRead(void) {
    extern s32 D_80137338[];
    func_8011AC64();
    return ~(*D_80137338);
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_PadStop);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_8011AC64);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_VSync);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_8011ADEC);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_8011AE84);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_ResetCallback);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_InterruptCallback);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_DMACallback);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_VSyncCallback);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_VSyncCallbacks);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_StopCallback);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_RestartCallback);

u16 slpm_CheckCallback(void) {
    extern u16 D_801321DE[];
    return (*D_801321DE);
}

u16 slpm_GetIntrMask(void) {
    extern u16 * D_8013326C[];
    return *(*D_8013326C);
}

u16 slpm_SetIntrMask(u16 arg0) {
    extern u16 * D_8013326C[];
    u16 temp_v0;

    temp_v0 = *(*D_8013326C);
    *(*D_8013326C) = arg0;
    return temp_v0;
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_8011B028);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_8011B100);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_8011B2D0);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_8011B418);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_8011B4B8);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_8011B530);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_8011B554);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_8011B564);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_8011B574);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_setjmp);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_longjmp);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_startIntrVSync);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_8011B65C);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_8011B6C8);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_8011B6F4);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_startIntrDMA);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_8011B770);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_8011B8F0);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_8011B99C);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_SetVideoMode);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_GetVideoMode);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", SsEnd);

void slpm_SsInitHot(void) {
    slpm_ResetCallback();
    func_8011E864();
    _SsInit();
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader", _SsInit);

void func_8011BBC4(void) {
    slpm_SpuQuit();
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader", SsSetSerialAttr);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_8011BCA4);

void SsStart(void) {
    func_8011BCA4(1);
}

void SsStart2(void) {
    func_8011BCA4(0);
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_8011BF14);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_8011BF60);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", SsSeqCalledTbyT);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", _SsSndCrescendo);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", _SsSndDecrescendo);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", _SsSndPause);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_8011C974);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", _SsSeqPlay);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", _SsSeqGetEof);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", _SsGetSeqData);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", _SsReadDeltaValue);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", _SsSndNextSep);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", _SsSndReplay);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", _SsSndStop);

void SsSeqStop(s16 arg0) {
    _SsSndStop(arg0, 0);
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader", SsSepStop);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", SsSetSerialVol);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", _SsSndTempo);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_8011D7B4);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", _SsVmFlush);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", _SsVmInit);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", _SsVmKeyOffNow);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", _SsVmSetSeqVol);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", _SsVmGetSeqVol);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", _SsVmGetSeqLVol);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", _SsVmGetSeqRVol);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", _SsVmSeqKeyOff);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", _SsVmVSetUp);

void func_8011E864(void) {
    slpm__SpuInit(0);
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm__SpuInit);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_SpuStart);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_8011E9E4);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_8011E9F4);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm__spu_init);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_8011EC84);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm__spu_FiDMA);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm__spu_Fr_);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm__spu_t);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm__spu_Fw);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm__spu_Fr);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm__spu_FsetRXX);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm__spu_FsetRXXa);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm__spu_FgetRXXa);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm__spu_FsetPCR);

void func_8011F48C(void) {
    extern s32 * D_801333E8[];
    *(*D_801333E8) = (*(*D_801333E8) & 0xF0FFFFFF) | 0x20000000;
}

void func_8011F4B4(void) {
    extern s32 * D_801333E8[];
    *(*D_801333E8) = (*(*D_801333E8) & 0xF0FFFFFF) | 0x22000000;
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm__spu_Fw1ts);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm__SpuDataCallback);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_SpuQuit);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_8011F5F4);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", func_8011F604);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_SpuInitMalloc);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", SpuSetNoiseVoice);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm__SpuSetAnyVoice);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_SpuSetReverbVoice);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_SpuSetKey);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", _spu_setInTransfer);

s32 _spu_getInTransfer(void) {
    extern s32 D_80133408[];
    return (*D_80133408) != 1;
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_SpuSetCommonAttr);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_SpuSetVoiceAttr);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm__spu_2pitch);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm__spu_note2pitch);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm__spu_pitch2note);

INCLUDE_ASM("asm/slpm/nonmatchings/loader", slpm_SpuGetVoiceEnvelope);

s32 slpm_DsSyncCallback(s32 arg0) {
    extern s32 D_80138670[];
    s32 temp_v0;

    temp_v0 = (*D_80138670);
    (*D_80138670) = arg0;
    return temp_v0;
}

s32 slpm_DsReadyCallback(s32 arg0) {
    extern s32 D_80138674[];
    s32 temp_v0;

    temp_v0 = (*D_80138674);
    (*D_80138674) = arg0;
    return temp_v0;
}

s32 slpm_DsStartCallback(s32 arg0) {
    extern s32 D_80138678[];
    s32 temp_v0;

    temp_v0 = (*D_80138678);
    (*D_80138678) = arg0;
    return temp_v0;
}

void slpm_DsDataCallback(s32 arg0) {
    slpm_DMACallback(3, arg0);
}
