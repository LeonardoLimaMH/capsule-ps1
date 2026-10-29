#include "common.h"

void func_800A5378(void) {
    s32 z, w, v;

    if (v || w) {
        z = 0;
    } else {
        z = 0;
    }
    func_800A5CF8(z, z);
    func_800A5954();
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A5378", func_800A53A4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A5378", func_800A548C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A5378", func_800A5954);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A5378", func_800A5CF8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A5378", func_800A5E54);

#include "common.h"

void func_800A6BDC(void) {
    extern u8 D_80069BE4[];
    extern u8 D_800900C0[];
    extern int func_80012508();
    void *temp_s0;
    void *temp_v1;

    func_8001A998(D_800900C0, 0x1318);
    func_8001A998(D_80069BE4, 0x20);
    func_80013668();
    func_80024024();
    func_8002CC2C();
    temp_v1 = D_80069BE4 - 0x38;
    M2C_FIELD(D_80069BE4, s32 *, -0x38) = 0;
    M2C_FIELD(temp_v1, s32 *, 4) = -0x20;
    M2C_FIELD(temp_v1, s32 *, 8) = 0x740;
    M2C_FIELD(D_80069BE4, s16 *, -0x28) = 0x1C0;
    temp_s0 = D_80069BE4 - 0x28;
    M2C_FIELD(temp_s0, s16 *, 2) = 0x200;
    M2C_FIELD(temp_s0, s16 *, 4) = 0;
    func_8001A464(0xE, 0x80113000);
    func_8001A464(0xF, 0x80146A18);
    func_8001A480(0xF, 0x80113000);
    func_80019F30(0x12000F, &func_80012508);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A5378", func_800A6CAC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A5378", func_800A6CE8);
