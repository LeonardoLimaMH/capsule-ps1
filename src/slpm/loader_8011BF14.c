#include "common.h"

extern void (*D_80133340[])(void);

void func_8011BF14(void) {
    if (D_80133340[0] != 0) {
        D_80133340[0]();
    }
    D_80133340[-1]();
}
