#include "common.h"

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824__800A2A80__800A39D8", func_800A39D8);

void func_800A3AB4(u8 *arg0) {
    extern u8 D_80065390[];
    extern u8 D_8008ED68[];
    extern s16 D_800B3B38[];
    extern u8 D_800B3B88[];
    u8 *q = D_8008ED68;
    s32 temp;

    *(s32 *)(arg0 + 0x38) |= 1;
    if ((*(u16 *)(q + 0xDC) == 0x13 && *(u16 *)(q + 0xE0) == 0) || (*(u16 *)(q + 0xDC) == 0x1B && *(u16 *)(q + 0xE0) == 4)) {
        temp = *(s32 *)(arg0 + 0x84);
        switch (temp) {
        case 1:
            *(s32 *)(arg0 + 0x38) &= ~1;
            if (*(s32 *)(arg0 + 0x84) == 1) {
                *(s32 *)(arg0 + 0x18) = func_8001A434(*(s32 *)(arg0 + 0x7C) + D_800B3B88[*(s32 *)(arg0 + 0x80)], D_80065390);
            }
            break;
        case 2:
            if (((struct { u8 _p[8]; s16 v; } *)(D_800B3B38 + *(s32 *)(arg0 + 0x80)))->v == 0) {
                break;
            }
        case 0:
            *(s32 *)(arg0 + 0x38) &= ~1;
            break;
        }
    }
}

void func_800A3BDC(u8 *arg0) {
    extern u8 D_80085428[];
    extern u16 D_8008EE44[];
    u8 *p = D_80085428;
    if (D_8008EE44[0] == 0x18) {
        if (p[0x5D0] == 2) {
            *(s16 *)(arg0 + 0x4A) = -0x10;
            *(s32 *)(arg0 + 0x38) &= ~1;
            if (*(s32 *)(arg0 + 0x80) != 0) {
                *(s16 *)(arg0 + 0x4A) = -0x20;
            }
            return;
        }
        if (*(s32 *)(arg0 + 0x84) == 0) {
            *(s16 *)(arg0 + 0x4A) = -0x68;
            *(s32 *)(arg0 + 0x38) &= ~1;
            return;
        }
    }
    *(s32 *)(arg0 + 0x38) |= 1;
}

void func_800A3C70(u8 *arg0) {
    extern u8 D_80085428[];
    extern u16 D_8008EE44[];
    extern s16 D_800B3B38[];
    u8 *p = D_80085428;
    register s16 *t asm("v0");
    s16 *q;
    if (D_8008EE44[0] == 0x18 && *(q = (t = D_800B3B38) + *(s32 *)(arg0 + 0x84)) == 0) {
        if (q[6] == *(s32 *)(arg0 + 0x80)) {
            arg0[0x5A] = 0x80;
            arg0[0x59] = 0x80;
            arg0[0x58] = 0x80;
        } else {
            arg0[0x5A] = 0x30;
            arg0[0x59] = 0x30;
            arg0[0x58] = 0x30;
        }
        if (p[0x5D0] == 2) {
            s16 v = -0x50;
            *(s32 *)(arg0 + 0x38) &= ~1;
            if (*(s32 *)(arg0 + 0x84) != 0) {
                v = 0x38;
            }
            *(s16 *)(arg0 + 0x4A) = v;
            return;
        }
        if (*(s32 *)(arg0 + 0x84) == 0) {
            *(s16 *)(arg0 + 0x4A) = 0x10;
            *(s32 *)(arg0 + 0x38) &= ~1;
            return;
        }
    }
    *(s32 *)(arg0 + 0x38) |= 1;
}

void func_800A3D44(u8 *arg0) {
    extern u8 D_80085428[];
    extern u8 D_8008ED68[];
    extern u16 D_8008EE44[];
    extern s16 D_800B3B38[];
    extern s32 D_800B3BF8[];
    extern u8 D_800B3C00[];
    register u8 *a2 asm("a2") = arg0;
    u8 *p = D_80085428;
    s32 idx = *(s32 *)(a2 + 0x84);
    s16 temp_v1;

    if (D_8008EE44[0] == 0x18 && ((temp_v1 = D_800B3B38[idx]) == 1 || temp_v1 == 5)) {
        if (p[0x5D0] == 2) {
            *(s32 *)(a2 + 0x38) &= ~1;
            if (idx != 0) {
                *(s16 *)(a2 + 0x4A) = 0x28;
            } else {
                *(s16 *)(a2 + 0x4A) = -0x58;
            }
            if (D_800B3C00[idx] == 0) {
                if (D_800B3BF8[idx] != 0) {
                    *(u16 *)(a2 + 0x52) = 0;
                    *(u16 *)(a2 + 0x50) = 0;
                    return;
                } else {
                    *(u16 *)(a2 + 0x52) -= *(u16 *)(a2 + 0x76);
                    *(u16 *)(a2 + 0x50) -= *(u16 *)(a2 + 0x74);
                    if ((s16)*(u16 *)(a2 + 0x50) <= 0) {
                        D_800B3BF8[idx] = 1;
                    }
                    return;
                }
            } else {
                if (D_800B3BF8[idx] != 0) {
                    *(u16 *)(a2 + 0x52) = 0x1000;
                    *(u16 *)(a2 + 0x50) = 0x1000;
                    return;
                } else {
                    *(u16 *)(a2 + 0x50) += *(u16 *)(a2 + 0x74);
                    *(u16 *)(a2 + 0x52) += *(u16 *)(a2 + 0x76);
                    if (*(s16 *)(a2 + 0x50) >= 0x1000) {
                        D_800B3BF8[idx] = 1;
                    }
                    return;
                }
            }
        } else if (idx == 0) {
            *(s16 *)(a2 + 0x4A) = 0x10;
            *(u16 *)(a2 + 0x52) = 0x1000;
            *(u16 *)(a2 + 0x50) = 0x1000;
            *(s32 *)(a2 + 0x38) &= ~1;
            return;
        }
    } else {
        u8 *q = D_8008ED68;
        if (*(u16 *)(q + 0xDC) == 0xE && *(u16 *)(q + 0xE0) == 3) {
            *(u16 *)(a2 + 0x52) = 0x1000;
            *(u16 *)(a2 + 0x50) = 0x1000;
            *(s16 *)(a2 + 0x4A) = 0;
            *(s32 *)(a2 + 0x38) &= ~1;
            return;
        }
        q = D_8008ED68;
        if (*(u16 *)(q + 0xDC) == 0x1B && (*(u16 *)(q + 0xE0) == 1 || *(u16 *)(q + 0xE0) == 8)) {
            *(s16 *)(a2 + 0x4A) = -0x14;
            *(u16 *)(a2 + 0x52) = 0x1000;
            *(u16 *)(a2 + 0x50) = 0x1000;
            *(s32 *)(a2 + 0x38) &= ~1;
            return;
        }
    }
    *(s32 *)(a2 + 0x38) |= 1;
}

void func_800A3F70(u8 *arg0) {
    extern u8 D_80085428[];
    extern u16 D_8008EE44[];
    extern s16 D_800B3B38[];
    u8 *p = D_80085428;
    if (D_8008EE44[0] == 0x18) {
        s16 *t = D_800B3B38;
        *(s32 *)(arg0 + 0x18) = func_80019F30(0x60010, *(s16 *)((u8 *)(t + *(s32 *)(arg0 + 0x84)) + 4) + 0x23);
        if (p[0x5D0] == 2) {
            *(s16 *)(arg0 + 0x4A) = -8;
            *(s32 *)(arg0 + 0x38) &= ~1;
            return;
        }
        if (*(s32 *)(arg0 + 0x84) == 0) {
            *(s16 *)(arg0 + 0x4A) = -0x60;
            *(s32 *)(arg0 + 0x38) &= ~1;
            return;
        }
    }
    *(s32 *)(arg0 + 0x38) |= 1;
}

void func_800A4038(u8 *arg0) {
    extern u8 D_80085428[];
    extern u16 D_8008EE44[];
    extern s16 D_800B3B38[];
    u8 *p = D_80085428;
    s16 v;
    if (D_8008EE44[0] == 0x18) {
        if (D_800B3B38[*(s32 *)(arg0 + 0x84)] == 2) {
            if (p[0x5D0] == 2) {
                v = -0x50;
                *(s32 *)(arg0 + 0x38) &= ~1;
                if (*(s32 *)(arg0 + 0x84) != 0) {
                    v = 0x38;
                }
                *(s16 *)(arg0 + 0x4A) = v;
                return;
            }
            if (*(s32 *)(arg0 + 0x84) == 0) {
                *(s16 *)(arg0 + 0x4A) = 0x38;
                *(s32 *)(arg0 + 0x38) &= ~1;
                return;
            }
        }
    }
    *(s32 *)(arg0 + 0x38) |= 1;
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824__800A2A80__800A39D8", func_800A40DC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824__800A2A80__800A39D8", func_800A4448);

void func_800A4654(u8 *arg0) {
    extern u8 D_80085428[];
    extern u16 D_8008EE44[];
    extern s16 D_800B3B38[];
    u8 *p = D_80085428;
    s32 idx;
    s32 f;
    u16 m;
    f = *(s32 *)(arg0 + 0x38) | 1;
    *(s32 *)(arg0 + 0x38) = f;
    m = D_8008EE44[0];
    idx = *(s32 *)(arg0 + 0x84);
    if (m == 0x18) {
        if (p[0x5D0] != 2) {
            *(s32 *)(arg0 + 0x38) = f & ~1;
            return;
        }
        if (D_800B3B38[idx] == 1 || D_800B3B38[idx] == 5) {
            *(s32 *)(arg0 + 0x38) = f & ~1;
            if (idx == 0) {
                *(s16 *)(arg0 + 0x4A) = -0x60;
            } else {
                *(s16 *)(arg0 + 0x4A) = 0x20;
            }
        } else {
            *(s16 *)(arg0 + 0x4A) = -0x40;
        }
    } else if ((u32)(m - 0x19) < 2) {
        *(s32 *)(arg0 + 0x38) = f & ~1;
        *(s16 *)(arg0 + 0x4A) = -0x40;
        if (p[0x5D0] == 2) {
            if (idx != 0) {
                *(s16 *)(arg0 + 0x4A) = 0x20;
            } else {
                *(s16 *)(arg0 + 0x4A) = -0x60;
            }
        }
    }
}

void func_800A4720(u8 *arg0) {
    extern u8 D_80085428[];
    extern u16 D_8008EE44[];
    extern u16 D_800B3B38[];
    u8 *p = D_80085428;
    s16 v;
    if (D_8008EE44[0] == 0x18 && (u32)(D_800B3B38[*(s32 *)(arg0 + 0x84)] - 2) < 3) {
        *(s16 *)(arg0 + 0x46) = 0x20;
        if (p[0x5D0] == 2) {
            v = -0x60;
            *(s32 *)(arg0 + 0x38) &= ~1;
            if (*(s32 *)(arg0 + 0x84) != 0) {
                v = 0x28;
            }
            *(s16 *)(arg0 + 0x4A) = v;
            return;
        }
        if (*(s32 *)(arg0 + 0x84) == 0) {
            *(s16 *)(arg0 + 0x4A) = 0x20;
            *(s32 *)(arg0 + 0x38) &= ~1;
            return;
        }
    } else if ((u32)(D_8008EE44[0] - 0x19) < 2 && p[0x5D0] != 2) {
        *(s16 *)(arg0 + 0x46) = -0x40;
        *(s16 *)(arg0 + 0x4A) = 0x20;
        *(s32 *)(arg0 + 0x38) &= ~1;
        return;
    }
    *(s32 *)(arg0 + 0x38) |= 1;
}

#include "common.h"

extern u8 D_80085428[];
extern u16 D_8008EE44[];

void func_800A4820(void *arg0) {
    u8 *p = D_80085428;
    s16 var_a1;

    if ((u32) (D_8008EE44[0] - 0x19) < 2U) {
        M2C_FIELD(arg0, s32 *, 0x38) &= ~1;
        var_a1 = -0x70;
        if (p[0x5D0] == 2) {
            var_a1 = -0x10;
        }
        M2C_FIELD(arg0, s16 *, 0x4A) = var_a1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x38) |= 1;
    }
}

void func_800A4884(u8 *arg0) {
    extern u8 D_80085428[];
    extern u16 D_8008EE44[];
    extern s16 D_800B3B38[];
    u8 *p = D_80085428;
    s16 v;
    if ((u32)(D_8008EE44[0] - 0x19) < 2) {
        *(s16 *)(arg0 + 0x4A) = -0x50;
        *(volatile s32 *)(arg0 + 0x38) &= ~1;
        if (p[0x5D0] == 2) {
            v = -0x70;
            if (*(s32 *)(arg0 + 0x84) != 0) {
                v = 0x10;
            }
            *(s16 *)(arg0 + 0x4A) = v;
        } else if (*(s32 *)(arg0 + 0x84) != 0) {
            *(volatile s32 *)(arg0 + 0x38) |= 1;
        }
        if (D_8008EE44[0] == 0x19) {
            *(s16 *)(arg0 + 0x46) = ((struct { s16 a, b, c; } *)&D_800B3B38[*(s32 *)(arg0 + 0x84)])->c * 0x30 - 0x88;
        }
    } else {
        *(s32 *)(arg0 + 0x38) |= 1;
    }
}

void func_800A4964(u8 *arg0) {
    extern u16 D_8008ED68[];
    u8 t;
    if (D_8008ED68[0xDC / 2] == 0xE) {
        *(u32 *)(arg0 + 0x38) &= ~1;
        if (D_8008ED68[0xE0 / 2] == 0) {
            t = arg0[0x58] + 1;
            arg0[0x58] = t;
            if (t >= 0x80) {
                func_80012578();
            } else {
                arg0[0x5A] = t;
                arg0[0x59] = t;
            }
        }
    } else {
        *(u32 *)(arg0 + 0x38) |= 1;
    }
    if (D_8008EE44[0] < 0xE) {
        func_800185F8(arg0);
    }
}

#include "common.h"

extern u8 D_8008ED68[];
extern void (*D_800B2E5C[])(void);

void func_800A4A28(void) {
    if (M2C_GFIELD(D_8008ED68, u16, 0xDC) == 1) {
        func_8001FD98(5);
    }
    D_800B2E5C[M2C_GFIELD(D_8008ED68, u16, 0xDC)]();
}

void func_800A4A8C(void) {
    extern int func_80012508();
    func_8001A464(0xC, 0x80110000);
    func_80019F30(0xC, func_80012508);
    func_80012508();
}
