#include "ghidra.h"
#include "matching.h"
#include "common.h"

extern s32 D_80069AD4[];

typedef struct {
    u8 unk_0x00[0x34];
    u32 unk_0x34 : 7;
    u32 : 25;
    u32 unk_0x38_0 : 1;
    u32 : 3;
    u32 unk_0x38_4 : 2;
    u32 unk_0x38_6 : 1;
    u32 : 25;
} Unk8009D0ACFlags;

void func_8009CD9C(void *arg0) {
    extern M2C_UNK D_8006388C[];
    extern M2C_UNK D_80063890[];
    extern M2C_UNK D_80085428[];
    extern M2C_UNK D_80100CE0[];
    M2C_UNK var_a2;
    M2C_UNK var_a2_2;

    if (M2C_GFIELD(D_80085428, s8, 0xBF7) == -1) {
        func_800185F8();
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x34) & 0x7F) {
        func_80020844(-0x48, -0x28, 0x90, 0x30, 0, 0, 0, 0, 4);
        func_8001F1A8(-0x3E, -0x20, 0, 1, 0, D_80100CE0, 1, 9, 3);
        var_a2 = 0;
        if (M2C_GFIELD(D_80085428, s8, 0xBF7) == 0) {
            var_a2 = 3;
        }
        func_8001F1A8(-0x28, -0xC, var_a2, 1, 0, D_8006388C, 0, 2, 3);
        var_a2_2 = 0;
        if (M2C_GFIELD(D_80085428, s8, 0xBF7) != 0) {
            var_a2_2 = 3;
        }
        func_8001F1A8(0, -0xC, var_a2_2, 1, 0, D_80063890, 0, 3, 3);
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009CD9C", func_8009CEE8);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009CD9C", func_8009D0AC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009CD9C", func_8009D2AC);

typedef struct {
    u8 pad0[0x15];
    u8 unk_15;
    u8 unk_16;
    u8 pad17[0x5D];
    s32 unk_74;
    u8 pad78[4];
} Unk8009D750Mon;
typedef struct {
    u8 unk_0;
    u8 unk_1;
    u8 unk_2;
    u8 unk_3;
    u8 pad4[2];
} Unk8009D750Slot;
typedef struct {
    u8 pad0[9];
    u8 unk_09;
    u8 padA[0xE];
    Unk8009D750Mon mon[2][6];
    u8 pad5E8[4];
    Unk8009D750Slot slot[2];
    u8 pad5F8[2];
    u8 unk_5FA;
} Unk8009D750Arg1;
void func_8009D750(s32 arg0, u8 *arg1) {
    extern u8 D_80018600[];
    extern struct {
        u8 pad0[0x30];
        u16 unk_30;
        u8 pad32[2];
    } D_801010B0[];
    extern s32 func_800CA474();
    extern u8 *func_80015B3C();
    extern void func_80015EF8();
    extern s32 func_80019F30();
    extern int func_800161C4();
    extern int func_8009D2AC();
    extern int func_8009F820();

    u32 side;
    s32 val;
    u8 *obj;
    u8 *slot;
    u8 *mon;
    s16 step;

    side = arg1[0x5FA];
    val = func_800CA474();
    obj = func_80015B3C(func_8009F820, func_800161C4, 2);
    func_80015EF8(obj);
    ((Unk8009D0ACFlags *)obj)->unk_0x38_0 = 1;
    ((Unk8009D0ACFlags *)obj)->unk_0x34 = 0;
    *(s32 *)(obj + 0x18) = func_80019F30(0x60013, 5);
    *(s16 *)(obj + 0x46) = -0xC2;
    *(s16 *)(obj + 0x4A) = -0xA2;
    *(s16 *)(obj + 0x6A) = 2;
    *(s16 *)(obj + 0x6E) = 2;
    *(s16 *)(obj + 0x4E) = 4;

    slot = arg1 + side * 6;
    if (slot[0x5ED] != 0) {
        obj = func_80015B3C(func_8009D2AC, func_800161C4, 4);
        func_80015EF8(obj);
        ((Unk8009D0ACFlags *)obj)->unk_0x38_0 = 1;
        ((Unk8009D0ACFlags *)obj)->unk_0x34 = 1;
        *(s32 *)(obj + 0x18) = func_80019F30(0x60012, 1);
        *(s16 *)(obj + 0x46) = -0x8E;
        *(s16 *)(obj + 0x4A) = 0x41;
        *(s16 *)(obj + 0x4E) = 5;
        {
            u8 *mon0 = arg1 + (slot[0x5EC] * 0x7C + side * 0x2E8);
            *(s32 *)(obj + 0x7C) = *(s32 *)(mon0 + 0x8C);
        }
        mon = arg1 + (slot[0x5EC] * 0x7C + side * 0x2E8);
        if (slot[0x5EE] != mon[0x2D] || slot[0x5EF] != mon[0x2E]) {
            obj = func_80015B3C(func_8009D2AC, D_80018600, 4);
            func_80015EF8(obj);
            ((Unk8009D0ACFlags *)obj)->unk_0x38_0 = 1;
            ((Unk8009D0ACFlags *)obj)->unk_0x34 = 2;
            obj = func_80015B3C(func_8009D2AC, func_800161C4, 4);
            func_80015EF8(obj);
            ((Unk8009D0ACFlags *)obj)->unk_0x38_0 = 1;
            ((Unk8009D0ACFlags *)obj)->unk_0x34 = 3;
        }
        {
            u8 *slot2 = arg1 + side * 6;
            if (slot2[0x5ED] == 2) {
                obj = func_80015B3C(func_8009D2AC, func_800161C4, 4);
                func_80015EF8(obj);
                *(s32 *)(obj + 0x7C) = val;
                ((Unk8009D0ACFlags *)obj)->unk_0x38_0 = 1;
                ((Unk8009D0ACFlags *)obj)->unk_0x34 = 4;
                step = 0xC00000 / D_801010B0[arg1[9]].unk_30;
                *(s16 *)(obj + 0x52) = step;
                *(s16 *)(obj + 0x50) = step;
                obj = func_80015B3C(func_8009D2AC, func_800161C4, 4);
                func_80015EF8(obj);
                *(s32 *)(obj + 0x7C) = val;
                ((Unk8009D0ACFlags *)obj)->unk_0x38_0 = 1;
                ((Unk8009D0ACFlags *)obj)->unk_0x34 = 5;
            }
        }
    }
}

u8 func_8009DA94(s32 arg0, s32 arg1, u8 arg2, s32 arg3) {
    extern s32 func_800A8E34(s32, s32, s32);
    u8 current = arg2;
    if (arg3 == 0) current = 0xFF;
    do {
        switch (arg3) {
        case 1:
            if (current == 0) return arg2;
            current--;
            break;
        case 2:
            if (current >= 5) return arg2;
            current++;
            break;
        case 0:
            current++;
            break;
        }
    } while (func_800A8E34(arg0, arg1, current) != 0);
    return current;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009CD9C", func_8009DB7C);

s32 func_8009DD64(u8 *arg0) {
    s32 stack[3];
    register s32 ret asm("t2");
    s32 max_diff;
    register s32 i asm("t1");
    register s32 *p_stack asm("a3");
    register u8 *p_a asm("a2");
    u8 *p_g;
    register s32 diff asm("v0");
    register s32 abs_diff asm("v1");

    u8 *g;
    register s32 *p_s2 asm("t1");
    register s32 *end asm("t3");

    ret = 1;
    max_diff = 0;
    i = max_diff;
    p_stack = stack;
    p_a = arg0;
    p_g = (u8 *)D_80069AD4;

    do {
        diff = *(s32 *)(p_g + 0x44);
        abs_diff = *(s32 *)(p_a + 0x77C);
        diff -= abs_diff;
        abs_diff = diff;
        if (diff < 0) abs_diff = -abs_diff;
        *p_stack = abs_diff;
        if (max_diff < abs_diff) {
            max_diff = abs_diff;
        }
        p_stack++;
        p_a += 4;
        i++;
        p_g += 4;
    } while (i < 3);

    max_diff = max_diff / 15;
    g = (u8 *)D_80069AD4;
    p_s2 = stack;
    end = stack + 3;

second_loop:
    {
        s32 g_val = *(s32 *)(g + 0x44);
        s32 a_val = *(s32 *)(arg0 + 0x77C);
        s32 *dest = (s32 *)(g + 0x44);
        s32 val;
        s32 a_val2;
        if (a_val < g_val) {
            ret = 0;
            if (max_diff < *p_s2) {
                val = g_val - *p_s2 / max_diff;
            } else {
                val = g_val - 1;
            }
            *dest = val;
            val = *(volatile s32 *)(g + 0x44);
            a_val2 = *(s32 *)(arg0 + 0x77C);
            if (val < a_val2) {
                *(s32 *)(g + 0x44) = a_val2;
            }
        } else if (g_val < a_val) {
            ret = 0;
            if (max_diff < *p_s2) {
                val = g_val + *p_s2 / max_diff;
            } else {
                val = g_val + 1;
            }
            *dest = val;
            val = *(volatile s32 *)(g + 0x44);
            a_val2 = *(s32 *)(arg0 + 0x77C);
            if (a_val2 < val) {
                ret = 1;
                *(s32 *)(g + 0x44) = a_val2;
            }
        }
        arg0 += 4;
        p_s2++;
        g += 4;
    }
    if ((s32)p_s2 < (s32)end) goto second_loop;

    return ret;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009CD9C", func_8009DED8);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009CD9C", func_8009E024);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009CD9C", func_8009E1BC);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009CD9C", func_8009E448);

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009CD9C", func_8009E798);

extern u8 D_8008ED68[];
extern void func_80034AB0(s32);
extern void func_80012604(s32);
extern s32 func_8009EB3C(u8 *, s32, s32);
void func_8009EA04(u8 *arg0) {
    register u8 *base asm("v0") = D_8008ED68;
    s32 temp_v1;
    s8 temp_v1_2;
    s8 var_v0;

    temp_v1 = *(s32 *)(base + *(u8 *)(arg0 + 0x5FA) * 0x10 + 0x88);
    if (temp_v1 & 0x20) {
        func_80034AB0(0x48);
        temp_v1_2 = *(s8 *)(arg0 + 0x627);
        if (temp_v1_2 == 0) {
            *(s8 *)(arg0 + 0x624) = 5;
            func_8009EB3C(arg0, 0, 0);
            func_80012604(3);
            return;
        }
        if (temp_v1_2 == 1) {
            *(s8 *)(arg0 + 0x624) = 6;
            func_8009EB3C(arg0, 1, 0);
            func_80012604(3);
            return;
        }
        *(s8 *)(arg0 + 0x624) = 8;
        func_80012604(5);
        return;
    }
    if (temp_v1 & 0x40) {
        func_80034AB0(0x5D);
        *(s8 *)(arg0 + 0x624) = 1;
        func_80012604(1);
        return;
    }
    if (temp_v1 & 0x1000) {
        func_80034AB0(0x84);
        if (*(s8 *)(arg0 + 0x627) != 0) {
            var_v0 = *(u8 *)(arg0 + 0x627) - 1;
        } else {
            var_v0 = 2;
        }
        goto block_15;
    }
    if (temp_v1 & 0x4000) {
        func_80034AB0(0x84);
        if (*(s8 *)(arg0 + 0x627) < 2) {
            var_v0 = *(u8 *)(arg0 + 0x627) + 1;
        } else {
            var_v0 = 0;
        }
block_15:
        *(s8 *)(arg0 + 0x627) = var_v0;
    }
}

extern s32 D_80069AD4[];
extern u8 D_80085428[];
extern s32 func_800A8E34(u8 *, s32, s32);
extern void func_800CA730(u8 *, u8, s32 *, s32 *);
extern s32 func_8009DB7C(u8 *, s32);
s32 func_8009EB3C(u8 *arg0, s32 arg1, s32 arg2) {
    struct UnkChess_80069AD4 {
        u8 pad[0x44];
        s32 vals[3];
    };
    struct UnkArg0 {
        u8 pad[0x798];
        s32 vals[3];
    };
    s32 sp10;
    s32 sp14;
    register s32 s1 asm("s1");
    register s32 s0 asm("s0");
    s32 i;

    s1 = 0xFF;
    do {
        s1++;
        s0 = s1 & 0xFF;
    } while (func_800A8E34(arg0, arg1, s0) != 0);
    *(u8 *)(arg0 + 0x628) = s0;

    if (arg2 == 1) {
        func_800CA730(D_80085428, *(u8 *)(arg0 + 0x5FA), &sp10, &sp14);
        if (sp14 != -1 && arg1 == sp10) {
            *(u8 *)(arg0 + 0x628) = sp14;
        }
    }

    if (arg2 < 2) {
        for (i = 0; i < 3; i++) {
            ((struct UnkArg0 *)arg0)->vals[i] = ((struct UnkChess_80069AD4 *)D_80069AD4)->vals[i];
        }
    }

    return func_8009DB7C(arg0, arg1);
}

void func_8009EC40(u8 *arg0) {
    extern u8 D_8008ED68[];
    extern s32 func_8009ECF8();
    extern void func_80012604(s32);
    extern s32 func_8002CC74();
    extern s32 func_8002CD50();
    u8 *base = D_8008ED68;
    s32 row;
    u8 side;
    side = arg0[0x5FA];
    row = arg0[0x624] - 5;
    if (arg0[0x62A] != 0) {
        if (func_8009DD64(arg0) != 0) {
            arg0[0x62A] = 0;
        }
        if (arg0[0x62A] != 0) goto finish;
    }
    if (func_8009DED8(arg0, side, row) != 0) {
        func_8009ECF8(arg0);
        func_80012604(4);
    }
finish:
    base[0xA66] = 1;
    func_8002CC74();
    func_8002CD50();
}
