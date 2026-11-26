#include "common.h"

#include "ghidra.h"

#define OBJ(T, o) (*(T *)((u8 *)arg0 + (o)))
#define CAP_ROW(idx, side) (cap + ((idx) * 0x7C + (side) * 0x2E8))
typedef struct {
    u8 unk0;
    u8 pad1[0x2A];
    u8 unk2B;
    u8 pad2C[0x50];
} CapUnit;
typedef struct {
    u8 pad0[0x5E8];
    CapUnit unit[2][6];
} CapData;
#define OBJACF(T, o) (*(T *)((u8 *)obj + (o)))
void func_800ACF80(void *arg0) {
    extern CapData D_80085428;
    extern u8 D_8008ED68[];
    extern u16 D_8008EE44[];
    extern u16 D_8008EE48[];
    extern u16 D_800B25B8[];
    extern u8 D_800B3D20[];
    extern u8 D_800B3D24[];
    extern u8 D_800B3D25[];
    extern u16 D_800B3D26[];
    extern u16 D_800B3D28[];
    extern u16 D_800B3D2A[];
    extern u16 D_800B3D2C[];
    extern u8 D_800B3D38[][6];
    extern s32 D_800B3D50[];
    extern s32 D_800B3D54[];
    register void *obj asm("a3") = arg0;
    s32 idx = OBJACF(s32, 0x80);
    register s32 side asm("t1") = OBJACF(s32, 0x7C);
    u8 *game;
    s16 v;

    if (idx == 5) {
        if (*D_8008EE44 == 6 && (*D_800B3D24 == side || *D_800B3D25 == 1)) {
            OBJACF(s32, 0x38) &= ~1;
        } else if (*D_8008EE44 < 7) {
            OBJACF(s32, 0x38) |= 1;
        }
    } else if (D_80085428.unit[side][idx].unk2B == 1) {
        OBJACF(s32, 0x38) |= 1;
    } else {
        OBJACF(s32, 0x38) &= ~1;
    }

    game = D_8008ED68;
    if (*(u16 *)(game + 0xDC) == 5) {
        if (*(u16 *)(game + 0xE0) == 4 && *D_800B3D20 == 0) {
            if (side == 0) {
                OBJACF(s16, 0x6A) = -2;
            } else {
                OBJACF(s16, 0x6A) = 2;
            }
            OBJACF(s32, 0x38) |= 8;
        } else if (*D_8008EE48 == 1) {
            OBJACF(s32, 0x38) &= ~8;
        }
    } else if (*(u16 *)(game + 0xDC) == 6) {
        if (*(u16 *)(game + 0xE0) == 0) {
            if (*D_800B3D20 == 0) {
                u16 y;
                if (side == 0) {
                    OBJACF(s16, 0x6A) = 2;
                    OBJACF(u16, 0x46) = (idx % 3) * 0x30 - 0x11A;
                } else {
                    OBJACF(s16, 0x6A) = -2;
                    OBJACF(u16, 0x46) = (idx % 3) * 0x30 + 0xBA;
                }
                OBJACF(s16, 0x4A) = -0x30;
                if (idx / 3 != 0) {
                    s32 activeSide = *D_800B3D24;
                    OBJACF(u16, 0x4A) = 8;
                    if (activeSide != side && *D_800B3D25 != 1) {
                        OBJACF(u16, 0x46) += 0x18;
                    }
                }
                y = OBJACF(u16, 0x4A) + D_800B25B8[D_80085428.unit[side][idx].unk0];
                OBJACF(s32, 0x38) |= 8;
                OBJACF(u16, 0x4A) = y;
            }
        } else {
            s32 flags = OBJACF(s32, 0x38) & ~8;
            s32 activeSide = *D_800B3D24;
            OBJACF(s32, 0x38) = flags;
            if (side != activeSide && D_800B3D38[side][idx] == 0 && OBJACF(s16, 0x50) > 0) {
                v = OBJACF(u16, 0x50) - 0x40;
                dec:
                OBJACF(s16, 0x50) = v;
                if ((v << 16) <= 0) {
                    OBJACF(s16, 0x50) = 0;
                }
                goto copy;
            }
            if (*D_8008EE48 == 3) {
                if (side == 0) {
                    if (idx == *D_800B3D50) {
                        u16 x = OBJACF(u16, 0x46);
                        u16 y = OBJACF(u16, 0x4A);
                        *D_800B3D26 = x;
                        *D_800B3D2A = y;
                        *D_800B3D2A = y - D_800B25B8[D_80085428.unit[side][idx].unk0];
                    }
                } else if (idx == *D_800B3D54) {
                    u16 x = OBJACF(u16, 0x46);
                    u16 y = OBJACF(u16, 0x4A);
                    *D_800B3D28 = x;
                    *D_800B3D2C = y;
                    *D_800B3D2C = y - D_800B25B8[D_80085428.unit[side][idx].unk0];
                }
            } else if (*D_8008EE48 == 4) {
                if (*D_800B3D20 == 0) {
                    if (side == 0 ? idx == *D_800B3D50 : idx == *D_800B3D54) {
                        v = OBJACF(u16, 0x50) - 0x40;
                        goto dec;
                    }
                } else if (*D_800B3D20 == 1) {
                    if (side == 0) {
                        if (idx == *D_800B3D50) {
                            u16 x = *D_800B3D28;
                            u16 y = *D_800B3D2C;
                            OBJACF(u16, 0x46) = x;
                            OBJACF(u16, 0x4A) = y;
                            OBJACF(u16, 0x4A) = y + D_800B25B8[D_80085428.unit[side][idx].unk0];
                        }
                    } else if (idx == *D_800B3D54) {
                        u16 x = *D_800B3D26;
                        u16 y = *D_800B3D2A;
                        OBJACF(u16, 0x46) = x;
                        OBJACF(u16, 0x4A) = y;
                        OBJACF(u16, 0x4A) = y + D_800B25B8[D_80085428.unit[side][idx].unk0];
                    }
                } else if (side == 0 ? idx == *D_800B3D50 : idx == *D_800B3D54) {
                    v = OBJACF(u16, 0x50) + 0x40;
                    OBJACF(s16, 0x50) = v;
                    if (v >= 0x1000) {
                        OBJACF(s16, 0x50) = 0x1000;
                    }
                copy:
                    OBJACF(u16, 0x52) = OBJACF(u16, 0x50);
                }
            }
        }
    }
}
