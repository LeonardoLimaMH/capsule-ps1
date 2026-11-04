#include "common.h"

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libcd_cdread", func_80119444);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libcd_cdread", func_801196A4);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libcd_cdread", func_80119770);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libcd_cdread", CdReadBreak);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libcd_cdread", CdRead);

/* CdReadSync: C do SDK PsyQ importado de https://github.com/afsenovilla/Tombi-Decomp (MIT),
   arquivo src/CdReadSync.c; reduzido às declarações de que a função depende
   (tools/ext_import.py). */
typedef enum { false, true } bool;

typedef void (*CdlCB)(u_char, u_char*);

void StSetStream(u_long mode, u_long start_frame, u_long end_frame,
                 void (*func1)(), void (*func2)());

void StSetEmulate(u_long* addr, u_long mode, u_long start_frame,
                  u_long end_frame, void (*func1)(), void (*func2)());

int CdReadSync(int mode, u_char* result);

int CdReady(int mode, u_char* result);

typedef struct {
            int nsectors;
            u_long* buf_start;
            u_long* buf_cur;
            int mode;
            int secsize;
            int status;
            int vb_attempt_start;
            int vb_start;
            int pos;
            CdlCB cbsync;
            CdlCB cbready;
            CdlCB cbdata;
            int block_mode;
            u_char* unk34;
            int unk38;
} ReadAttr_t;

extern volatile ReadAttr_t D_80132074;

int func_80119770(int retry);

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libcd_cdread", CdReadSync);

extern s32 D_80132054;

s32 CdReadCallback(s32 func) {
    s32 old = D_80132054;

    D_80132054 = func;
    return old;
}

INCLUDE_ASM("asm/slpm/nonmatchings/sdk_libcd_cdread", CdReadMode);
