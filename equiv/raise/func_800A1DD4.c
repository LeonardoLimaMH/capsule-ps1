#include "common.h"

void func_800A1DD4(void) {
    extern void * D_800EF300[];
    extern void * D_800FAE10[];
    extern void * D_800FDE08[];
    s16 temp_a3_2;
    u16 temp_a2;
    u16 temp_a3;
    u16 temp_t2;

    temp_t2 = M2C_FIELD((*D_800EF300), u16 *, 0x46);
    temp_a2 = M2C_FIELD((*D_800EF300), u16 *, 0x4A);
    temp_a3 = M2C_FIELD((*D_800EF300), u16 *, 0x4E);
    M2C_FIELD((*D_800FDE08), u16 *, 0x46) = temp_t2;
    M2C_FIELD((*D_800FDE08), s16 *, 0x4A) = (s16) (temp_a2 + 2);
    M2C_FIELD((*D_800FDE08), u16 *, 0x4E) = temp_a3;
    M2C_FIELD((*D_800FDE08), s32 *, 0x38) = (s32) (M2C_FIELD((*D_800FDE08), s32 *, 0x38) | 8);
    M2C_FIELD((*D_800FDE08), s32 *, 0x38) = (s32) (M2C_FIELD((*D_800FDE08), s32 *, 0x38) & ~2);
    M2C_FIELD((*D_800FDE08), s32 *, 0x38) = (s32) (M2C_FIELD((*D_800FDE08), s32 *, 0x38) & ~4);
    M2C_FIELD((*D_800FDE08), s16 *, 0x50) = 0;
    M2C_FIELD((*D_800FDE08), s16 *, 0x52) = 0;
    M2C_FIELD((*D_800FDE08), s16 *, 0x74) = 0x24;
    M2C_FIELD((*D_800FDE08), s16 *, 0x76) = 0x24;
    M2C_FIELD((*D_800FAE10), u16 *, 0x46) = temp_t2;
    M2C_FIELD((*D_800FAE10), s16 *, 0x4A) = (s16) (temp_a2 + 1);
    temp_a3_2 = temp_a3 + 0xA;
    M2C_FIELD((*D_800FAE10), s16 *, 0x4E) = temp_a3_2;
    M2C_FIELD((*D_800FAE10), s32 *, 0x38) = (s32) (M2C_FIELD((*D_800FAE10), s32 *, 0x38) | 8);
    M2C_FIELD((*D_800FAE10), s32 *, 0x38) = (s32) (M2C_FIELD((*D_800FAE10), s32 *, 0x38) & ~2);
    M2C_FIELD((*D_800FAE10), s32 *, 0x38) = (s32) (M2C_FIELD((*D_800FAE10), s32 *, 0x38) & ~4);
    M2C_FIELD((*D_800FAE10), s16 *, 0x50) = 0;
    M2C_FIELD((*D_800FAE10), s16 *, 0x52) = 0;
    M2C_FIELD((*D_800FAE10), s16 *, 0x74) = 0x24;
    M2C_FIELD((*D_800FAE10), s16 *, 0x76) = 0x24;
    func_800A1F44(1, 0, 0, temp_a3_2);
}
