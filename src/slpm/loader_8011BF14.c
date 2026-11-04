#include "common.h"

extern s32 D_80133340;

void func_8011BF14(void) {
    void (**p)(void) = (void (**)(void))&D_80133340;

    if (*p != 0) {
        (*p)();
    }
    (*(p - 1))();
}
