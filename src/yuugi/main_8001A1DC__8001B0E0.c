#include "common.h"
#include "yuugi.h"

typedef struct {
    u8 a;
    u8 b;
    u16 pad;
    s32 c;
} E8_8001B16C;

typedef struct {
    u8 pad[0x34];
    u8 f[4];
    E8_8001B16C e[3];
} S_8001B16C;

void func_8001B0E0(void *arg0) {
    extern s32 D_8008F7D0[];
    (*D_8008F7D0) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0x10;
    M2C_FIELD(arg0, u16 *, 0x40) = (u16) (M2C_FIELD(arg0, u16 *, 0x40) + 1);
}

void func_8001B100(void *arg0) {
    extern u8 D_8008ED68[];
    M2C_FIELD(arg0, s32 *, 0x2C) = M2C_FIELD(arg0, s32 *, 0x2C) - 1;
    if (M2C_FIELD(arg0, s32 *, 0x34) == 1) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x2C) == 0 || *(s32 *)(D_8008ED68 + 0xA68) == 1) {
        func_80013920();
    }
}

void func_8001B16C(void) {
    extern u8 D_80085428[];
    u8 *p = D_80085428;
    s32 i;
    for (i = 0; i < 3; i++, p += 8) {
        D_80085428[0x34 + i] = 0;
        p[0x38] = 0;
        p[0x39] = 0;
        *(s32 *)(p + 0x3C) = 0;
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001B0E0", func_8001B1A8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001B0E0", func_8001B484);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001B0E0", func_8001B964);

u8 func_8001BAA0(u8 *buf, s32 len, u8 *out) {
    u32 sum = 7;
    u32 i;
    u32 n = len - 4;
    if (n != 0) {
        i = 0;
        do {
            sum += *buf;
            i++;
            buf++;
        } while (i < n);
    }
    *buf = sum;
    *out = sum;
    return sum;
}

u32 func_8001BAD8(u8 *buf, s32 len, u8 *out) {
    u32 sum = 7;
    u32 i;
    u32 n = len - 4;
    if (n != 0) {
        i = 0;
        do {
            sum += *buf;
            i++;
            buf++;
        } while (i < n);
    }
    *out = sum;
    return *buf == (sum & 0xFF);
}
