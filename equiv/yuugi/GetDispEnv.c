#include "common.h"

extern u8 D_80078988[];

void *GetDispEnv(void *env) {
    memcpy(env, D_80078988, 0x14);
    return env;
}
