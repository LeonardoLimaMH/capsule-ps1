#include "common.h"

void func_8009AC88(void) {
    extern u8 D_8002E640[];
    extern u8 D_80085428[];
    extern u8 D_8008ED68[];
    extern u16 D_8008EE48[];
    extern s8 D_8008EE6A[];
    extern u8 D_801010B0[];
    u8 *temp_s0;
    M2C_UNK var_s3;

    rand();
    var_s3 = 0;
    if (M2C_FIELD(D_80085428, u8 *, 1) != 0) {
        if (!(M2C_FIELD(D_8008ED68, s32 *, 0x88) & 0x800)) {
            if (M2C_FIELD(D_8008ED68, s32 *, 0x98) & 0x800) {
                goto block_3;
            }
        } else {
block_3:
            var_s3 = 1;
        }
    }
    func_8001DB8C("                %d %d %d %d %d\n", M2C_FIELD(D_8008ED68, u16 *, 0xDC), M2C_FIELD(D_8008ED68, u16 *, 0xE0), M2C_FIELD(D_8008ED68, u16 *, 0xE4), (s32) M2C_FIELD(D_8008ED68, u16 *, 0xE8), (s32) M2C_FIELD(D_8008ED68, u16 *, 0xEC));
    temp_s0 = "           %d %d %d %d %d %d %d %d \n";
    if (M2C_FIELD(D_80085428, u8 *, 1) != 0) {
        func_8001DB8C(temp_s0, M2C_FIELD(D_80085428, u8 *, 0x5E8) + 1, M2C_FIELD(D_80085428, u8 *, 0x664) + 1, M2C_FIELD(D_80085428, u8 *, 0x6E0) + 1, M2C_FIELD(D_80085428, u8 *, 0x75C) + 1, M2C_FIELD(D_80085428, u8 *, 0x7D8) + 1, M2C_FIELD(D_80085428, u8 *, 0x854) + 1, (s32) M2C_FIELD(D_80085428, u8 *, 0x869), (s32) M2C_FIELD(D_80085428, u8 *, 0x86A));
        func_8001DB8C(temp_s0, M2C_FIELD(D_80085428, u8 *, 0x8D0) + 1, M2C_FIELD(D_80085428, u8 *, 0x94C) + 1, M2C_FIELD(D_80085428, u8 *, 0x9C8) + 1, M2C_FIELD(D_80085428, u8 *, 0xA44) + 1, M2C_FIELD(D_80085428, u8 *, 0xAC0) + 1, M2C_FIELD(D_80085428, u8 *, 0xB3C) + 1, (s32) M2C_FIELD(D_80085428, u8 *, 0xB51), (s32) M2C_FIELD(D_80085428, u8 *, 0xB52));
    }
    switch (M2C_FIELD(D_8008ED68, u16 *, 0xDC)) {
    case 0:
        func_8009A498(D_80085428);
        break;
    case 1:
        switch ((*D_8008EE48)) {                       /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            func_8009C1B4(D_80085428, 0, 0);
            func_8009C1B4(D_80085428, 0, 1);
            func_8009C1B4(D_80085428, 1, 0);
            func_8009C1B4(D_80085428, 1, 1);
        case 0:                                     /* switch 2 */
block_18:
            func_80012578();
            break;
        case 1:                                     /* switch 1 */
            func_8009C6F8(D_80085428);
            goto block_18;
        case 2:                                     /* switch 1 */
            func_8009C758(D_80085428);
            goto block_18;
        case 3:                                     /* switch 1 */
            func_8009C7D4(D_80085428);
            func_8009C898();
        case 2:                                     /* switch 3 */
block_22:
            func_80012508();
            break;
        }
        break;
    case 2:
        func_8009A608(D_80085428);
        break;
    case 3:
        switch ((*D_8008EE48)) {                       /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            func_8001A49C(0x8013B9B4);
            func_8001A49C(M2C_FIELD(((M2C_FIELD(D_80085428, u8 *, 0x5D9) * 0x34) + D_801010B0), s32 *, 0x2C));
            goto block_18;
        case 2:                                     /* switch 2 */
            func_8009B4C8(D_80085428);
            goto block_18;
        case 3:                                     /* switch 2 */
            if (M2C_FIELD(D_80085428, u8 *, 1) != 0) {
                func_80099B48(D_80085428);
            }
            func_8009C0E4(D_80085428);
            func_8009C964(D_80085428);
            goto block_22;
        }
        break;
    case 4:
        switch ((*D_8008EE48)) {                       /* switch 3; irregular */
        case 1:                                     /* switch 3 */
            break;
        case 0:                                     /* switch 3 */
            func_8009BB98(D_80085428);
            M2C_FIELD(D_80085428, s16 *, 0xC) = 0;
            goto block_18;
        }
        break;
    case 5:
        M2C_FIELD(D_8008ED68, s8 *, 0x102) = 2;
        func_8009BE30(D_80085428, (M2C_FIELD(D_8008ED68, u16 *, 0xE0) / 5) & 0xFFFF, (M2C_FIELD(D_8008ED68, u16 *, 0xE0) % 5) & 0xFFFF);
        func_80012578();
        if (M2C_FIELD(D_8008ED68, u16 *, 0xE0) != 0xA) {

        } else {
            goto block_22;
        }
        break;
    case 6:
        func_8009A75C(D_80085428);
        break;
    case 7:
        (*D_8008EE6A) = 0;
        func_800A461C(D_80085428);
        func_800B881C(D_80085428);
        func_800AF9D4(D_80085428);
        M2C_FIELD(D_80085428, s8 *, 0xBE9) = 0;
        M2C_FIELD(D_80085428, s8 *, 0xBEB) = 0;
        if (M2C_FIELD(D_80085428, u8 *, 1) != 0) {
            func_80099D38(D_80085428);
        }
        goto block_22;
    case 8:
        func_8009A8B4(D_80085428);
        break;
    case 9:
        switch ((*D_8008EE48)) {                       /* switch 4; irregular */
        case 0:                                     /* switch 4 */
            func_800CA574(D_80085428);
            goto block_18;
        case 1:                                     /* switch 4 */
            if (func_80019654() != 0) {
                goto block_18;
            }
            break;
        case 2:                                     /* switch 4 */
            M2C_FIELD(D_80085428, u16 *, 8) = func_800CA4CC(D_80085428);
            goto block_22;
        }
        break;
    case 10:
        switch ((*D_8008EE48)) {                       /* switch 5; irregular */
        case 0:                                     /* switch 5 */
            func_800338DC(M2C_FIELD(D_80085428, u16 *, 8));
            M2C_FIELD(D_80085428, s16 *, 0xC) = 0;
            goto block_18;
        case 1:                                     /* switch 5 */
            if (!(func_800337EC() & 0x80)) {
                if (M2C_FIELD(D_80085428, u8 *, 0x5C8) & 4) {

                } else {
                    goto block_22;
                }
            } else {
                goto block_22;
            }
            break;
        }
        break;
    case 11:
        func_8009AAA4(D_80085428);
        break;
    case 12:
        func_80012200(D_8002E640);
        func_8001611C(0x1000);
        break;
    case 13:
        func_8009A48C(D_80085428);
        break;
    }
    if (M2C_FIELD(D_80085428, u8 *, 1) != 0) {
        func_8009A30C(D_80085428, var_s3);
    }
    if (M2C_FIELD(D_80085428, u8 *, 0xBE8) != 0) {
        func_800CA35C();
        func_800152C8();
    }
}
