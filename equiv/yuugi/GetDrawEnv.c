#include "common.h"

extern u8 D_8007892C[];

void *GetDrawEnv(void *env) {
    memcpy(env, D_8007892C, 0x5C);
    return env;
}
