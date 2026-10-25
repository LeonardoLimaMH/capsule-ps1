#include "common.h"

typedef struct {
    u8 com;
    u8 param[7];
    u8 *pp;
    s32 x;
} Ent;

typedef struct {
    u8 b[4];
} Blk4;

extern s32 D_80094B70, D_80072F0C, D_80094B6C;
extern u8 D_80094AA8[];
extern u8 *func_800435B8();
extern void func_80045858(), func_800437FC();
extern s32 func_80044AF8(), DsPosToInt();

s32 DsPacket(u8 mode, u8 *pos, u8 com, s32 cbs, s32 count) {
    Ent q[5];
    s32 i, n, total, id, old;
    u8 *e;

    for (i = 0; i < 5; i++) {
        q[i].com = 0;
        q[i].pp = 0;
        q[i].x = 0;
    }
    q[0].com = 9;
    q[1].com = 0xE;
    q[1].param[0] = mode;
    q[1].pp = q[1].param;
    if (DsPosToInt(pos) < 0) {
        return 0;
    }
    q[2].com = 2;
    *(Blk4 *)q[2].param = *(Blk4 *)pos;
    q[2].pp = q[2].param;
    n = 3;
    switch (com) {
    case 3:
    case 6:
    case 21:
    case 22:
    case 27:
        break;
    default:
        return 0;
    }
    q[n].com = com;
    q[n].x = cbs;
    total = n + 1;
    if (D_80094B70 + total >= 9) {
        return 0;
    }
    old = D_80072F0C;
    id = old + 1;
    D_80072F0C = id;
    if (id == 0) {
        id = old + 2;
        D_80072F0C = id;
    }
    for (i = 0; i < total; i++) {
        e = func_800435B8();
        if (e == 0) {
            return 0;
        }
        *(s32 *)e = id;
        e[4] = q[i].com;
        if (q[i].pp != 0) {
            func_80045858(e + 5, q[i].param);
            *(u8 **)(e + 0xC) = e + 5;
        } else {
            *(u8 **)(e + 0xC) = 0;
        }
        *(s32 *)(e + 0x14) = count;
        *(s32 *)(e + 0x10) = q[i].x;
        D_80094B70++;
    }
    if (func_80044AF8(0) == 1 && *(s32 *)(D_80094AA8 + D_80094B6C * 0x18) == id) {
        func_800437FC();
    }
    return id;
}
