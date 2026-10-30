#include "common.h"

void func_800196A0(void) {
    extern M2C_UNK D_8008ED68[];
    extern M2C_UNK D_8008F7E0[];
    extern s32 D_80092400[];
    M2C_UNK sp18;
    u32 temp_a0_2;
    u32 temp_a1;
    u32 temp_s0;
    u32 temp_v0;
    u32 temp_v1_2;
    s32 var_v0;
    s32 var_v1;
    s8 var_s0;
    u16 temp_v0_2;
    u8 temp_v1;
    u8 temp_v1_5;
    void *temp_a0;
    void *temp_a1_2;
    void *temp_v1_3;
    void *temp_v1_4;

    M2C_FIELD(D_8008ED68, s32 *, 0x944) = 0;
    if (M2C_FIELD(D_8008F7E0, u8 *, 0) != M2C_FIELD(D_8008F7E0, u8 *, 1)) {
        var_v1 = 0;
        if (!(func_800337EC(D_8008ED68) & 0xF)) {
            var_v1 = ((*D_80092400) & 0xFFFFFF) == 0;
        }
        if (var_v1 != 0) {
            M2C_FIELD(D_8008ED68, s32 *, 0x944) = -1;
            if (M2C_FIELD(D_8008F7E0, u8 *, 3) == 0xFF) {
                temp_a0 = (M2C_FIELD(D_8008F7E0, u8 *, 0) << 5) + (u8 *)D_8008F7E0;
                temp_v1 = M2C_FIELD(temp_a0, u8 *, 4);
                switch (temp_v1) {                  /* switch 1; irregular */
                case 0x0:                           /* switch 1 */
                    if (DsQueueLen(temp_a0) == 0) {
                        M2C_FIELD(D_8008F7E0, s8 *, 0x408) = 0;
                        var_v0 = DsCommand(9, NULL, 0, -1);
block_30:
                        M2C_FIELD(((M2C_FIELD(D_8008F7E0, u8 *, 0) << 5) + (u8 *)D_8008F7E0), s32 *, 0x10) = var_v0;
                        if (M2C_FIELD(((M2C_FIELD(D_8008F7E0, u8 *, 0) << 5) + (u8 *)D_8008F7E0), s32 *, 0x10) != 0) {
                            M2C_FIELD(D_8008F7E0, u8 *, 3) = 1U;
                        }
                    }
                    break;
                case 0x2:                           /* switch 1 */
                    if (DsQueueLen(temp_a0) == 0) {
                        M2C_FIELD(D_8008F7E0, u8 *, 2) = 0U;
                        M2C_FIELD(D_8008F7E0, s8 *, 0x408) = 0;
                        DsIntToPos(M2C_FIELD(((M2C_FIELD(D_8008F7E0, u8 *, 0) << 5) + (u8 *)D_8008F7E0), s32 *, 0xC), &sp18);
                        var_v0 = DsCommand(2, &sp18, 0, -1);
                        goto block_30;
                    }
                    break;
                case 0x6:                           /* switch 1 */
                    if (DsQueueLen(temp_a0) == 0) {
                        M2C_FIELD(D_8008ED68, s32 *, 0xF8) = 1;
                        M2C_FIELD(D_8008F7E0, u8 *, 2) = 0U;
                        M2C_FIELD(D_8008F7E0, s8 *, 0x408) = 0;
                        temp_v1_2 = M2C_FIELD(D_8008F7E0, u8 *, 0) << 5;
                        temp_v1_3 = temp_v1_2 + (u8 *)D_8008F7E0;
                        temp_s0 = M2C_FIELD(temp_v1_3, s32 *, 0x18);
                        temp_a1 = M2C_FIELD((temp_v1_2 + 4 + (u8 *)D_8008F7E0), s32 *, 0x10) & 0xFFFFFF;
                        temp_a0_2 = M2C_FIELD(temp_v1_3, s32 *, 8);
                        if (temp_a0_2 != 0) {
                            temp_v1_4 = temp_a1 + (temp_a0_2 - 0x80000000);
                            M2C_FIELD(D_8008F7E0, s32 **, 0x418) = (s32 *) (temp_v1_4 - 4);
                            M2C_FIELD(temp_v1_4, s32 *, -4) = 0x11111111;
                        }
                        DsIntToPos(M2C_FIELD(((M2C_FIELD(D_8008F7E0, u8 *, 0) << 5) + (u8 *)D_8008F7E0), s32 *, 0xC), &sp18, 0x80000000);
                        M2C_FIELD(((M2C_FIELD(D_8008F7E0, u8 *, 0) << 5) + (u8 *)D_8008F7E0), s32 *, 0x10) = func_8004749C(&sp18, temp_s0, temp_a1 - 0x80000000, 0x80);
                        if (M2C_FIELD(((M2C_FIELD(D_8008F7E0, u8 *, 0) << 5) + (u8 *)D_8008F7E0), s32 *, 0x10) != 0) {
                            M2C_FIELD(D_8008F7E0, u8 *, 3) = 1U;
                        }
                    }
                    break;
                case 0x15:                          /* switch 1 */
                    if (DsQueueLen(temp_a0) == 0) {
                        M2C_FIELD(D_8008F7E0, u8 *, 2) = 0U;
                        M2C_FIELD(D_8008F7E0, s8 *, 0x408) = 0;
                        DsIntToPos(M2C_FIELD(((M2C_FIELD(D_8008F7E0, u8 *, 0) << 5) + (u8 *)D_8008F7E0), s32 *, 0xC), &sp18);
                        var_v0 = DsPacket(0, &sp18, 0x15, 0, 3);
                        goto block_30;
                    }
                    break;
                case 0xFF:                          /* switch 1 */
                    M2C_FIELD(temp_a0, s32 (**)(void *), 0xC)(temp_a0);
block_37:
                    M2C_FIELD(D_8008F7E0, u8 *, 3) = 0xFFU;
                    M2C_FIELD(D_8008F7E0, u8 *, 0) = (u8) (M2C_FIELD(D_8008F7E0, u8 *, 0) + 1);
                    break;
                case 0xFD:                          /* switch 1 */
                    if (M2C_FIELD(temp_a0, s32 (**)(void *), 0xC)(temp_a0) != 0) {
                        goto block_37;
                    }
                    break;
                case 0xFE:                          /* switch 1 */
                    if (DsQueueLen(temp_a0) == 0) {
                        func_80019E1C(M2C_FIELD(((M2C_FIELD(D_8008F7E0, u8 *, 0) << 5) + (u8 *)D_8008F7E0), s32 *, 0xC));
                        goto block_37;
                    }
                    break;
                }
            } else if (M2C_FIELD(D_8008F7E0, u8 *, 3) == 1) {
                temp_a1_2 = (M2C_FIELD(D_8008F7E0, u8 *, 0) << 5) + (u8 *)D_8008F7E0;
                temp_v1_5 = M2C_FIELD(temp_a1_2, u8 *, 4);
                switch (temp_v1_5) {                /* irregular */
                case 2:
                case 21:
                case 0:
                    var_s0 = DsSync(M2C_FIELD(((u8 *)D_8008F7E0 + (M2C_FIELD(D_8008F7E0, u8 *, 0) << 5)), s32 *, 0x10), (u8 *)D_8008F7E0 + 0x424);
                    if (var_s0 == 2) {
                        M2C_FIELD(D_8008F7E0, s8 *, 0x408) = var_s0;
                        M2C_FIELD(D_8008F7E0, u8 *, 3) = 0xFFU;
                        M2C_FIELD(D_8008F7E0, u8 *, 0) = (u8) (M2C_FIELD(D_8008F7E0, u8 *, 0) + 1);
                    } else {
block_60:
                        if (var_s0 == 5) {
block_61:
                            func_80019CB8(D_8008F7E0);
                        }
                    }
                    break;
                case 6:
                    M2C_FIELD(D_8008ED68, s32 *, 0xF8) = (s32) M2C_FIELD(D_8008F7E0, u8 *, 3);
                    var_s0 = DsSync(M2C_FIELD(temp_a1_2, s32 *, 0x10), (u8 *)D_8008F7E0 + 0x424);
                    if (var_s0 == 2) {
                        temp_v0 = func_8004784C((u8 *)D_8008F7E0 + 0x41C);
                        M2C_FIELD(D_8008F7E0, s32 *, 0x410) = temp_v0;
                        if (temp_v0 <= 0) {
                            if (temp_v0 == 0) {
                                if ((M2C_FIELD(D_8008F7E0, u8 *, 0x40C) != 0) && (M2C_FIELD(((M2C_FIELD(D_8008F7E0, u8 *, 0) << 5) + (u8 *)D_8008F7E0), s32 *, 8) != 0)) {
                                    if (*M2C_FIELD(D_8008F7E0, s32 **, 0x418) != 0x2E004152) {
                                        M2C_FIELD(D_8008F7E0, u8 *, 2) = 0U;
                                        temp_v0_2 = M2C_FIELD(D_8008F7E0, u16 *, 0x40E) + 1;
                                        M2C_FIELD(D_8008F7E0, u16 *, 0x40E) = temp_v0_2;
                                        if ((temp_v0_2 & 3) == 3) {
                                            func_80019CB8(D_8008F7E0);
                                        }
                                        M2C_FIELD(D_8008F7E0, u8 *, 3) = 0xFFU;
                                    } else {
                                        M2C_FIELD(D_8008F7E0, u8 *, 3) = 0xFFU;
                                        M2C_FIELD(D_8008F7E0, u8 *, 0) = (u8) (M2C_FIELD(D_8008F7E0, u8 *, 0) + 1);
                                        M2C_FIELD(D_8008F7E0, s8 *, 0x408) = var_s0;
                                        M2C_FIELD(D_8008F7E0, u16 *, 0x40E) = 0U;
                                        M2C_FIELD(D_8008ED68, s32 *, 0xF8) = 0;
                                        M2C_FIELD(D_8008F7E0, u8 *, 2) = (u8) (M2C_FIELD(D_8008F7E0, u8 *, 2) | 1);
                                        M2C_FIELD(D_8008F7E0, u8 *, 0x409) = (u8) (M2C_FIELD(D_8008F7E0, u8 *, 0x409) + 1);
                                    }
                                } else {
                                    M2C_FIELD(D_8008F7E0, u8 *, 3) = 0xFFU;
                                    M2C_FIELD(D_8008F7E0, s8 *, 0x408) = 2;
                                    M2C_FIELD(D_8008F7E0, u16 *, 0x40E) = 0U;
                                    M2C_FIELD(D_8008ED68, s32 *, 0xF8) = 0;
                                    M2C_FIELD(D_8008F7E0, u8 *, 0) = (u8) (M2C_FIELD(D_8008F7E0, u8 *, 0) + 1);
                                    M2C_FIELD(D_8008F7E0, u8 *, 2) = (u8) (M2C_FIELD(D_8008F7E0, u8 *, 2) | 1);
                                    M2C_FIELD(D_8008F7E0, u8 *, 0x409) = (u8) (M2C_FIELD(D_8008F7E0, u8 *, 0x409) + 1);
                                }
                            } else if (temp_v0 >= 0) {

                            } else {
                                goto block_61;
                            }
                        }
                    } else {
                        goto block_60;
                    }
                    break;
                }
            }
        }
    }
    if ((u8) M2C_FIELD(D_8008F7E0, u8 *, 0) >= 0x20U) {
        M2C_FIELD(D_8008F7E0, u8 *, 0) = 0U;
    }
}
