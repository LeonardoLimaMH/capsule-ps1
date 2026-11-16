#include "ghidra.h"
#include "matching.h"
#include "common.h"

void func_80099B40(void) {

}

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_80099B48);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_80099D38);

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009A0B8);

typedef struct {
    u8 unk_00[0x54];
    s32 unk_54;
    s32 unk_58;
} ChessUnk69E4C;

void func_8009A30C(u8 *arg0, s32 arg1) {
    extern u8 D_8008ED68[];
    extern s32 D_8008F780[];
    extern s32 D_8008F7D0[];
    extern u8 *D_801187C0[];
    extern int func_8001FD98();
    extern u8 *func_8001ADF8();
    extern int func_80015A74();
    extern int func_80034AB0();
    extern int func_8001AD74();
    extern int func_80020EB4();
    extern int func_8001E310();
    extern int func_80033974();
    extern int func_80013668();
    extern int func_8001FD74();
    s32 temp;
    u8 *p;

    switch (arg0[0xE]) {
    case 0:
        func_8001FD98(2);
        *D_801187C0 = func_8001ADF8(1, 0, 2, 1);
        arg0[0xE]++;
        break;
    case 1:
        temp = func_8001FD98(2);
        if (arg0[0xF] == 1 && temp != 0) {
            *(s32 *)(*D_801187C0 + 0x38) = 4;
            arg0[0xE]++;
        }
        break;
    case 2:
        if (*D_8008F7D0 == 0) {
            arg0[0xF] = 2;
            arg0[0xE]++;
        }
        break;
    case 3:
        func_80015A74();
        if (arg0[0xF] == 3 || arg1 != 0) {
            if (arg1 != 0) {
                *D_8008F780 = 1;
                func_80034AB0(0x48);
            }
            func_8001AD74(4);
            arg0[0xE]++;
        }
        break;
    case 4:
        p = D_8008ED68;
        if (*(s32 *)(p + 0xA68) == 0 && func_80020EB4() != 0) {
            arg0[0xBE8] = 0;
            func_8001E310();
            func_80033974(0);
            func_80033974(0x8000);
            p[0x102] = 0;
            func_80013668();
            func_8001FD74();
        }
        break;
    default:
        break;
    }
}

void func_8009A48C(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xF) = 3;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess", func_8009A498);
