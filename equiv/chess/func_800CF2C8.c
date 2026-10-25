#include "common.h"

void func_800CF2C8(s8 arg0) {
    extern u8 D_80085428[];
    extern u8 D_8008ED68[];
    extern s16 D_8008EE54[];
    extern u8 D_80101CCC[];
    extern u8 D_80101D0C[];
    extern u8 D_80101E4E[];
    extern u8 D_80118C18[];
    s32 var_a1;
    s32 var_v0;
    u8 var_a0;
    void *temp_a0;
    void *temp_v0;

    M2C_FIELD(D_80118C18, s16 *, 8) = 0x32;
    M2C_FIELD(D_80118C18, s8 *, 0xC) = arg0;
    func_800CFE1C();
    temp_a0 = M2C_FIELD(D_80118C18, u8 *, 0x39A) + D_80085428;
    if (M2C_FIELD(temp_a0, u8 *, 0x5E4) == 0xFF) {
        M2C_FIELD(D_80118C18, u8 **, 4) = D_80101E4E;
    } else {
        M2C_FIELD(D_80118C18, u8 **, 4) = (u8 *) ((M2C_FIELD(temp_a0, u8 *, 0x5E4) * 0x2E) + D_80101D0C);
    }
    var_a1 = M2C_FIELD(D_80118C18, u8 *, 0x3A0) + M2C_FIELD(D_80118C18, u8 *, 0x3A1);
    var_a0 = M2C_FIELD((M2C_FIELD(D_80085428, u8 *, 0xBCA) + D_80085428), u8 *, 0x5E4);
    if ((M2C_FIELD(D_80085428, u8 *, 1) == 1) || (var_v0 = var_a1 < 3, (var_a0 == 0xFF))) {
        var_a0 = 0;
        var_v0 = var_a1 < 3;
    }
    if (var_v0 != 0) {
        var_a1 = 3;
    }
    M2C_FIELD(D_80118C18, u8 *, 0xB) = (u8) M2C_FIELD(((var_a0 * 8) + D_80101CCC + var_a1), u8 *, -3);
    temp_v0 = (M2C_FIELD(D_80118C18, u8 *, 0x39A) * 6) + D_80085428;
    M2C_FIELD(temp_v0, s8 *, 0xBBC) = 0;
    M2C_FIELD(temp_v0, s8 *, 0xBBD) = 0;
    M2C_FIELD(temp_v0, s8 *, 0xBBE) = 0;
    M2C_FIELD(temp_v0, s8 *, 0xBBF) = 0;
    M2C_FIELD(temp_v0, s8 *, 0xBC0) = 0;
    M2C_FIELD(temp_v0, s8 *, 0xBC1) = 0;
    func_800D3408(0, var_a1);
    if (M2C_FIELD((M2C_FIELD(D_80118C18, u8 *, 0x39A) + D_80085428), u8 *, 0x5E0) != 0) {
        M2C_FIELD(D_8008ED68, u16 *, 0xEC) = (u16) (M2C_FIELD(D_8008ED68, u16 *, 0xEC) + 1);
        return;
    }
    (*D_8008EE54) = 2;
}
