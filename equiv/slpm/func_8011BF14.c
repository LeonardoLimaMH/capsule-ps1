#include "common.h"

void func_8011BF14(void) {
    extern M2C_UNK D_80133340[];
    if (M2C_FIELD(D_80133340, M2C_UNK (**)(), 0) != NULL) {
        M2C_FIELD(D_80133340, M2C_UNK (**)(), 0)();
    }
    M2C_FIELD(D_80133340, M2C_UNK (**)(), -4)();
}
