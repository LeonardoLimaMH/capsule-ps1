#include "common.h"

/* real-callee: AddPrim */
/* real-callee: GetClut */
/* real-callee: GetTPage */
/* real-callee: SetPolyF3 */
/* real-callee: SetPolyF4 */
/* real-callee: SetPolyFT3 */
/* real-callee: SetPolyFT4 */
/* real-callee: SetPolyG3 */
/* real-callee: SetPolyG4 */
/* real-callee: SetPolyGT3 */
/* real-callee: SetPolyGT4 */
/* real-callee: SetSemiTrans */
/* real-callee: SetShadeTex */
/* real-callee: __adddf3 */
/* real-callee: __divdf3 */
/* real-callee: __fixdfsi */
/* real-callee: __floatsidf */
/* real-callee: __muldf3 */
/* real-callee: __negdf2 */
/* real-callee: __subdf3 */
/* real-callee: _add_mant_d */
/* real-callee: _comp_mant */
/* real-callee: _dbl_shift */
/* real-callee: _dbl_shift_us */
/* real-callee: _err_math */
/* real-callee: _mainasu */
/* real-callee: _mul_mant_d */
/* real-callee: func_800136C8 */
/* real-callee: func_80013C14 */
/* real-callee: func_80015B3C */
/* real-callee: func_80015D14 */
/* real-callee: func_800459CC */
/* real-callee: func_8004FE2C */
/* real-callee: memcpy */
/* real-callee: memmove */
/* real-callee: memset */
/* callee-contract: RotTransPers */
/* callee-contract: RotTransPers4 */
/* callee-contract: RotAverage4 */
/* callee-contract: SetRotMatrix */
/* callee-contract: SetTransMatrix */
/* rand-u16: 0x80078B7C 1 0 */
/* rand-u16: 0x80078B7E 1 32786 */
/* rand-u16: 0x8008ED68 1 0 */
/* rand-u16: 0x8008ED6A 1 32786 */
/* rand-u16: 0x80121090 1 8192 */
/* rand-u16: 0x80121092 1 32786 */
/* rand-u16: 0x8012C554 1 0 */
/* rand-u16: 0x8012C556 1 0 */
/* rand-u16: 0x8012C578 1 4096 */
/* rand-u16: 0x8012C57A 1 32787 */
/* rand-u16: 0x8012C57C 1 0 */
/* rand-u16: 0x8012C57E 1 0 */
/* rand-u16: 0x80131000 1 144 */
/* rand-u16: 0x80131002 1 0 */
/* rand-u16: 0x80131004 1 0 */
/* rand-u16: 0x80131006 1 0 */
/* rand-u16: 0x80131008 1 0 */
/* rand-u16: 0x8013100A 1 0 */
/* rand-u16: 0x8012C558 16 0 */
void func_800CCAA8(s32 arg0, s32 arg1, s32 arg2) {
    extern s32 D_8006AF84[];
    extern s16 D_80078C20[];
    extern u8 D_800EE710[];
    extern u8 D_800F1928[];
    extern u8 D_800F1958[];
    extern u8 D_800F1988[];
    extern u8 D_800F19C8[];
    extern int func_800161C4();
    extern int func_800CC974();
    extern int func_800CC9E4();
    s32 temp_a1;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s2;
    s32 temp_s5;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 var_s0;
    s8 temp_s0;
    void *temp_s3;
    void *temp_v0_2;

    temp_s3 = (arg2 << 5) + D_800EE710;
    temp_s5 = func_800B1260(arg0) & 0xFFFF;
    temp_s2 = (1 - arg0) * 3;
    func_80012A20(func_80019F30(M2C_FIELD(temp_s3, s32 *, 0) | 0x20000, *((arg2 * 4) + D_800F1988)), 3, (s32) (s16) (((temp_s2 + arg1) << 5) + 0x340), 0x80);
    temp_v0 = func_80015B3C(&func_800CC974, &func_800161C4, 1);
    if (temp_v0 != 0) {
        func_80015EF8(temp_v0);
        temp_s1 = M2C_FIELD(temp_s3, s32 *, 0xC);
        M2C_FIELD(temp_v0, s32 *, 0x18) = func_80019F30(M2C_FIELD(temp_s3, s32 *, 0) | 0x60000, temp_s1);
        M2C_FIELD(temp_v0, s16 *, 0x4E) = 5;
        M2C_FIELD(temp_v0, s16 *, 0x28) = (s16) ((arg1 + temp_s2) << 5);
        M2C_FIELD(temp_v0, s32 *, 0x7C) = temp_s1;
        temp_s1_2 = arg1 * 4;
        M2C_FIELD(temp_v0, s16 *, 0x66) = 0;
        M2C_FIELD(temp_v0, s16 *, 0x2A) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x1C) = 0;
        M2C_FIELD(temp_v0, s16 *, 0x46) = 0;
        M2C_FIELD(temp_v0, s16 *, 0x4A) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x34) = (s32) ((((((((M2C_FIELD(temp_v0, s32 *, 0x34) & ~0x100) | (((*D_80078C20) & 1) << 8)) & ~0x200) | ((arg0 & 1) << 9)) & ~0xC00) | ((arg1 & 3) << 0xA)) & 0xFFFF0FFF) | ((arg2 & 0xF) << 0xC));
        M2C_FIELD(temp_v0, s32 *, 0x30) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x30) & ~0x1C0 & ~0x30 & ~8);
        M2C_FIELD(temp_v0, s32 *, 0x38) = (s32) ((M2C_FIELD(temp_v0, s32 *, 0x38) & ~1) | 0x40);
        *(temp_s1_2 + ((temp_s5 * 0xC) + D_800F19C8)) = temp_v0;
        temp_a1 = (((*D_8006AF84) % 28800) / 1200) * 2;
        temp_v1 = ((*(temp_a1 + D_800F1958) * (((*D_8006AF84) % 1200) / 20)) / 60) + *(temp_a1 + D_800F1928);
        var_s0 = temp_v1;
        if (temp_v1 < 0) {
            var_s0 = temp_v1 + 0xFF;
        }
        temp_s0 = temp_v1 - ((var_s0 >> 8) << 8);
        temp_v0_2 = *(temp_s1_2 + (((func_800B1260(arg0) & 0xFFFF) * 0xC) + D_800F19C8));
        M2C_FIELD(temp_v0_2, s8 *, 0x5A) = temp_s0;
        M2C_FIELD(temp_v0_2, s8 *, 0x59) = temp_s0;
        M2C_FIELD(temp_v0_2, s8 *, 0x58) = temp_s0;
    }
    temp_v0_3 = func_80015B3C(&func_800CC9E4, &func_800161C4, 1);
    if (temp_v0_3 != 0) {
        func_80015EF8(temp_v0_3);
        temp_s1_3 = M2C_FIELD(temp_s3, s32 *, 0xC) + 1;
        M2C_FIELD(temp_v0_3, s32 *, 0x18) = func_80019F30(M2C_FIELD(temp_s3, s32 *, 0) | 0x60000, temp_s1_3);
        M2C_FIELD(temp_v0_3, s16 *, 0x4E) = 5;
        M2C_FIELD(temp_v0_3, s16 *, 0x28) = (s16) ((arg1 + ((1 - arg0) * 3)) << 5);
        M2C_FIELD(temp_v0_3, s16 *, 0x66) = 0;
        M2C_FIELD(temp_v0_3, s16 *, 0x2A) = 0;
        M2C_FIELD(temp_v0_3, s32 *, 0x7C) = temp_s1_3;
        M2C_FIELD(temp_v0_3, s32 *, 0x1C) = 0;
        M2C_FIELD(temp_v0_3, s16 *, 0x46) = 0;
        M2C_FIELD(temp_v0_3, s16 *, 0x4A) = 0;
        M2C_FIELD(temp_v0_3, s32 *, 0x34) = (s32) ((((((((M2C_FIELD(temp_v0_3, s32 *, 0x34) & ~0x100) | (((*D_80078C20) & 1) << 8)) & ~0x200) | ((arg0 & 1) << 9)) & ~0xC00) | ((arg1 & 3) << 0xA)) & 0xFFFF0FFF) | ((arg2 & 0xF) << 0xC));
        M2C_FIELD(temp_v0_3, s32 *, 0x30) = (s32) (M2C_FIELD(temp_v0_3, s32 *, 0x30) & ~0x1C0 & ~0x30 & ~8);
        M2C_FIELD(temp_v0_3, s32 *, 0x38) = (s32) ((M2C_FIELD(temp_v0_3, s32 *, 0x38) & ~1) | 0x40);
        M2C_FIELD(((temp_s5 * 0xC) + D_800F19C8 + (arg1 * 4)), s32 *, 0x48) = temp_v0_3;
    }
}
