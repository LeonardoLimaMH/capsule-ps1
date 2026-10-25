#include "common.h"

typedef struct {
    s16 m[3][3];
    s32 t[3];
} Matrix;

extern void SetColorMatrix();
extern void SetBackColor();

void func_80011AA4(void) {
    Matrix m;
    s32 i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            m.m[i][j] = 0xFF0;
        }
    }
    SetColorMatrix(&m);
    SetBackColor(0x80, 0x80, 0x80);
}
