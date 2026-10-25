#include "common.h"

typedef struct {
    u16 v[6];
} Six;

extern Six D_80010524;
extern u16 D_8006B1EC[];
extern u8 D_80078C50[];
extern s32 D_80078C4C, D_80078C3C, D_80078C40, D_80078C44, D_80078C48;

void func_80027A88(void) {
    Six l = D_80010524;
    s32 i;

    D_80078C4C = 7;
    D_80078C3C = 0;
    D_80078C40 = 0;
    D_80078C44 = 0;
    D_80078C48 = 0;
    D_8006B1EC[0] = 0;
    D_80078C50[0] = 1;
    for (i = 1; i < 7; i++) {
        D_8006B1EC[i] = l.v[i - 1];
        D_80078C50[i] = 0;
    }
}
