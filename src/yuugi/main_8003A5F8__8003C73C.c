#include "common.h"
#include "yuugi.h"

typedef struct {
    s16 unk_0x0;
    u8 unk_0x2[0x17];
    u8 unk_0x19;
    u8 unk_0x1A;
    u8 unk_0x1B;
} Unk_800947E8;

typedef struct {
    u8 unk_0x0[0x288];
    s16 unk_0x288;
    s16 unk_0x28A;
    s16 unk_0x28C;
    s16 unk_0x28E;
    u8 unk_0x290[0x1C];
} Unk_800944B8Init;

typedef struct {
    s32 unk_0x0;
    s32 unk_0x4;
    u8 unk_0x8[0xC];
    u16 unk_0x14;
    u16 unk_0x16;
    u16 unk_0x18;
    u16 unk_0x1A;
    u16 unk_0x1C;
    u16 unk_0x1E;
    u8 unk_0x20;
    u8 unk_0x21;
    u8 unk_0x22;
    u8 unk_0x23;
    u8 unk_0x24;
    u8 unk_0x25;
    u8 unk_0x26;
    u8 unk_0x27;
} Unk_800944B8Stream;

#ifndef UNK_800944B8_DEFINED
#define UNK_800944B8_DEFINED
typedef struct {
    struct {
        s32 unk_0x0;
        u8 unk_0x4[0x1C];
        u8 unk_0x20;
        u8 unk_0x21[7];
    } unk_0x0[16];
    u8 unk_0x280[4];
    u8 *unk_0x284;
    s16 unk_0x288;
    s16 unk_0x28A;
    s16 unk_0x28C;
    s16 unk_0x28E;
    u8 unk_0x290[4];
    u32 unk_0x294;
    u32 unk_0x298;
    u8 unk_0x29C[4];
    u16 unk_0x2A0;
    u16 unk_0x2A2;
    u16 unk_0x2A4;
    u8 unk_0x2A6[6];
} Unk_800944B8;

extern Unk_800944B8 D_800944B8[];
extern s32 D_80078C9C;
#endif

extern s32 D_80078C94;
extern s32 D_80078D5C;
extern s32 D_80078C84;
extern s32 func_8003A5F8();
extern s32 func_8004FE3C();
extern s32 D_80078C94;
extern s32 D_80078D5C;
extern s32 D_80078C84;
extern s32 func_8003A5F8();
extern s32 func_8004FE3C();
extern u8 D_800949A8[];

void func_8003C73C(void) {
    extern Unk_800947E8 D_800947E8[];
    extern s32 D_80094768[];
    extern s32 D_80078D64;
    s32 i;
    for (i = 0; i < 16; i++) {
        D_800947E8[i].unk_0x0 = -1;
        D_800947E8[i].unk_0x19 = 0x7F;
        D_800947E8[i].unk_0x1A = 0x7F;
        D_800947E8[i].unk_0x1B = 0x40;
        {
            s32 *q = &D_80094768[i * 2];
            q[1] = 0;
            q[0] = 0;
        }
    }
    for (i = 0; i < 1; i++) {
        Unk_800944B8Init *e = &((Unk_800944B8Init *)D_800944B8)[i];
        e->unk_0x288 = -1;
        e->unk_0x28A = 0;
        e->unk_0x28E = 0x7F;
        e->unk_0x28C = 0x7F;
    }
    D_80078D64 = 0x1000;
}

#include "common.h"

extern u8 D_800949A8[];

void func_8003C7C8(void) {
    SpuInit();
    func_80038890();
    func_8003C73C();
    SpuInitMalloc(0x10, D_800949A8);
}
