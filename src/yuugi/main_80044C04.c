#include "common.h"
#include "yuugi.h"

/* variáveis de estado do libcd (bios.c) a partir de 0x80072F28 */
typedef struct {
    u8 mode;
    u8 param[7];
    u8 *pparam;
    u8 pad0C[0x28 - 0x0C];
    u8 unk28;
    u8 pad29[0x33 - 0x29];
    u8 unk33;
    u8 pad34[0x40 - 0x34];
    s32 unk40;
    s32 unk44;
} CdVars;
extern CdVars D_80072F28;
extern s32 D_80072F74[];
extern s32 CD_cw();

s32 func_80044C04(s32 mode, s32 param) {
    u8 m;

    CD_flush();
    D_80072F28.mode = mode;
    if (param != 0) {
        func_80045858(D_80072F28.param, param);
        D_80072F28.pparam = D_80072F28.param;
    } else {
        D_80072F28.pparam = 0;
    }
    D_80072F28.unk40 = D_80072F74[D_80072F28.mode] ? 0x3C0 : 0x1E;
    m = D_80072F28.mode;
    D_80072F28.unk44 = 0;
    switch (m) {
    case 7:
        if (D_80072F28.unk33 == 1) {
            D_80072F28.mode = 1;
            D_80072F28.pparam = 0;
        }
        break;
    case 8:
        if (D_80072F28.unk33 != 1) {
            D_80072F28.mode = 1;
            D_80072F28.pparam = 0;
        }
        break;
    }
    if (CD_cw(D_80072F28.mode, D_80072F28.pparam, 0, 1) != 0) {
        D_80072F28.unk44 = 0;
        D_80072F28.unk40 = 0;
        return 0;
    }
    D_80072F28.unk28 = D_80072F28.mode;
    return 1;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80044C04", func_80044D2C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80044C04", func_80044FFC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80044C04", func_8004506C);
