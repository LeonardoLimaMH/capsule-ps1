#include "common.h"

extern u8 D_8007891E[];
extern char D_80011340[];
extern void (*D_80078918)();
extern u8 *D_80078914;
extern void func_8004AC78();
extern void *memcpy();

u8 *PutDrawEnv(u8 *env) {
    if (D_8007891E[0] >= 2) {
        D_80078918(D_80011340, env);
    }
    func_8004AC78(env + 0x1C, env);
    *(u32 *)(env + 0x1C) |= 0xFFFFFF;
    (*(void (**)())(D_80078914 + 8))(*(s32 *)(D_80078914 + 0x18), env + 0x1C, 0x40, 0);
    memcpy(D_8007891E + 0xE, env, 0x5C);
    return env;
}
