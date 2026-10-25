#include "common.h"

typedef struct {
    u8 b[6];
} Blk6;

extern Blk6 D_80078B94, D_80078BA8, D_80078BB0, D_80078BB8;
extern Blk6 D_80078B9C, D_80078BC0, D_80078BC8, D_80078BD0;
extern char *strcpy();
extern s32 func_8001CB94(), func_8004FEFC();
extern void *firstfile();
extern void func_8004FF3C();

s32 func_8001C36C(char *name, u32 idx, s32 blocks) {
    u8 de[0x28];
    char path[0x20];
    s32 r, fd;

    r = func_8001CB94(idx);
    if (r != 0) {
        return r;
    }
    switch (idx) {
    case 0:
        *(Blk6 *)path = D_80078B94;
        break;
    case 1:
        *(Blk6 *)path = D_80078BA8;
        break;
    case 2:
        *(Blk6 *)path = D_80078BB0;
        break;
    case 3:
        *(Blk6 *)path = D_80078BB8;
        break;
    case 16:
        *(Blk6 *)path = D_80078B9C;
        break;
    case 17:
        *(Blk6 *)path = D_80078BC0;
        break;
    case 18:
        *(Blk6 *)path = D_80078BC8;
        break;
    case 19:
        *(Blk6 *)path = D_80078BD0;
        break;
    }
    strcpy(path + 5, name);
    if (firstfile(path, de) != 0) {
        return 0;
    }
    if (firstfile(path, de) != 0) {
        return 0;
    }
    fd = func_8004FEFC(path, (blocks << 16) | 0x200);
    func_8004FF3C(fd);
    if (fd == -1) {
        return 5;
    }
    return -1;
}
