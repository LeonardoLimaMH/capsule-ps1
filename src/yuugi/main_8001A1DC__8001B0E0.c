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
    extern s32 D_8008ED68[];
    s32 *d = D_8008ED68;
    M2C_FIELD(arg0, s32 *, 0x2C) = M2C_FIELD(arg0, s32 *, 0x2C) - 1;
    if (M2C_FIELD(arg0, s32 *, 0x34) == 1) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x2C) == 0 || d[0x29A] == 1) {
        func_80013920();
    }
}

void func_8001B16C(void) {
    extern S_8001B16C D_80085428;
    S_8001B16C *d = &D_80085428;
    s32 i;
    for (i = 0; i < 3; i++) {
        d->f[i] = 0;
        d->e[i].a = 0;
        d->e[i].b = 0;
        d->e[i].c = 0;
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001B0E0", func_8001B1A8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001B0E0", func_8001B484);

extern char D_80078B94[];
extern char D_80078B9C[];
extern char D_80078BA4[];
void *memcpy(void *, const void *, unsigned int);
extern void *firstfile();
extern void *func_8004FF5C();
extern void func_8001BB18();
extern s32 func_8004FEFC();
extern s32 func_8004FF1C();
extern void func_8004FF3C();
s32 func_8001B964(s32 a0) {
    s8 name[0x20];
    u8 buf[0x80];
    u8 de[0x28];
    u8 path[0x20];
    void *p;
    s32 total = 0;
    s32 r;
    s32 fd;

    if (a0 == 0) {
        *(s32 *)name = *(s32 *)D_80078B94;
        *(s16 *)(name + 4) = *(s16 *)(D_80078B94 + 4);
    } else {
        *(s32 *)name = *(s32 *)D_80078B9C;
        *(s16 *)(name + 4) = *(s16 *)(D_80078B9C + 4);
    }
    name[5] = D_80078BA4[0];
    name[6] = D_80078BA4[1];
    p = firstfile(name, de);
    while (p == de) {
        func_8001BB18(de, path, a0);
        fd = func_8004FEFC(path, 1);
        if (fd == -1) {
            r = -2;
        } else if (func_8004FF1C(fd, buf, 0x80) == -1) {
            func_8004FF3C(fd);
            r = -2;
        } else {
            func_8004FF3C(fd);
            r = 0;
        }
        if (r < 0) {
            return r;
        }
        total += buf[3];
        p = func_8004FF5C(p);
    }
    return 15 - total;
}

u8 func_8001BAA0(u8 *buf, s32 len, u8 *out) {
    register u32 sum asm("a3") = 7;
    u32 i = 0;
    len -= 4;
    if (len != 0) {
        do {
            sum += *buf++;
            i++;
        } while (i < len);
    }
    *buf = sum;
    *out = sum;
    return sum;
}

u32 func_8001BAD8(u8 *buf, s32 len, u8 *out) {
    u32 sum = 7;
    u32 i = 0;
    len -= 4;
    if (len != 0) {
        do {
            sum += *buf++;
            i++;
        } while (i < len);
    }
    *out = sum;
    return *buf == (sum & 0xFF);
}
