#include "common.h"

extern u16 D_8008EE54[];
extern void func_80012668();
extern void func_800374E8();
extern void func_80034AB0();
extern u8 D_8008ED68[];
typedef struct { u8 pad[0x103]; u8 cnt; } DState;
extern void *func_80015B3C();
extern void func_800C63AC();
extern void func_800C4FC4();
extern void func_800161C4();
extern void func_800AADE0();

void func_800C6330(void *arg0) {
    u8 *d = D_8008ED68;
    u32 n;
    s32 i;

    n = (d[0x103] < 2) ? 1 : d[0x103];
    i = 0;
    if (n != 0) {
        do {
            *(s32 *)((u8 *)arg0 + 0x84) += 1;
            if (*(s32 *)((u8 *)arg0 + 0x84) >= 7) {
                func_800185F8(arg0);
                return;
            }
            i++;
        } while (i < (s32)n);
    }
}

