#include "common.h"

void func_8009AAA4(void *arg0) {
    extern M2C_UNK D_8008ED68[];
    s32 temp_v1;
    s32 var_v0;
    s32 var_v1;

    func_800AECE0(D_8008ED68, arg0, M2C_FIELD(arg0, u8 *, 0xBCA));
    if (M2C_FIELD(arg0, u8 *, 0xBEB) != 0) {
        func_8009E1BC(arg0);
    }
    if (M2C_FIELD(arg0, u8 *, 0xBE9) != 0) {
        func_800B0844(arg0);
    }
    switch (M2C_FIELD(D_8008ED68, u16 *, 0xE0)) {
    case 0:
        func_800A2810(arg0);
        break;
    case 1:
        func_800A33F8(arg0);
        break;
    case 2:
        func_800AF9DC(arg0);
        func_800A5850(arg0);
        break;
    case 3:
        func_800B4284(arg0);
        break;
    case 4:
        func_800B58EC(arg0);
        break;
    case 5:
        func_800B8A0C(arg0);
        break;
    case 6:
        func_800BA820(arg0);
        break;
    case 7:
        func_800BD8EC(arg0);
        break;
    case 8:
        func_800BD654(arg0);
        break;
    case 9:
        func_800BDBC0(arg0);
        break;
    case 10:
        func_800C28A8(arg0);
        break;
    case 11:
        func_800C416C(arg0);
        break;
    case 12:
        func_800AD4D8(arg0);
        break;
    case 13:
        func_8009F4AC(arg0);
        break;
    case 14:
        func_800C41E8(arg0);
        break;
    }
    if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
        var_v1 = M2C_FIELD(D_8008ED68, s32 *, 0x1C) + M2C_FIELD(D_8008ED68, u8 *, 0x103);
    } else {
        var_v1 = M2C_FIELD(D_8008ED68, s32 *, 0x1C) + 1;
    }
    M2C_FIELD(D_8008ED68, s32 *, 0x1C) = var_v1;
    temp_v1 = M2C_FIELD(arg0, s32 *, 0xBB8);
    if (M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
        var_v0 = temp_v1 + M2C_FIELD(D_8008ED68, u8 *, 0x103);
    } else {
        var_v0 = temp_v1 + 1;
    }
    M2C_FIELD(arg0, s32 *, 0xBB8) = var_v0;
}
