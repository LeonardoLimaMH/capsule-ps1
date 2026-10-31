#include "common.h"

#include "common.h"

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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800DC640", func_800DC9E4);
