#include "common.h"

void func_8001FF50(void) {
    extern M2C_UNK D_80085428[];
    extern u16 D_80085432[];
    extern M2C_UNK D_8008ED68[];
    extern M2C_UNK D_800A5E54[];
    extern int func_80012508();
    u16 var_v0;
    u16 var_v0_2;

    switch (M2C_FIELD(D_8008ED68, u16 *, 0xDC)) {  /* irregular */
    case 0:
        M2C_FIELD(D_80085428, s8 *, 0) = 0;
        func_80013668(D_8008ED68);
        func_80012508();
        return;
    case 1:
        func_8001A480(3, 0x80097800);
        func_80019F30(0x110003, func_80012508);
        (*D_80085432) = 0;
        func_80012508();
        return;
    case 2:
        if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
            var_v0 = M2C_FIELD(D_80085428, u16 *, 0xA) + M2C_FIELD(D_8008ED68, u8 *, 0x103);
        } else {
            var_v0 = M2C_FIELD(D_80085428, u16 *, 0xA) + 1;
        }
        M2C_FIELD(D_80085428, u16 *, 0xA) = var_v0;
        func_80018F90((*D_80085432), 3);
        return;
    case 3:
        if ((u8) M2C_FIELD(D_8008ED68, u8 *, 0x103) >= 2U) {
            var_v0_2 = M2C_FIELD(D_80085428, u16 *, 0xA) + M2C_FIELD(D_8008ED68, u8 *, 0x103);
        } else {
            var_v0_2 = M2C_FIELD(D_80085428, u16 *, 0xA) + 1;
        }
        M2C_FIELD(D_80085428, u16 *, 0xA) = var_v0_2;
        func_80018F90((*D_80085432), 3);
        func_80012200(D_800A5E54);
        return;
    }
}
