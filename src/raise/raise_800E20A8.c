#include "common.h"

#include "common.h"

typedef struct {
    u8 pad[0x10];
    u16 field_10;
} Rec_80091618;

extern s16 D_80078C20[];
extern u8 D_80091618[];
extern s32 D_800EF2D8[];

s32 func_800E20A8(void) {
    (*D_80078C20) = (*D_80078C20) == 0;
    func_800E2AA0(((Rec_80091618 *)(D_80091618 + (*D_800EF2D8) * 0x1A8))->field_10, 1, 0);
    return 1;
}
