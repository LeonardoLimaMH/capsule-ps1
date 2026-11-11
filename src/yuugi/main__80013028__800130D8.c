#include "common.h"
#include "yuugi.h"

typedef struct {
    u32 mode;
    void *crect;
    u32 *caddr;
    void *prect;
    u32 *paddr;
} Tim;

extern s32 ReadTIM();
extern s32 func_80019F30();

/* Estado de um controle (D_8008ED68 + 0x80 + i * 0x10). */
typedef struct {
    u32 now;
    u32 old;
    u32 trig;
    u32 rel;
} PadState;

/* Visão parcial de D_8008ED68 usada pelas rotinas de controle. */
typedef struct {
    u8 unk0[0x80];
    PadState pad[2];
    u8 unkA0[4];
    u32 hold[2][4];
} PadWork;

void func_800130D8(void) {
    extern u8 D_8008ED68[];
    register u8 *b asm("s0") = D_8008ED68;
    register s32 n asm("a1");
    PadInit(0);
    n = 0x22;
    InitPAD(b + 0x3C, n, b + 0x5E, n);
    StartPAD();
    func_8004FF7C(0);
}

