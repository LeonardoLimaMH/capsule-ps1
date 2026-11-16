#include "common.h"

void func_800991D4(u8 *arg0, s32 arg1, u8 *arg2) {
    extern M2C_UNK D_80091618[];
    extern void func_80034AB0(s32);
    u8 *base = (u8 *)D_80091618;
    u16 s3;
    s32 i;
    s32 c;
    s32 v[2];

    c = *(u16 *)(base + (u16)arg1 * 0x1A8);
    v[0] = -1;
    v[1] = -1;
    s3 = 0x8F;

    switch (c) {
    case 0x9:
        if (*(s16 *)(arg2 + 0x372) == 2) {
            v[0] = 8;
        } else if (*(s16 *)(arg2 + 0x372) == 1) {
            v[0] = 6;
        }
        break;
    case 0x16:
        v[0] = 4;
        if (*(s16 *)(arg2 + 0x372) == 0) {
            v[1] = 7;
        }
        break;
    case 0x1C:
    case 0x24:
        if (*(s16 *)(arg2 + 0x372) == 2) {
            v[0] = 3;
        } else if (*(s16 *)(arg2 + 0x372) == 1) {
            v[0] = 2;
        }
        break;
    case 0x49:
        if (*(s16 *)(arg2 + 0x372) == 2) {
            v[0] = 2;
        } else if (*(s16 *)(arg2 + 0x372) == 1) {
            v[0] = 2;
        }
        break;
    case 0x57:
        v[0] = 4;
        break;
    case 0x3E:
    case 0x41:
    case 0x4B:
        s3 = 0x73;
        v[0] = 3;
        break;
    }

    for (i = 0; i < 2; i++) {
        if (v[i] == -1) {
            break;
        }
        if (*(u16 *)(arg0 + 0x20) == v[i] - 2 && *(s16 *)(arg0 + 0x24) == 0) {
            func_80034AB0(s3);
        }
    }
}



extern u8 D_8008ED68[];
extern s32 func_800994FC(u8 *);


extern u8 D_8008ED68[];
extern s32 func_8009A64C(u8 *);


#include "ghidra.h"
typedef struct { u8 pad_0[0x10]; ushort field_10; u8 pad_12[0x72]; ushort field_84; u8 pad_86[0x4]; ushort field_8A; u8 tail[0x11C]; } Record_8009B018;

