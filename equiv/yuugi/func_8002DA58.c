#include "common.h"

s32 func_8002DA58(void) {
    extern M2C_UNK D_80069AD4[];
    extern s32 D_80069C04[];
    extern M2C_UNK D_8008ED68[];
    M2C_UNK *var_a1;
    s16 var_v0_11;
    s16 var_v0_12;
    s16 var_v0_13;
    s16 var_v0_3;
    s16 var_v0_6;
    s16 var_v0_9;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_s0;
    s32 var_v0;
    u16 var_v0_10;
    u16 var_v0_2;
    u16 var_v0_5;
    u16 var_v0_7;
    u16 var_v0_8;
    u16 var_v1;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *var_v0_4;
    void *var_v1_2;
    void *var_v1_3;

    var_a1 = D_8008ED68;
    var_a0 = M2C_FIELD(D_8008ED68, s32 *, 0x90);
    var_s0 = 0;
    if ((var_a0 & 0x8008) == 0x8008) {
        var_a1 = D_80069AD4;
        if (M2C_FIELD(D_80069AD4, s32 *, 0x130) == 2) {
            var_a0 = M2C_FIELD(D_80069AD4, s32 *, 0xE0);
            var_v0 = M2C_FIELD(D_80069AD4, s32 *, 0xD8) + 0x20;
            goto block_3;
        }
        M2C_FIELD(D_80069AD4, s32 *, 0xD8) = (s32) (M2C_FIELD(D_80069AD4, s32 *, 0xD8) + 0x20);
        goto block_97;
    }
    if ((var_a0 & 0x2008) == 0x2008) {
        var_a1 = D_80069AD4;
        if (M2C_FIELD(D_80069AD4, s32 *, 0x130) == 2) {
            var_a0 = M2C_FIELD(D_80069AD4, s32 *, 0xE0);
            var_v0 = M2C_FIELD(D_80069AD4, s32 *, 0xD8) - 0x20;
block_3:
            M2C_FIELD(D_80069AD4, s32 *, 0x138) = var_v0;
            temp_v0 = (u8 *)D_80069AD4 + 0x138;
            M2C_FIELD(temp_v0, s32 *, 4) = M2C_FIELD(D_80069AD4, s32 *, 0xDC);
            M2C_FIELD(temp_v0, s32 *, 8) = var_a0;
        } else {
            M2C_FIELD(D_80069AD4, s32 *, 0xD8) = (s32) (M2C_FIELD(D_80069AD4, s32 *, 0xD8) - 0x20);
        }
        goto block_97;
    }
    if ((var_a0 & 0x4008) == 0x4008) {
        var_a1 = D_80069AD4;
        var_a0 = (s32) ((u8 *)D_80069AD4 + 0x138);
        if (M2C_FIELD(D_80069AD4, s32 *, 0x130) == 2) {
            M2C_FIELD(D_80069AD4, s32 *, 0x138) = (s32) M2C_FIELD(D_80069AD4, s32 *, 0xD8);
            M2C_FIELD(var_a0, s32 *, 8) = (s32) M2C_FIELD(D_80069AD4, s32 *, 0xE0);
            M2C_FIELD(var_a0, s32 *, 4) = (s32) (M2C_FIELD(D_80069AD4, s32 *, 0xDC) + 0x20);
        } else {
            M2C_FIELD(D_80069AD4, s32 *, 0xDC) = (s32) (M2C_FIELD(D_80069AD4, s32 *, 0xDC) + 0x20);
        }
        goto block_97;
    }
    if ((var_a0 & 0x1008) == 0x1008) {
        var_a1 = D_80069AD4;
        var_a0 = (s32) ((u8 *)D_80069AD4 + 0x138);
        if (M2C_FIELD(D_80069AD4, s32 *, 0x130) == 2) {
            M2C_FIELD(D_80069AD4, s32 *, 0x138) = (s32) M2C_FIELD(D_80069AD4, s32 *, 0xD8);
            M2C_FIELD(var_a0, s32 *, 8) = (s32) M2C_FIELD(D_80069AD4, s32 *, 0xE0);
            M2C_FIELD(var_a0, s32 *, 4) = (s32) (M2C_FIELD(D_80069AD4, s32 *, 0xDC) - 0x20);
        } else {
            M2C_FIELD(D_80069AD4, s32 *, 0xDC) = (s32) (M2C_FIELD(D_80069AD4, s32 *, 0xDC) - 0x20);
        }
        goto block_97;
    }
    if ((var_a0 & 0xC) == 0xC) {
        var_a1 = D_80069AD4;
        temp_v1 = (u8 *)D_80069AD4 + 0x138;
        if (M2C_FIELD(D_80069AD4, s32 *, 0x130) == 2) {
            var_a0 = M2C_FIELD(D_80069AD4, s32 *, 0xDC);
            M2C_FIELD(D_80069AD4, s32 *, 0x138) = (s32) M2C_FIELD(D_80069AD4, s32 *, 0xD8);
            M2C_FIELD(temp_v1, s32 *, 4) = var_a0;
            M2C_FIELD(temp_v1, s32 *, 8) = (s32) (M2C_FIELD(D_80069AD4, s32 *, 0xE0) + 0x20);
        } else {
            M2C_FIELD(D_80069AD4, s32 *, 0xE0) = (s32) (M2C_FIELD(D_80069AD4, s32 *, 0xE0) + 0x20);
        }
        goto block_97;
    }
    if ((var_a0 & 9) == 9) {
        var_a1 = D_80069AD4;
        temp_v1_2 = (u8 *)D_80069AD4 + 0x138;
        if (M2C_FIELD(D_80069AD4, s32 *, 0x130) == 2) {
            var_a0 = M2C_FIELD(D_80069AD4, s32 *, 0xDC);
            M2C_FIELD(D_80069AD4, s32 *, 0x138) = (s32) M2C_FIELD(D_80069AD4, s32 *, 0xD8);
            M2C_FIELD(temp_v1_2, s32 *, 4) = var_a0;
            M2C_FIELD(temp_v1_2, s32 *, 8) = (s32) (M2C_FIELD(D_80069AD4, s32 *, 0xE0) - 0x20);
        } else {
            M2C_FIELD(D_80069AD4, s32 *, 0xE0) = (s32) (M2C_FIELD(D_80069AD4, s32 *, 0xE0) - 0x20);
        }
        goto block_97;
    }
    if ((var_a0 & 0x1002) == 0x1002) {
        var_a1 = D_80069AD4;
        if (M2C_FIELD(D_80069AD4, s32 *, 0x130) == 3) {
            var_v1 = M2C_FIELD(D_80069AD4, u16 *, 0xB2);
            var_a0 = (s32) M2C_FIELD(D_80069AD4, u16 *, 0xB4);
            var_v0_2 = M2C_FIELD(D_80069AD4, u16 *, 0xB0) + 0x20;
            goto block_28;
        }
        var_v0_3 = M2C_FIELD(D_80069AD4, u16 *, 0xB0) + 0x20;
        goto block_35;
        goto block_97;
    }
    if ((var_a0 & 0x4002) == 0x4002) {
        var_a1 = D_80069AD4;
        if (M2C_FIELD(D_80069AD4, s32 *, 0x130) == 3) {
            var_v1 = M2C_FIELD(D_80069AD4, u16 *, 0xB2);
            var_a0 = (s32) M2C_FIELD(D_80069AD4, u16 *, 0xB4);
            var_v0_2 = M2C_FIELD(D_80069AD4, u16 *, 0xB0) - 0x20;
block_28:
            M2C_FIELD(D_80069AD4, u16 *, 0x150) = var_v0_2;
            var_v0_4 = (u8 *)D_80069AD4 + 0x150;
            goto block_29;
        }
        var_v0_3 = M2C_FIELD(D_80069AD4, u16 *, 0xB0) - 0x20;
block_35:
        var_a0 = (s32) var_v0_3;
        M2C_FIELD(D_80069AD4, u16 *, 0xB0) = (u16) var_v0_3;
        if (var_v0_3 < 0) {
            var_a0 = var_v0_3 + 0xFFF;
        }
        M2C_FIELD(D_80069AD4, u16 *, 0xB0) = (u16) (var_v0_3 - ((var_a0 >> 0xC) << 0xC));
        goto block_97;
    }
    if ((var_a0 & 0x8002) == 0x8002) {
        var_a1 = D_80069AD4;
        var_a0 = (s32) ((u8 *)D_80069AD4 + 0x150);
        if (M2C_FIELD(D_80069AD4, s32 *, 0x130) == 3) {
            M2C_FIELD(D_80069AD4, u16 *, 0x150) = (u16) M2C_FIELD(D_80069AD4, u16 *, 0xB0);
            var_v0_5 = M2C_FIELD(D_80069AD4, u16 *, 0xB2);
            M2C_FIELD(var_a0, u16 *, 4) = (u16) M2C_FIELD(D_80069AD4, u16 *, 0xB4);
            goto block_41;
        }
        var_v0_6 = M2C_FIELD(D_80069AD4, u16 *, 0xB2) + 0x20;
        goto block_48;
        goto block_97;
    }
    if ((var_a0 & 0x2002) == 0x2002) {
        var_a1 = D_80069AD4;
        var_a0 = (s32) ((u8 *)D_80069AD4 + 0x150);
        if (M2C_FIELD(D_80069AD4, s32 *, 0x130) == 3) {
            M2C_FIELD(D_80069AD4, u16 *, 0x150) = (u16) M2C_FIELD(D_80069AD4, u16 *, 0xB0);
            var_v0_7 = M2C_FIELD(D_80069AD4, u16 *, 0xB2);
            M2C_FIELD(var_a0, u16 *, 4) = (u16) M2C_FIELD(D_80069AD4, u16 *, 0xB4);
            goto block_46;
        }
        var_v0_6 = M2C_FIELD(D_80069AD4, u16 *, 0xB2) - 0x20;
block_48:
        var_a0 = (s32) var_v0_6;
        M2C_FIELD(D_80069AD4, u16 *, 0xB2) = (u16) var_v0_6;
        if (var_v0_6 < 0) {
            var_a0 = var_v0_6 + 0xFFF;
        }
        M2C_FIELD(D_80069AD4, u16 *, 0xB2) = (u16) (var_v0_6 - ((var_a0 >> 0xC) << 0xC));
        goto block_97;
    }
    var_a0 = M2C_FIELD(D_8008ED68, s32 *, 0x90);
    temp_v1_3 = var_a0 & 3;
    if ((var_a0 & 6) == 6) {
        var_a1 = D_80069AD4;
        var_v1_2 = (u8 *)D_80069AD4 + 0x150;
        if (M2C_FIELD(D_80069AD4, s32 *, 0x130) == 3) {
            var_a0 = (s32) M2C_FIELD(D_80069AD4, u16 *, 0xB2);
            M2C_FIELD(D_80069AD4, u16 *, 0x150) = (u16) M2C_FIELD(D_80069AD4, u16 *, 0xB0);
            var_v0_8 = M2C_FIELD(D_80069AD4, u16 *, 0xB4);
            M2C_FIELD(var_v1_2, s16 *, 2) = (s16) var_a0;
            goto block_54;
        }
        var_v0_9 = M2C_FIELD(D_80069AD4, u16 *, 0xB4) + 0x20;
        goto block_60;
        goto block_97;
    }
    if (temp_v1_3 == 3) {
        var_a1 = D_80069AD4;
        var_v1_3 = (u8 *)D_80069AD4 + 0x150;
        if (M2C_FIELD(D_80069AD4, s32 *, 0x130) == temp_v1_3) {
            var_a0 = (s32) M2C_FIELD(D_80069AD4, u16 *, 0xB2);
            M2C_FIELD(D_80069AD4, u16 *, 0x150) = (u16) M2C_FIELD(D_80069AD4, u16 *, 0xB0);
            var_v0_10 = M2C_FIELD(D_80069AD4, u16 *, 0xB4);
            M2C_FIELD(var_v1_3, s16 *, 2) = (s16) var_a0;
            goto block_92;
        }
        var_v0_9 = M2C_FIELD(D_80069AD4, u16 *, 0xB4) - 0x20;
block_60:
        var_a0 = (s32) var_v0_9;
        M2C_FIELD(D_80069AD4, u16 *, 0xB4) = (u16) var_v0_9;
        if (var_v0_9 < 0) {
            var_a0 = var_v0_9 + 0xFFF;
        }
        M2C_FIELD(D_80069AD4, u16 *, 0xB4) = (u16) (var_v0_9 - ((var_a0 >> 0xC) << 0xC));
        goto block_97;
    }
    if ((var_a0 & 0x110) == 0x110) {
        var_a1 = D_80069AD4;
        if (M2C_FIELD(D_80069AD4, s32 *, 0x130) == 1) {
            var_v1 = M2C_FIELD(D_80069AD4, u16 *, 0xEA);
            var_a0 = (s32) M2C_FIELD(D_80069AD4, u16 *, 0xEC);
            M2C_FIELD(D_80069AD4, u16 *, 0x148) = (u16) (M2C_FIELD(D_80069AD4, u16 *, 0xE8) + 0x20);
            var_v0_4 = (u8 *)D_80069AD4 + 0x148;
            goto block_29;
        }
        var_v0_11 = M2C_FIELD(D_80069AD4, u16 *, 0xE8) + 0x20;
        goto block_71;
        goto block_97;
    }
    if ((var_a0 & 0x140) == 0x140) {
        var_a1 = D_80069AD4;
        if (M2C_FIELD(D_80069AD4, s32 *, 0x130) == 1) {
            var_v1 = M2C_FIELD(D_80069AD4, u16 *, 0xEA);
            var_a0 = (s32) M2C_FIELD(D_80069AD4, u16 *, 0xEC);
            M2C_FIELD(D_80069AD4, u16 *, 0x148) = (u16) (M2C_FIELD(D_80069AD4, u16 *, 0xE8) - 0x20);
            var_v0_4 = (u8 *)D_80069AD4 + 0x148;
block_29:
            M2C_FIELD(var_v0_4, u16 *, 2) = var_v1;
            M2C_FIELD(var_v0_4, s16 *, 4) = (s16) var_a0;
        } else {
            var_v0_11 = M2C_FIELD(D_80069AD4, u16 *, 0xE8) - 0x20;
block_71:
            var_a0 = (s32) var_v0_11;
            M2C_FIELD(D_80069AD4, u16 *, 0xE8) = (u16) var_v0_11;
            if (var_v0_11 < 0) {
                var_a0 = var_v0_11 + 0xFFF;
            }
            M2C_FIELD(D_80069AD4, u16 *, 0xE8) = (u16) (var_v0_11 - ((var_a0 >> 0xC) << 0xC));
        }
        goto block_97;
    }
    if ((var_a0 & 0x180) == 0x180) {
        var_a1 = D_80069AD4;
        var_a0 = (s32) ((u8 *)D_80069AD4 + 0x148);
        if (M2C_FIELD(D_80069AD4, s32 *, 0x130) == 1) {
            M2C_FIELD(D_80069AD4, u16 *, 0x148) = (u16) M2C_FIELD(D_80069AD4, u16 *, 0xE8);
            var_v0_5 = M2C_FIELD(D_80069AD4, u16 *, 0xEA);
            M2C_FIELD(var_a0, u16 *, 4) = (u16) M2C_FIELD(D_80069AD4, u16 *, 0xEC);
block_41:
            M2C_FIELD(var_a0, s16 *, 2) = (s16) (var_v0_5 + 0x20);
        } else {
            var_v0_12 = M2C_FIELD(D_80069AD4, u16 *, 0xEA) + 0x20;
            goto block_82;
        }
        goto block_97;
    }
    if ((var_a0 & 0x120) == 0x120) {
        var_a1 = D_80069AD4;
        var_a0 = (s32) ((u8 *)D_80069AD4 + 0x148);
        if (M2C_FIELD(D_80069AD4, s32 *, 0x130) == 1) {
            M2C_FIELD(D_80069AD4, u16 *, 0x148) = (u16) M2C_FIELD(D_80069AD4, u16 *, 0xE8);
            var_v0_7 = M2C_FIELD(D_80069AD4, u16 *, 0xEA);
            M2C_FIELD(var_a0, u16 *, 4) = (u16) M2C_FIELD(D_80069AD4, u16 *, 0xEC);
block_46:
            M2C_FIELD(var_a0, s16 *, 2) = (s16) (var_v0_7 - 0x20);
        } else {
            var_v0_12 = M2C_FIELD(D_80069AD4, u16 *, 0xEA) - 0x20;
block_82:
            var_a0 = (s32) var_v0_12;
            M2C_FIELD(D_80069AD4, u16 *, 0xEA) = (u16) var_v0_12;
            if (var_v0_12 < 0) {
                var_a0 = var_v0_12 + 0xFFF;
            }
            M2C_FIELD(D_80069AD4, u16 *, 0xEA) = (u16) (var_v0_12 - ((var_a0 >> 0xC) << 0xC));
        }
        goto block_97;
    }
    if ((var_a0 & 0x108) == 0x108) {
        var_a1 = D_80069AD4;
        var_v1_2 = (u8 *)D_80069AD4 + 0x148;
        if (M2C_FIELD(D_80069AD4, s32 *, 0x130) == 1) {
            var_a0 = (s32) M2C_FIELD(D_80069AD4, u16 *, 0xEA);
            M2C_FIELD(D_80069AD4, u16 *, 0x148) = (u16) M2C_FIELD(D_80069AD4, u16 *, 0xE8);
            var_v0_8 = M2C_FIELD(D_80069AD4, u16 *, 0xEC);
            M2C_FIELD(var_v1_2, s16 *, 2) = (s16) var_a0;
block_54:
            M2C_FIELD(var_v1_2, s16 *, 4) = (s16) (var_v0_8 + 0x20);
        } else {
            var_v0_13 = M2C_FIELD(D_80069AD4, u16 *, 0xEC) + 0x20;
            goto block_94;
        }
        goto block_97;
    }
    if ((var_a0 & 0x102) == 0x102) {
        var_a1 = D_80069AD4;
        var_v1_3 = (u8 *)D_80069AD4 + 0x148;
        if (M2C_FIELD(D_80069AD4, s32 *, 0x130) == 1) {
            var_a0 = (s32) M2C_FIELD(D_80069AD4, u16 *, 0xEA);
            M2C_FIELD(D_80069AD4, u16 *, 0x148) = (u16) M2C_FIELD(D_80069AD4, u16 *, 0xE8);
            var_v0_10 = M2C_FIELD(D_80069AD4, u16 *, 0xEC);
            M2C_FIELD(var_v1_3, s16 *, 2) = (s16) var_a0;
block_92:
            M2C_FIELD(var_v1_3, s16 *, 4) = (s16) (var_v0_10 - 0x20);
        } else {
            var_v0_13 = M2C_FIELD(D_80069AD4, u16 *, 0xEC) - 0x20;
block_94:
            var_a0 = (s32) var_v0_13;
            M2C_FIELD(D_80069AD4, u16 *, 0xEC) = (u16) var_v0_13;
            if (var_v0_13 < 0) {
                var_a0 = var_v0_13 + 0xFFF;
            }
            M2C_FIELD(D_80069AD4, u16 *, 0xEC) = (u16) (var_v0_13 - ((var_a0 >> 0xC) << 0xC));
        }
block_97:
        var_s0 = 1;
    }
    if ((var_s0 == 1) && ((*D_80069C04) != 0)) {
        func_8002C610((s16) var_a0, var_a1);
    }
    return var_s0;
}
