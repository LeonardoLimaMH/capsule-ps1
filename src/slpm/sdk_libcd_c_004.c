#include "common.h"

#include "common.h"

typedef struct { u8 b[4]; } U4;
extern s32 D_80134EB8, D_80134EB4, D_80134EAC;
extern u8 *D_80134ED0;
extern U4 D_80137310;
extern s32 D_80137314;
extern void (*D_80137320)(void);

void func_80119D84(void) {
    u8 *p = D_80134ED0 + D_80134EB8 * 32;
    *(u16 *)p = 2;
    D_80137310 = *(U4 *)(p + 0x1C);
    D_80137314 = *(s32 *)(p + 8);
    D_80134EB8 = D_80134EB4;
    if (D_80137320) D_80137320();
    D_80134EAC = 0;
}
