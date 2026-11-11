#include "common.h"
#include "yuugi.h"

#include "common.h"

typedef struct {
    u32 mode;
    void *crect;
    u32 *caddr;
    void *prect;
    u32 *paddr;
} Tim;

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


extern s32 ReadTIM();
extern s32 func_80019F30();

void func_80013028(u8 *p) {
    Tim t;
    u32 packed;

    p += 4;
    OpenTIM(p);
    packed = *(u32 *)(p - 4) & 0x100;
    if (ReadTIM(&t) == 0) {
        return;
    }
    if (t.caddr != 0) {
        LoadImage(t.crect, t.caddr);
    }
    if (t.paddr == 0) {
        return;
    }
    if (packed) {
        func_8001A8C0(t.paddr, 0x801CC000);
        LoadImage(t.prect, 0x801CC000);
        DrawSync(0);
    } else {
        LoadImage(t.prect, t.paddr);
    }
}
