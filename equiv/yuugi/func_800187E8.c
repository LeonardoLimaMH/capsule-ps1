#include "common.h"

typedef struct {
    s16 x, y, w, h;
} Rect;

extern Rect D_80078B80;
extern u8 *D_8008ED68;
extern u8 D_8008A7BC[];

void func_800187E8(s32 n) {
    Rect r = D_80078B80;
    u8 *d = D_8008ED68;
    u32 *pkt;
    u32 *next = 0;

    if (d == D_8008A7BC) {
        r.y = 0xF0;
    }
    pkt = *(u32 **)(d + 0x1090);
    if (pkt != 0 && !((u32)(d + 0x4594) < (u32)(pkt + 3))) {
        next = pkt + 3;
    }
    *(u32 **)(d + 0x1090) = next;
    SetDrawArea(pkt, &r);
    *pkt = (*pkt & 0xFF000000) | (*(u32 *)(D_8008ED68 + n * 4 + 0x70) & 0xFFFFFF);
    *(u32 *)(D_8008ED68 + n * 4 + 0x70) = (*(u32 *)(D_8008ED68 + n * 4 + 0x70) & 0xFF000000) | ((u32)pkt & 0xFFFFFF);
}
