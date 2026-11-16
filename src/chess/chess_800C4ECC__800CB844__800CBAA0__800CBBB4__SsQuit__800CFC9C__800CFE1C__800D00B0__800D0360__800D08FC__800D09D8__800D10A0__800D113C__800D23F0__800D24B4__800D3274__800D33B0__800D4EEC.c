#include "common.h"
#include "gte_inline.h"

typedef struct { u32 unk0; u32 unk4; u32 unk8; u8 pad[0x30]; } D63940_t;


#include "ghidra.h"

void func_800D4EEC(s32 arg0) {
    extern u8 D_80085428[];
    extern u8 (*D_80118C18[])[13][4];
    extern void func_800CFE1C(void);
    extern void func_800D497C(u8, s32);
    u8 *p = D_80085428;
    u8 *q = p + p[0xBCA] * 2;
    u8 b = q[0xBD2];
    u8 v = D_80118C18[0][q[0xBD1]][b][3];

    func_800CFE1C();
    func_800D497C(v, arg0);
}

typedef struct {
    u32 pad0 : 15;
    u32 a : 2;
    u32 b : 4;
    u32 pad1 : 11;
} Flags76D8;

