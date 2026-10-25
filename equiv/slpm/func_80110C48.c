#include "common.h"

s32 func_80110C48(void) {
    extern s32 D_8013348C;
    extern u8 D_801334A8[];
    func_80111A40();
    slpm_ResetCallback();
    CdInit();
    slpm_PadInit(0);
    slpm_InitPAD(D_801334A8, 0x22, D_801334A8 + 0x22, 0x22);
    slpm_StartPAD();
    func_80111B54(0);
    slpm_ResetGraph(0);
    slpm_SsInitHot();
    func_80110E10();
    slpm_printf("vram_clear_end\n");
    D_8013348C = 0;
    func_80110E70(0, 0);
    slpm_printf("set_movie_offset_end\n");
    slpm_printf("movie_main_start\n");
    func_80111584("\\LOGO15XA.STR;1", 0xA6, 0);
    func_80110D1C();
    slpm_printf("movie_end:movie.c\n");
    return 1;
}
