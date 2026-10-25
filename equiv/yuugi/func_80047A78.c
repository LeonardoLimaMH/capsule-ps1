#include "common.h"

extern s32 D_800733CC[], D_800733D8[], D_800733EC, D_800733E0, D_800733E4;
extern s32 func_80044B30(), DsPosToInt(), func_80044B20(), DsDataCallback(), DsQueueLen();
extern void DsGetSector(), DsReadyCallback(), DsStartCallback(), func_80047E0C(), DsCommand();

void func_80047A78(s32 intr, u8 *result) {
    u8 loc[16];
    s32 *d = D_800733CC;
    s32 *e;
    s32 old, pos;

    if (d[0] == -1) {
        d[0] = DsPosToInt(func_80044B30());
    }
    intr &= 0xFF;
    if (intr == 1) {
        if (func_80044B20() & 0x20) {
            old = DsDataCallback(0);
            DsGetSector(loc, 3);
            DsDataCallback(old);
            pos = DsPosToInt(loc);
            if (pos != d[0]) {
                d[3] = 1;
                goto tail;
            }
            if (d[2] != 0 && d[1] < pos) {
                ((void (*)())d[2])(1, result, loc);
                d[1] = pos;
            }
        } else if (d[2] != 0 && d[1] < d[0]) {
            ((void (*)())d[2])(1, result, loc);
            d[1] = d[0];
        }
        D_800733CC[0]++;
        goto tail;
    }
    if (intr == 4) {
        if (d[2] != 0) {
            ((void (*)())d[2])(4, result, loc);
        }
        goto tail;
    }
    if (result[0] & 0x10) {
        if (d[7] == 1) {
            DsReadyCallback(0);
            return;
        }
        DsReadyCallback(d[5]);
        DsStartCallback(d[6]);
        d[8] = 0;
        if (d[2] != 0) {
            ((void (*)())d[2])(intr, result, loc);
        }
        return;
    }
    if (DsQueueLen() == 0 && !(result[0] & 0xA0)) {
        d[3] = 1;
    }
tail:
    e = D_800733D8;
    if (e[0] != 1) {
        return;
    }
    if (e[1] > 0 || e[1] == -1) {
        func_80047E0C();
        if (e[1] > 0) {
            e[1]--;
        }
    } else {
        if (D_800733EC == e[0]) {
            DsReadyCallback(D_800733E0);
            DsStartCallback(D_800733E4);
            DsCommand(9, 0, 0, -1);
        }
        D_800733EC = 0;
        if (e[-1] != 0) {
            ((void (*)())e[-1])(5, result, loc);
        }
    }
    D_800733D8[0] = 0;
}
