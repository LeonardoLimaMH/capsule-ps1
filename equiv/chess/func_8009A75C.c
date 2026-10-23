#include "common.h"

void func_8009A75C(s32 arg0) {
    extern u16 D_8008EE48[];
    extern int func_80012578();
    s32 temp_s0;
    s32 var_s2;
    s32 var_s3;
    void *temp_s4;
    void *var_s1;

    var_s2 = 0;
    temp_s4 = arg0 + 0x5D0;
    switch ((s32) (*D_8008EE48)) {                     /* irregular */
    case 0:
        var_s3 = 0;
        if ((*D_8008EE48) != 0) {
            return;
        }
        var_s1 = arg0 + 0x5D0;
loop_8:
        if (M2C_FIELD(var_s1, u8 *, 0x14) == 0xFF) {
            var_s3 += 0x980;
            func_80012578();
            var_s1 += 1;
            goto block_13;
        }
        if ((var_s2 != 1) || (M2C_FIELD(temp_s4, u8 *, 0x14) != M2C_FIELD(temp_s4, u8 *, 0x15))) {
            temp_s0 = M2C_FIELD(var_s1, u8 *, 0x14) + 5;
            func_8001A480(temp_s0, var_s3 + 0x8011AA80);
            func_80019F30(temp_s0 | 0x110000, func_80012578);
            var_s3 += 0x980;
            var_s1 += 1;
block_13:
            var_s2 += 1;
            if (var_s2 < 2) {
                goto loop_8;
            }
        } else {
            func_80012578();
        }
        func_80012578();
        return;
    case 3:
        if (M2C_FIELD(temp_s4, u8 *, 0x14) == M2C_FIELD(temp_s4, u8 *, 0x15)) {
            func_8001AA70(0x8011B400, 0x8011AA80, 0x980);
        }
        func_80012508();
        return;
    }
}
