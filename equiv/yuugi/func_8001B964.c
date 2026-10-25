#include "common.h"

extern u8 D_80078B94[], D_80078B9C[], D_80078BA4[];
extern void *firstfile();
extern void *func_8004FF5C();
extern void func_8001BB18();
extern s32 func_8004FEFC();
extern s32 func_8004FF1C();
extern void func_8004FF3C();

static s32 readhdr(u8 *path, u8 *buf) {
    s32 fd = func_8004FEFC(path, 1);
    if (fd == -1) {
        return -2;
    }
    if (func_8004FF1C(fd, buf, 0x80) == -1) {
        func_8004FF3C(fd);
        return -2;
    }
    func_8004FF3C(fd);
    return 0;
}

s32 func_8001B964(s32 a0) {
    u8 name[0x20];
    u8 buf[0x80];
    u8 de[0x28];
    u8 path[0x20];
    void *p;
    s32 total = 0;
    s32 r;

    if (a0 == 0) {
        *(s32 *)name = *(s32 *)D_80078B94;
        *(s16 *)(name + 4) = *(s16 *)(D_80078B94 + 4);
    } else {
        *(s32 *)name = *(s32 *)D_80078B9C;
        *(s16 *)(name + 4) = *(s16 *)(D_80078B9C + 4);
    }
    name[5] = D_80078BA4[0];
    name[6] = D_80078BA4[1];
    p = firstfile(name, de);
    if (p == de) {
        do {
            func_8001BB18(de, path, a0);
            r = readhdr(path, buf);
            if (r < 0) {
                return r;
            }
            total += buf[3];
        } while (func_8004FF5C(de) == p);
    }
    return 15 - total;
}
