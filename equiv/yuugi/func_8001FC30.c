#include "common.h"

typedef struct {
    u8 b[8];
} Blk8;

extern u16 D_8008EE44;
extern Blk8 D_80078BE8;
extern u8 D_8001033C[];
extern s32 func_80012508(), _96_remove();
extern void ResetCallback(), ClearImage();
extern s32 DsControlB();
extern void DsDataCallback(), DsReadyCallback(), StopRCnt(), PadStop();
extern void StopCallback(), func_8004FDEC(), func_8004FDDC();

s32 func_8001FC30(void) {
    Blk8 rect;
    u8 com[8];

    switch (D_8008EE44) {
    case 0:
        return func_80012508();
    case 1:
        rect = D_80078BE8;
        ResetCallback();
        ClearImage(&rect, 0, 0, 0);
        DrawSync(0);
        com[0] = 0x80;
        while (DsControlB(0xE, com, 0) == 0) {
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
        return _96_remove();
    }
    return ((u32)&D_80078BE8 + 0x8000) & 0xFFFF0000;
}
