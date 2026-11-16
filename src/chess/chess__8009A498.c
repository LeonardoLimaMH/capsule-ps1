#include "ghidra.h"
#include "matching.h"
#include "common.h"

typedef struct {
    u8 unk_00[0x54];
    s32 unk_54;
    s32 unk_58;
} ChessUnk69E4C;

void func_8009A498(u8 *arg0) {
    typedef struct {
        u8 pad[8];
        u8 b;
        u8 pad2[0x2B];
    } BoardEntry34;
    extern u16 D_8008EE48[];
    extern BoardEntry34 D_801010B0[];
    extern int func_80013668();
    extern int func_8009B23C();
    extern int func_80012578();
    extern int func_80014D30();
    extern int func_8009BFD4();
    extern int func_8001611C();
    extern int func_8001AD48();
    extern int func_80012508();
    s32 s0 = 0;

    switch (*D_8008EE48) {
    case 0:
        func_80013668();
        func_8009B23C(arg0);
        arg0[0xBE8] = 0;
        func_80012578();
        break;
    case 1:
        s0 = 0;
        if (arg0[0x5D0] == 0) {
            u8 v1 = arg0[0x5D4];
            s0 = 2;
            if (v1 != 7) {
                s0 = v1 == 6;
            }
        }
        if (D_801010B0[arg0[0x5D9]].b == 0) {
            func_80014D30(0, 0, s0);
        } else {
            func_80014D30(0, 1, s0);
        }
        func_8009BFD4(arg0, 0, s0);
        func_80012578();
        break;
    case 2:
        func_8009BFD4(arg0, 2, s0);
        func_8009BFD4(arg0, 3, s0);
        *(s16 *)(arg0 + 0xC) = 0;
        func_80012578();
        break;
    case 3:
        arg0[0xBE8] = 1;
        func_8001611C(0x1000);
        func_8001AD48(8);
        func_80012578();
        break;
    case 4:
        func_80012508();
        break;
    default:
        break;
    }
}




