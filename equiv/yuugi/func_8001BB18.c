#include "common.h"

typedef struct {
    u8 b[6];
} Blk6;

extern Blk6 D_80078B94, D_80078BA8, D_80078BB0, D_80078BB8;
extern Blk6 D_80078B9C, D_80078BC0, D_80078BC8, D_80078BD0;
extern char *strcpy();

char *func_8001BB18(char *name, char *buf, u32 idx) {
    switch (idx) {
    case 0:
        *(Blk6 *)buf = D_80078B94;
        break;
    case 1:
        *(Blk6 *)buf = D_80078BA8;
        break;
    case 2:
        *(Blk6 *)buf = D_80078BB0;
        break;
    case 3:
        *(Blk6 *)buf = D_80078BB8;
        break;
    case 16:
        *(Blk6 *)buf = D_80078B9C;
        break;
    case 17:
        *(Blk6 *)buf = D_80078BC0;
        break;
    case 18:
        *(Blk6 *)buf = D_80078BC8;
        break;
    case 19:
        *(Blk6 *)buf = D_80078BD0;
        break;
    }
    return strcpy(buf + 5, name);
}
