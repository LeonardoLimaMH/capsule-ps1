#include "ghidra.h"
#include "matching.h"
#include "common.h"

static inline void montar_A4A10(int param_1, int param_2, int param_3, int param_4, short *param_5, int iVar3)
{
    extern u8 D_80118AC8[];
    register short *src asm("v1");
    int iVar4;
    int sVar5;
    int sVar6;
    int iVar7;

    iVar4 = sVar5 = sVar6 = 0;
    iVar7 = (*(u8 *)(param_1 + param_2 + 0x5de) - 1) * 0x40;
    do {
        if (iVar4 < 2) {
            register short *src asm("v0");
            src = (short *)(D_80118AC8 + ((iVar3 % param_4) * 8 + iVar7));
            param_5[0] = src[0];
            param_5[1] = src[1];
            param_5[2] = src[2];
        } else {
            switch (param_3) {
            case 0:
                sVar6 = 8;
                break;
            case 1:
                sVar5 = -8;
                break;
            case 2:
            case 4:
                sVar6 = -8;
                break;
            case 3:
            case 5:
                sVar5 = 8;
                break;
            }
            src = (short *)(D_80118AC8 + (((iVar3 - 2) % param_4) * 8 + iVar7));
            param_5[0] = src[0] + sVar6;
            param_5[1] = src[1];
            param_5[2] = src[2] + sVar5;
        }
        param_5 += 4;
        iVar4++;
        iVar3++;
    } while (iVar4 < 4);
}
INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4__800A0850__800A0E60__800A13B4__800A1630__800A1780__800A1D3C__800A3758__800A37E8__800A3AE8__800A3C24__800A4108__800A461C__800A475C__800A4A10", func_800A4A10);

void func_800A4B34(void *arg0) {
    extern int func_800161C4();
    extern int func_800A5BAC();
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = arg0 + 0x5D0;
    M2C_FIELD(temp_v0, s8 *, 0x610) = 1;
    M2C_FIELD(temp_v0, s8 *, 0x619) = 1;
    M2C_FIELD(temp_v0, s8 *, 0x61B) = 1;
    M2C_FIELD(temp_v0, s8 *, 0x615) = 1;
    M2C_FIELD(temp_v0, u8 *, 0x616) = 0xFF;
    if (M2C_FIELD((temp_v0 + M2C_FIELD(temp_v0, u8 *, 0x5FA)), u8 *, 0x16) != 7) {
        temp_v0_2 = func_80015B3C(&func_800A5BAC, &func_800161C4, 5);
        func_80015EF8(temp_v0_2);
        M2C_FIELD(temp_v0_2, s32 *, 0x18) = func_80019F30(0x60012, 0x39);
        M2C_FIELD(temp_v0_2, s16 *, 0x46) = -0x98;
        M2C_FIELD(temp_v0_2, s16 *, 0x4A) = -0x6C;
        M2C_FIELD(temp_v0_2, s16 *, 0x4E) = 4;
        M2C_FIELD(temp_v0_2, s32 *, 0x38) = (s32) (M2C_FIELD(temp_v0_2, s32 *, 0x38) | 0x40);
        M2C_FIELD(temp_v0_2, s32 *, 0x7C) = (s32) M2C_FIELD(arg0, u8 *, 0xBCA);
        M2C_FIELD(temp_v0_2, s32 *, 0x80) = (s32) M2C_FIELD((arg0 + M2C_FIELD(arg0, u8 *, 0xBCA)), u8 *, 0x5E6);
        if (M2C_FIELD(arg0, u8 *, 0xBCA) == 0) {
            M2C_FIELD(temp_v0_2, u16 *, 0x46) = (u16) (M2C_FIELD(temp_v0_2, u16 *, 0x46) + 0xD8);
        }
    }
    func_800125D8();
}

void func_800A4C3C(void *arg0) {
    void *temp_s0;

    temp_s0 = arg0 + 0x5D0;
    if (func_800C9414() == 0) {
        M2C_FIELD(arg0, s16 *, 0xC) = 0;
        if (M2C_FIELD((temp_s0 + M2C_FIELD(temp_s0, u8 *, 0x5FA)), u8 *, 0x10) == 0) {
            func_800CFE1C();
            func_800125D8();
        }
        func_800125D8();
    }
}

void func_800A4CB0(u8 *arg0, s32 arg1) {
    extern u8 D_8008ED68[];
    extern u16 D_8008EE54[];
    extern void func_800A5C3C(void);
    extern void func_800161C4(void);
    extern void func_800A8548(u8 *, u8 *, s32);
    extern u8 *func_80015B3C(void *, void *, s32);
    extern void func_80015EF8(u8 *);
    extern s32 func_80019F30(s32, s32);
    extern void func_80012628(void);
    extern s32 func_800B03B8(u8 *, u8 *, s32);
    extern s32 func_800CFB1C(void);
    extern s32 func_800CFC9C(s32);
    extern s32 func_80020304(s32);
    extern void func_80012604(s32);
    extern void func_800125AC(s32);
    extern void func_800125D8(void);

    struct S0 {
        u8 pad[0x5ED];
        struct {
            u8 val;
            u8 pad[5];
        } unk[2];
    };

    u8 *ed = D_8008ED68;
    u8 *base = arg0 + 0x5D0;
    s32 idx = base[0x5FA];
    u8 *obj;
    s32 s4;
    s32 v;
    u16 prev;
    u16 cnt;

    switch (*(u16 *)(ed + 0xE8)) {
    case 0:
        ed[0x102] = 2;
        func_800A8548(arg0, base, idx);
        obj = func_80015B3C(func_800A5C3C, func_800161C4, 5);
        func_80015EF8(obj);
        *(s32 *)(obj + 0x18) = func_80019F30(0x60013, 8);
        *(s16 *)(obj + 0x4A) = -0x10;
        *(s16 *)(obj + 0x4E) = 3;
        *(s16 *)(obj + 0x46) = 0;
        obj[0x5B] = 1;
        *(s16 *)(obj + 0x5C) = 0;
        *(s16 *)(obj + 0x5E) = 0;
        *(s16 *)(obj + 0x60) = 0;
        *(s16 *)(obj + 0x62) = 0xF0;
        base[0x7A7] = 0;
        base[0x7A8] = 0;
        func_80012628();
        break;
    case 1:
        s4 = func_800B03B8(arg0, base, idx);
        if (arg1 == 0) {
            v = func_800CFB1C() & 0xFF;
        } else {
            v = func_800CFC9C(((idx << 7) | ((base + idx)[0x5FB] + 1)) & 0xFF) & 0xFF;
        }
        if (v == 0) {
            func_80012628();
            break;
        }
        prev = *(u16 *)(arg0 + 0xC);
        if (ed[0x103] >= 2) {
            cnt = prev + ed[0x103];
        } else {
            cnt = prev + 1;
        }
        *(u16 *)(arg0 + 0xC) = cnt;
        if (s4 != 0 && cnt >= 0x4B1) {
            if (func_80020304(3) == 0) {
                ed[0x102] = 0;
                *(s32 *)(ed + 0x99C) = *D_8008EE54;
                func_80012604(6);
            } else {
                *(u16 *)(arg0 + 0xC) = 0;
            }
        }
        break;
    case 2:
        if (func_800B03B8(arg0, base, idx) != 0) {
            base[0x7A8] = 1;
            func_80012628();
        }
        break;
    case 3:
        if (base[0x7A7] != 0) {
            ed[0x102] = 0;
            if (arg1 == 0 && ((struct S0 *)base)->unk[idx].val == 0) {
                base[0x624] = 1;
                func_800125AC(0xD);
            } else {
                func_800125D8();
            }
        }
        break;
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4__800A0850__800A0E60__800A13B4__800A1630__800A1780__800A1D3C__800A3758__800A37E8__800A3AE8__800A3C24__800A4108__800A461C__800A475C__800A4A10", func_800A4F2C);

void func_800A549C(u8 *arg0) {
    extern u16 D_8008EE50[];
    extern void func_800220B8(u8 *);
    extern void func_8009FD2C(u8 *, u8 *);
    extern void func_80012628(void);
    extern s32 func_800212AC(u8 *, s32, s32, s32);
    extern void func_800125AC(s32);
    u8 *base = arg0 + 0x5D0;
    u8 index = base[0x5FA];
    u8 *selection = base + index;
    u8 *object = base + (index * 0x2E8 + 0x18) + selection[0x5FB] * 0x7C;
    s32 state = *D_8008EE50;

    switch (state) {
    case 0:
        func_800220B8(arg0);
        func_8009FD2C(arg0, object);
        func_80012628();
        /* fallthrough */
    case 1:
        if (func_800212AC(arg0, 1, 0, 0) != 0) {
            func_80012628();
            return;
        }
        break;
    case 2:
        base[0x610] = state;
        func_800125AC(3);
        break;
    }
}
