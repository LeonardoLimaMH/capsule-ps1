/* stub-ret: mixed */
#include "common.h"

typedef struct { u8 b[6]; } Pfx;
extern Pfx D_80078B94, D_80078B9C, D_80078BA8, D_80078BB0, D_80078BB8, D_80078BC0, D_80078BC8, D_80078BD0;
extern s32 func_8001CB94(s32);
extern char *strcpy(char *, const char *);
extern s32 func_8004FEFC(char *, s32);
extern s32 func_8004FF0C(s32, s32, s32);
extern s32 func_8004FF2C(s32, s32, s32);
extern s32 func_8004FF3C(s32);
extern u8 D_80085428[];
#define B ((u8 *)0x801CC000)

s32 func_8001BFF4(s32 *data, s32 count, char *name, u32 slot, s32 skip) {
    char buf[0x18]; /* + 8 bytes de spill do compilador = frame original */
    s32 r, fd, off, ptr, len;
    s16 i, j;

    r = func_8001CB94(slot);
    if (r != 0) return r;
    switch (slot) {
    case 0: *(Pfx *)buf = D_80078B94; break;
    case 1: *(Pfx *)buf = D_80078BA8; break;
    case 2: *(Pfx *)buf = D_80078BB0; break;
    case 3: *(Pfx *)buf = D_80078BB8; break;
    case 16: *(Pfx *)buf = D_80078B9C; break;
    case 17: *(Pfx *)buf = D_80078BC0; break;
    case 18: *(Pfx *)buf = D_80078BC8; break;
    case 19: *(Pfx *)buf = D_80078BD0; break;
    }
    strcpy(buf + 5, name);
    fd = func_8004FEFC(buf, 2);
    if (fd == -1) {
        func_8004FF3C(fd);
        return 5;
    }
    B[skip] = 1;
    D_80085428[skip + 0x34] = B[skip];
    D_80085428[skip * 8 + 0x38] = B[skip * 8 + 4];
    D_80085428[skip * 8 + 0x39] = B[skip * 8 + 5];
    *(u32 *)(D_80085428 + skip * 8 + 0x3C) = *(u32 *)(B + skip * 8 + 8);
    for (i = 0; i < (s16)count; i++) {
        off = data[0] << 7;
        ptr = data[1];
        len = data[2] << 7;
        data += 3;
        if (i == 2) {
            for (j = 0; j < skip * 4; j++) data += 3;
        }
        func_8004FF0C(fd, off, 0);
        while (func_8004FF2C(fd, ptr, len) != len);
    }
    func_8004FF3C(fd);
    return r;
}
