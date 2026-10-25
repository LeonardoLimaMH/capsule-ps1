#include "common.h"

typedef struct {
    u8 b[6];
} Blk6;

extern Blk6 D_80078B94, D_80078BA8, D_80078BB0, D_80078BB8;
extern Blk6 D_80078B9C, D_80078BC0, D_80078BC8, D_80078BD0;
extern char *strcpy();
extern void func_8004FF3C();
extern s32 func_8001B964();

s32 func_8001C5D4(char *name, u32 idx, s32 blocks) {
    char path[0x20];
    s32 tries = 0;
    s32 r, fd;

    do {
        r = func_8001CB94(idx);
        if (r == 0 || r == 3) {
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
            r = 5;
            fd = func_8004FEFC(path, (blocks << 16) | 0x200);
            if (fd != -1) {
                r = 0;
            }
            func_8004FF3C(fd);
        }
        tries++;
        if (r == 0) {
            tries = 2;
        }
    } while (tries < 2);
    if (r == 5 && func_8001B964(idx) == 1) {
        return 11;
    }
    return r;
}
