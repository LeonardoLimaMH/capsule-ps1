#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C__8001E180", func_8001E180);

#include "common.h"

void func_8001E1E4(void) {
    extern s32 D_8008F6D0[];
    (*D_8008F6D0) = 0;
    func_8001F160();
}

#include "ghidra.h"
void func_8001E208(undefined4 param_1)

{
  func_8001A998(param_1,0x18);
  return;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C__8001E180", func_8001E228);

s32 *func_8001E284(void) {
    typedef struct {
        s32 f0;
        u8 pad[0x14];
    } Entry;
    extern u8 D_800861B0[];
    Entry *p = (Entry *)D_800861B0;
    s32 i;

    for (i = 0; i < 5; i++, p++) {
        if (p->f0 == 0) {
            return (s32 *)p;
        }
    }
    return NULL;
}

void func_8001E2BC(void *arg0, s32 arg1, s32 arg2, s32 arg3, volatile s32 arg4, volatile s32 arg5) {
    extern u8 D_8008ED68[];
    u8 *b = D_8008ED68;
    s32 a, c, h;
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s16 *, 0x14) = arg2 + *(s32 *)(b + 0x108) / 2;
    a = arg4;
    c = arg5;
    h = *(s32 *)(b + 0x10C);
    M2C_FIELD(arg0, s8 *, 8) = a;
    arg3 += h / 2;
    M2C_FIELD(arg0, s8 *, 0xD) = c;
    M2C_FIELD(arg0, s16 *, 0x16) = arg3;
}

typedef struct {
    u8 data[0x18];
} Unk_800861B0;
INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C__8001E180", func_8001E310);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C__8001E180", func_8001E388);

s32 func_8001E404(void) {
    extern s32 D_8008F6F8[];
    return (*D_8008F6F8);
}

void func_8001E414(void) {
    extern u8 D_8008ED68[], D_800861B0[];
    u8 *b = D_8008ED68;
    s32 i;
    u8 *p;
    switch (*(u32 *)(b + 0x990)) {
    case 0: break;
    case 1: *(s32 *)(b + 0x990) = 2; break;
    case 2: *(s32 *)(b + 0x990) = 3; break;
    case 3:
        p = D_800861B0;
        for (i = 0; i < 5; i++) {
            func_8001E4A4(p);
            p += 0x18;
        }
        break;
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001DF7C__8001E180", func_8001E4A4);
