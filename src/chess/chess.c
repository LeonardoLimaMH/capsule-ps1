#include "ghidra.h"
#include "matching.h"
#include "common.h"

void func_80099B40(void) {

}

typedef struct {
    u8 pad0[3];
    u8 unk3;
} Tile99B48;
typedef struct {
    Tile99B48 (*board)[13];
    u8 pad4[0x30];
} Stage99B48;
typedef struct {
    u8 pad0[0xE];
    u8 unkE[5];
    u8 pad13[0x3C - 0x13];
} Monster99B48;
typedef struct {
    u8 unk0;
    u8 unk1[8];
    u8 unk9[5];
    u8 unkE[5];
    u8 unk13;
    u8 pad14[0x7C - 0x14];
} Unit99B48;
typedef struct {
    u8 pad0[9];
    u8 unk9;
    u8 padA[0x18 - 0xA];
    Unit99B48 units[2][6];
} State99B48;
void func_80099B48(u8 *arg0) {
    extern Stage99B48 D_801010B0[];
    extern u8 D_80100C48[];
    extern u8 D_80100C68[2][6][8];
    extern Monster99B48 D_80063940[];
    extern s32 func_80020304(s32);
    extern u8 func_800CA408(Unit99B48 *);

    State99B48 *s6 = (State99B48 *)(arg0 + 0x5D0);
    Tile99B48 (*board)[13] = D_801010B0[s6->unk9].board;
    s32 i, j, k;
    Unit99B48 *unit;
    u32 val;
    register u32 prod asm("s0");
    u8 clamped;

    for (i = 0; i < 13; i++) {
        for (j = 12; j >= 0; j--) {
            board[i][j].unk3 = 0;
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 6; j++) {
            unit = &s6->units[i][j];
            unit->unk0 = D_80100C48[func_80020304(0x1D)];
            for (k = 0; k < 8; k++) {
                unit->unk1[k] = D_80100C68[i][j][k];
            }
            for (k = 0; k < 5; k++) {
                unit->unk9[k] = D_80063940[unit->unk0].unkE[k];
                unit->unkE[k] = D_80063940[unit->unk0].unkE[k];
            }
            val = unit->unkE[0];
            prod = val * func_80020304(100);
            val = prod / 100;
            if (val != 0) {
                clamped = 0xFF;
                if (val < 0x100) {
                    clamped = val;
                }
            } else {
                clamped = 1;
            }
            unit->unkE[0] = clamped;
            unit->unk13 = func_800CA408(unit);
        }
    }
}

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
