#include "common.h"

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B61E4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B6248);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B62AC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B6310);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B6624);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B6C48);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B6D98);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B6FA0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B70A0);

#include "common.h"

void func_800B7264(s32 arg0) {
    extern M2C_UNK D_800EEB9C[];
    M2C_FIELD(D_800EEB9C, s32 *, 0) = arg0;
    M2C_FIELD(D_800EEB9C, s32 *, 4) = 0x20;
    M2C_FIELD(D_800EEB9C, s32 *, 0x740) = 0;
    func_800B6FA0();
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B7298);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B74A4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B768C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B77AC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B786C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B78C4);

s32 func_800B7A5C(void) {
    return 0;
}

s32 func_800B7A64(void) {
    return 0;
}

s32 func_800B7A6C(void) {
    return 4;
}

void func_800B7A74(void) {

}

s32 func_800B7A7C(void) {
    return 4;
}

void func_800B7A84(void) {

}

void func_800B7A8C(void) {

}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B7A94);

void func_800B7E68(void) {

}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B7E70);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B7ED8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B7F40);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B7F74);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B7FA8);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B8184);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B81C4);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800B61E4", func_800B821C);

typedef struct {
    u8 pad[0x124];
    u16 values[0x42];
} MonsterValueRecord;
u16 func_800B847C(u32 player, s32 index) {
    extern MonsterValueRecord D_80091618[];
    u32 base = (u32)D_80091618;
    u32 offset = (player & 0xFFFF) * 0x1A8;
    MonsterValueRecord *record = (MonsterValueRecord *)(base + offset);
    return record->values[index];
}
