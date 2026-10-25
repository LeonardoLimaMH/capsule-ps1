#include "common.h"

typedef struct {
    s16 x, y, w, h;
} Rect;

extern Rect D_80078BE8;
extern u8 D_8001033C[];
extern s32 DsControlB();

void func_8001FB18(void) {
    Rect r = D_80078BE8;
    u8 c[8];

    ResetCallback();
    ClearImage(&r, 0, 0, 0);
    DrawSync(0);
    c[0] = 0x80;
    while (DsControlB(0xE, c, 0) == 0) {
    }
    DsDataCallback(0);
    DsReadyCallback(0);
    while (DsControlB(9, 0, 0) == 0) {
    }
    StopRCnt(0xF2000000);
    StopRCnt(0xF2000001);
    StopRCnt(0xF2000002);
    StopRCnt(0xF2000003);
    PadStop();
    ResetGraph(3);
    StopCallback();
    func_8004FDEC();
    func_8004FDDC(D_8001033C, 0x801FF000, 0);
    _96_remove();
}
