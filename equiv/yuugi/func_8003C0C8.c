#include "common.h"

void func_8003C0C8(void *arg0) {
    extern s32 D_80078C9C;
    extern M2C_UNK D_800944B8[];
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u16 temp_v0_4;
    u16 temp_v0_5;
    u16 temp_v0_6;
    u16 temp_v0_7;
    u16 temp_v1;
    u32 var_v1;

    temp_v1 = M2C_FIELD(((D_80078C9C * 0x2AC) + (u8 *)D_800944B8), u16 *, 0x2A4);
    switch (temp_v1) {                              /* irregular */
    case 0x30:
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x1C) * 0xA;
        M2C_FIELD(arg0, u16 *, 0x1C) = temp_v0;
        temp_v0_2 = temp_v0 + M2C_FIELD(arg0, u16 *, 0x18);
        M2C_FIELD(arg0, u16 *, 0x1C) = temp_v0_2;
        M2C_FIELD(arg0, u16 *, 0x18) = (u16) (temp_v0_2 & 3);
        var_v1 = (u16) M2C_FIELD(arg0, u16 *, 0x1C) >> 2;
block_23:
        M2C_FIELD(arg0, u16 *, 0x1C) = (u16) var_v1;
        return;
    case 0x60:
        temp_v0_3 = M2C_FIELD(arg0, u16 *, 0x1C) * 5;
        M2C_FIELD(arg0, u16 *, 0x1C) = temp_v0_3;
        temp_v0_4 = temp_v0_3 + M2C_FIELD(arg0, u16 *, 0x18);
        M2C_FIELD(arg0, u16 *, 0x1C) = temp_v0_4;
        M2C_FIELD(arg0, u16 *, 0x18) = (u16) (temp_v0_4 & 3);
        var_v1 = (u16) M2C_FIELD(arg0, u16 *, 0x1C) >> 2;
        goto block_23;
    case 0xC0:
    case 0xF0:
        temp_v0_5 = M2C_FIELD(arg0, u16 *, 0x1C) + M2C_FIELD(arg0, u16 *, 0x18);
        M2C_FIELD(arg0, u16 *, 0x1C) = temp_v0_5;
        M2C_FIELD(arg0, u16 *, 0x18) = (u16) (temp_v0_5 & 1);
        var_v1 = (u16) M2C_FIELD(arg0, u16 *, 0x1C) >> 1;
        goto block_23;
    case 0x120:
    case 0x168:
        M2C_FIELD(arg0, u16 *, 0x1C) = (u16) (M2C_FIELD(arg0, u16 *, 0x1C) / 3);
        return;
    case 0x1E0:
    case 0x180:
        temp_v0_6 = M2C_FIELD(arg0, u16 *, 0x1C) + M2C_FIELD(arg0, u16 *, 0x18);
        M2C_FIELD(arg0, u16 *, 0x1C) = temp_v0_6;
        M2C_FIELD(arg0, u16 *, 0x18) = (u16) (temp_v0_6 & 3);
        var_v1 = (u16) M2C_FIELD(arg0, u16 *, 0x1C) >> 2;
        goto block_23;
    case 0x300:
    case 0x3C0:
        temp_v0_7 = M2C_FIELD(arg0, u16 *, 0x1C) + M2C_FIELD(arg0, u16 *, 0x18);
        M2C_FIELD(arg0, u16 *, 0x1C) = temp_v0_7;
        M2C_FIELD(arg0, u16 *, 0x18) = (u16) (temp_v0_7 & 7);
        var_v1 = (u16) M2C_FIELD(arg0, u16 *, 0x1C) >> 3;
        goto block_23;
    }
}
