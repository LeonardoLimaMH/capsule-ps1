#include "common.h"

void func_80029B28(void *arg0) {
    extern s32 D_80069B28[];
    extern s32 D_80069EB8[];
    s32 temp_s2;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s1_4;

    if (((*D_80069B28) != 0) && ((*D_80069EB8) == 0)) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 8);
        temp_s2 = M2C_FIELD(arg0, s32 *, 0xC);
        switch (temp_v1) {                          /* irregular */
        case 0:
            var_s1 = M2C_FIELD(arg0, s32 *, 0xA0);
            var_s0 = 0;
            if (temp_s2 > 0) {
                do {
                    func_80023C74(arg0, var_s0, var_s1);
                    var_s0 += 1;
                    var_s1 += 0x2C;
                } while (var_s0 < temp_s2);
                return;
            }
            break;
        case 1:
            var_s1_2 = M2C_FIELD(arg0, s32 *, 0xA0);
            var_s0_2 = 0;
            if (temp_s2 > 0) {
                do {
                    func_80023C74(arg0, var_s0_2, var_s1_2);
                    var_s0_2 += 1;
                    var_s1_2 += 0x2C;
                } while (var_s0_2 < temp_s2);
                return;
            }
            break;
        case 2:
            var_s1_3 = M2C_FIELD(arg0, s32 *, 0xA0);
            var_s0_3 = 0;
            if (temp_s2 > 0) {
                do {
                    func_80023C74(arg0, var_s0_3, var_s1_3);
                    var_s0_3 += 1;
                    var_s1_3 += 0x50;
                } while (var_s0_3 < temp_s2);
                return;
            }
            break;
        case 3:
            var_s1_4 = M2C_FIELD(arg0, s32 *, 0xA0);
            var_s0_4 = 0;
            if (temp_s2 > 0) {
                do {
                    func_80023C74(arg0, var_s0_4, var_s1_4);
                    var_s0_4 += 1;
                    var_s1_4 += 0x50;
                } while (var_s0_4 < temp_s2);
            }
            break;
        }
    }
}
