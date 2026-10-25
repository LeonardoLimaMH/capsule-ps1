#include "common.h"

typedef struct {
    u8 b[8];
} Blk8;

extern Blk8 D_80078B74;
extern u8 D_8008ED68[];
extern s32 __bss_start;
extern u8 *D_80078B7C;
extern void ResetCallback(), func_8001A998(), func_80013668(), func_8001DB54(), func_80011D84();
extern void func_80013C44(), func_8004FE1C(), func_800130D8(), SetGraphDebug(), SetDispMask();
extern void ClearImage(), func_80011B1C(), InitGeom(), func_800133C4(), func_80019088();
extern void func_80011A60(), SetGeomOffset(), func_80048A2C(), func_80011AA4();
extern s32 DsInit();

void func_800118FC(void) {
    Blk8 rect;

    rect = D_80078B74;
    ResetCallback();
    func_8001A998(D_8008ED68, 0xA78);
    func_8001A998(&__bss_start, 4);
    func_8001A998(D_80078B7C, 0xC588);
    func_8001A998(0x1F800100, 0x300);
    func_80013668();
    func_8001DB54();
    func_80011D84();
    func_80013C44();
    func_8004FE1C(2);
    func_800130D8();
    ResetGraph(1);
    *(s32 *)(D_8008ED68 + 0x108) = 0x140;
    *(s32 *)(D_8008ED68 + 0x10C) = 0xF0;
    SetGraphDebug(0);
    SetDispMask(0);
    ClearImage(&rect, 0, 0, 0);
    DrawSync(0);
    func_80011B1C();
    InitGeom();
    func_800133C4();
    func_80019088();
    DsInit();
    func_80011A60(__bss_start);
    __bss_start = 1;
    SetGeomOffset(0xA0, 0x78);
    func_80048A2C(0x200);
    func_80011AA4();
}
