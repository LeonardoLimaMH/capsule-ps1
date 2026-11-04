#include "common.h"

typedef struct {
    u8 pad0[0x8A];
    u16 unk8A;
    u8 pad8C[0x100];
    s32 f_18C;
    u8 pad190[0x18];
} S_80091618;

void func_800DC640(void) {
    extern u8 D_8006AFCC[];
    extern u8 D_800F1F58[];
    extern u8 D_800F1F70[];
    extern u8 D_80105990[];
    s32 temp_s0;
    void *temp_s0_2;
    void *temp_v0;

    M2C_GFIELD(D_8006AFCC, s16, 0x34) = 0;
    M2C_GFIELD(D_8006AFCC, s16, 0x30) = 1;
    M2C_GFIELD(D_80105990, s16, 0xA) = 0;
    func_80034AB0(1);
    M2C_GFIELD(D_80105990, s16, 0) = 0;
    func_800E4838(1, 0);
    temp_s0 = M2C_GFIELD(D_80105990, s16, 0) * 8;
    temp_v0 = temp_s0 + D_800F1F58;
    M2C_GFIELD(D_80105990, s16, 0xC) = GetClut(M2C_FIELD(temp_v0, s32 *, 0), M2C_FIELD(temp_v0, s32 *, 4));
    temp_s0_2 = temp_s0 + D_800F1F70;
    M2C_GFIELD(D_80105990, s16, 0xE) = GetTPage(0, 0, M2C_FIELD(temp_s0_2, s32 *, 0), M2C_FIELD(temp_s0_2, s32 *, 4));
}

void func_800DC6EC(s32 arg0, s32 arg1) {
    s32 z, w;

    arg0 &= 0xFFFF;
    arg1 &= 0xFFFF;
    if (arg0 || w) {
        z = 0;
    } else {
        z = 0;
    }
    func_800D1CC4(arg0, arg1, z, z);
}

void func_800DC718(s32 arg0, s32 arg1) {
    s32 z, w;

    arg0 &= 0xFFFF;
    arg1 &= 0xFFFF;
    if (arg0 || w) {
        z = 0;
    } else {
        z = 0;
    }
    func_800D1CC4(arg0, arg1, z, z);
}

void func_800DC744(s32 arg0, s32 arg1) {
    s32 z, w;

    arg0 &= 0xFFFF;
    arg1 &= 0xFFFF;
    if (arg0 || w) {
        z = 0;
    } else {
        z = 0;
    }
    func_800D1CC4(arg0, arg1, z, z);
}

void func_800DC770(s32 arg0, s32 arg1) {
    s32 z, w;

    arg0 &= 0xFFFF;
    arg1 &= 0xFFFF;
    if (arg0 || w) {
        z = 0;
    } else {
        z = 0;
    }
    func_800D1CC4(arg0, arg1, z, z);
}

void func_800DC79C(s32 arg0, s32 arg1) {
    s32 z, w;

    arg0 &= 0xFFFF;
    arg1 &= 0xFFFF;
    // junção artificial: faz o 2.7.2 copiar $a2 para $a3 em vez de recarregar o 0
    if (arg0 || w) {
        z = 0;
    } else {
        z = 0;
    }
    func_800D1CC4(arg0, arg1, z, z);
}

void func_800DC7C8(s32 arg0, s32 arg1) {
    s32 z, w;

    arg0 &= 0xFFFF;
    arg1 &= 0xFFFF;
    if (arg0 || w) {
        z = 0;
    } else {
        z = 0;
    }
    func_800D1CC4(arg0, arg1, z, z);
}

void func_800DC7F4(s32 arg0, s32 arg1) {
    s32 z, w;

    arg0 &= 0xFFFF;
    arg1 &= 0xFFFF;
    if (arg0 || w) {
        z = 0;
    } else {
        z = 0;
    }
    func_800D1CC4(arg0, arg1, z, z);
}

void func_800DC820(s32 arg0, s32 arg1) {
    s32 z, w;

    arg0 &= 0xFFFF;
    arg1 &= 0xFFFF;
    if (arg0 || w) {
        z = 0;
    } else {
        z = 0;
    }
    func_800D1CC4(arg0, arg1, z, z);
}

void func_800DC84C(s32 arg0, s32 arg1) {
    s32 z, w;

    arg0 &= 0xFFFF;
    arg1 &= 0xFFFF;
    if (arg0 || w) {
        z = 0;
    } else {
        z = 0;
    }
    func_800D1CC4(arg0, arg1, z, z);
}

void func_800DC878(s32 arg0, s32 arg1) {
    func_800E47F8();
    {
        register s32 matching_a0 __asm__("$4") = (arg0 & 0xFFFF);
        register s32 matching_a1 __asm__("$5") = (arg1 & 0xFFFF);
        register s32 matching_a2 __asm__("$6") = 0;
        __asm__ volatile("" : "=r"(matching_a0), "=r"(matching_a1), "=r"(matching_a2)
        : "0"(matching_a0), "1"(matching_a1), "2"(matching_a2));
        func_800D1CC4(matching_a0, matching_a1, matching_a2, matching_a2);
    }
    func_8003422C(1);
}

void func_800DC8C8(s32 arg0, s32 arg1) {
    {
        register s32 matching_a0 __asm__("$4") = (arg0 & 0xFFFF);
        register s32 matching_a1 __asm__("$5") = (arg1 & 0xFFFF);
        register s32 matching_a2 __asm__("$6") = 0;
        __asm__ volatile("" : "=r"(matching_a0), "=r"(matching_a1), "=r"(matching_a2)
        : "0"(matching_a0), "1"(matching_a1), "2"(matching_a2));
        func_800D1CC4(matching_a0, matching_a1, matching_a2, matching_a2);
    }
}

void func_800DC8F4(s32 arg0, s32 arg1) {
    func_800E47F8();
    {
        register s32 matching_a0 __asm__("$4") = (arg0 & 0xFFFF);
        register s32 matching_a1 __asm__("$5") = (arg1 & 0xFFFF);
        register s32 matching_a2 __asm__("$6") = 0;
        __asm__ volatile("" : "=r"(matching_a0), "=r"(matching_a1), "=r"(matching_a2)
        : "0"(matching_a0), "1"(matching_a1), "2"(matching_a2));
        func_800D1CC4(matching_a0, matching_a1, matching_a2, matching_a2);
    }
}

void func_800DC93C(s32 arg0, s32 arg1) {
    func_8009D324();
    {
        register s32 matching_a0 __asm__("$4") = (arg0 & 0xFFFF);
        register s32 matching_a1 __asm__("$5") = (arg1 & 0xFFFF);
        register s32 matching_a2 __asm__("$6") = 0;
        __asm__ volatile("" : "=r"(matching_a0), "=r"(matching_a1), "=r"(matching_a2)
        : "0"(matching_a0), "1"(matching_a1), "2"(matching_a2));
        func_800D1CC4(matching_a0, matching_a1, matching_a2, matching_a2);
    }
}

void func_800DC984(void) {
    func_8009CFB4();
}

void func_800DC9A4(void) {
    func_8009C5C8();
}

void func_800DC9C4(void) {
    func_8009D27C();
}

void func_800DC9E4(s32 arg0, s32 arg1) {
    extern s32 D_8006AF84[];
    extern u8 D_8006AFCC[];
    extern S_80091618 D_80091618[];
    extern u8 D_80105990[];
    register s32 var_a2 asm("a2");
    s32 temp_a0;
    s32 temp_a1;
    S_80091618 *elem;

    var_a2 = D_8006AF84[0];
    temp_a1 = arg1 & 0xFFFF;
    switch (temp_a1) {
    case 15: {
        register u8 *p asm("v0") = D_8006AFCC;
        *(s16 *)(p + 0x30) = 1;
        *(s32 *)(p + 0x48) = var_a2;
        *(s16 *)(D_80105990 + 0) = 0;
        func_800E4724();
        func_80034AB0(1);
        var_a2 = 4;
        break;
    }
    case 33: {
        register u8 *p asm("v0") = D_8006AFCC;
        *(s16 *)(p + 0x30) = 1;
        *(s32 *)(p + 0x48) = var_a2;
        *(s16 *)(D_80105990 + 0) = 1;
        func_800E4724();
        var_a2 = 4;
        break;
    }
    case 17: {
        register u8 *p asm("v0") = D_8006AFCC;
        *(s16 *)(p + 0x32) = 1;
        *(s32 *)(p + 0x4C) = var_a2;
        func_8009D2A8();
        var_a2 = 5;
        break;
    }
    case 18: {
        register u8 *p asm("v1") = D_8006AFCC;
        u8 *q;
        *(s16 *)(p + 0x30) = 2;
        q = D_80105990;
        *(s16 *)(q + 0xA) = 0;
        *(s16 *)(p + 0x34) = 1;
        *(s32 *)(p + 0x50) = var_a2;
        *(s16 *)D_80105990 = 2;
        func_800E4724();
        func_80034AB0(0x1F);
        var_a2 = 6;
        break;
    }
    case 19: {
        register s32 cmd asm("a0");
        register u8 *p asm("v0");
        cmd = 0x8001;
        p = D_8006AFCC;
        *(s16 *)(p + 0x36) = 1;
        *(s32 *)(p + 0x54) = var_a2;
        func_80034AB0(cmd);
        func_80024990(D_80091618[arg0 & 0xFFFF].f_18C, 2, 4, 0xF);
        var_a2 = 7;
        break;
    }
    case 20: {
        register s32 cmd asm("a0");
        register u8 *p asm("v0");
        cmd = 0x8002;
        p = D_8006AFCC;
        *(s16 *)(p + 0x38) = 1;
        *(s32 *)(p + 0x58) = var_a2;
        func_80034AB0(cmd);
        func_80024990(D_80091618[arg0 & 0xFFFF].f_18C, 2, 3, 0xE);
        var_a2 = 8;
        break;
    }
    case 21: {
        register u8 *p asm("v0") = D_8006AFCC;
        *(s16 *)(p + 0x3A) = 1;
        *(s32 *)(p + 0x5C) = var_a2;
        func_8009D21C();
        var_a2 = 9;
        break;
    }
    case 22: {
        register u8 *p asm("v0") = D_8006AFCC;
        *(s16 *)(p + 0x3C) = 1;
        *(s32 *)(p + 0x60) = var_a2;
        func_8009CDE4();
        var_a2 = 0xA;
        break;
    }
    case 23: {
        register u8 *p asm("v0") = D_8006AFCC;
        *(s16 *)(p + 0x3E) = 1;
        *(s32 *)(p + 0x64) = var_a2;
        func_8009C4D4();
        var_a2 = 0xB;
        break;
    }
    case 24: {
        register u8 *p asm("v0") = D_8006AFCC;
        *(s16 *)(p + 0x40) = 1;
        *(s32 *)(p + 0x68) = var_a2;
        func_8009CCEC();
        var_a2 = 0xC;
        break;
    }
    case 25: {
        register u8 *p asm("v0") = D_8006AFCC;
        *(s16 *)(p + 0x42) = 1;
        *(s32 *)(p + 0x6C) = var_a2;
        func_8009CA78();
        var_a2 = 0xD;
        break;
    }
    default:
        return;
    }

    temp_a0 = arg0 & 0xFFFF;
    {
        register S_80091618 *base asm("v1") = D_80091618;
        elem = base + temp_a0;
        func_800B0740(temp_a0, elem->unk8A, var_a2, 1);
    }
}
