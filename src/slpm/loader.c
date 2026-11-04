#include "common.h"

extern char D_80110000[]; /* "vram_clear_end\n" */
extern char D_80110010[]; /* "set_movie_offset_end\n" */
extern char D_80110028[]; /* "movie_main_start\n" */
extern char D_8011003C[]; /* "\LOGO15XA.STR;1" */
extern char D_8011004C[]; /* "movie_end:movie.c\n" */
extern s32 D_8013348C;
extern u8 D_801334A8[];

s32 func_80110C48(void) {
    func_80111A40();
    do {
        slpm_ResetCallback();
        CdInit();
        slpm_PadInit(0);
        slpm_InitPAD(D_801334A8, 0x22, D_801334A8 + 0x22, 0x22);
        slpm_StartPAD();
        func_80111B54(0);
        slpm_ResetGraph(0);
        slpm_SsInitHot();
        func_80110E10();
        slpm_printf(D_80110000);
    } while (0);
    D_8013348C = 0;
    func_80110E70(0, 0);
    slpm_printf(D_80110010);
    slpm_printf(D_80110028);
    func_80111584(D_8011003C, 0xA6, 0);
    func_80110D1C();
    slpm_printf(D_8011004C);
    return 1;
}
