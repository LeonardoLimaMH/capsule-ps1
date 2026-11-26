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
    u32 unk_0x29C;
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

void func_8003B7B4(Unk_800944B8Stream *arg0, s32 arg1, s32 arg2, s32 arg3) {
    extern u8 D_800937D0[][0x54];
    extern void func_80039724(s32, s32, s32);
    extern void func_80038CA8(s32, s32, s32);
    extern void func_800398B4(s32, s32, s32);
    extern void func_80039E60(s32, s32, s32);
    extern void func_8003A5C8(s32, s32, s32);
    extern void func_8003A594(s32, s32);
    extern void func_8003A5C0(s32, s32);
    Unk_800944B8Stream *s;
    s32 i;
    u8 channel;
    u8 note;
    u8 val;

    note = arg2;
    val = arg3;
    channel = (arg1 & 0xF) | (D_80078C9C << 4);

    switch (arg1 & 0xF0) {
    case 0x80:
        func_80039724(channel, note, val);
        break;
    case 0x90:
        if (val != 0) {
            func_80038CA8(channel, note, val);
        } else {
            func_80039724(channel, note, 0);
        }
        break;
    case 0xA0:
        func_800398B4(channel, note, val);
        break;
    case 0xB0:
        if (note == 0x63) {
            if (val == 0x14) {
                if (D_800944B8[D_80078C9C].unk_0x2A0 != 0) {
                    for (i = 0; i < D_800944B8[D_80078C9C].unk_0x2A2; i++) {
                        s = (Unk_800944B8Stream *)&D_800944B8[D_80078C9C].unk_0x0[i];
                        s->unk_0x22 = val;
                        s->unk_0x21 = s->unk_0x20;
                        s->unk_0x26 = s->unk_0x25;
                        s->unk_0x4 = s->unk_0x0;
                        s->unk_0x1E = s->unk_0x1C;
                        s->unk_0x1A = s->unk_0x18;
                    }
                    D_800944B8[D_80078C9C].unk_0x29C = D_800944B8[D_80078C9C].unk_0x298;
                } else {
                    arg0->unk_0x22 = 0x7F;
                    arg0->unk_0x4 = arg0->unk_0x0;
                }
            } else if (val == 0x1E) {
                if (arg0->unk_0x22 != 0) {
                    if (arg0->unk_0x22 < 0x7F) {
                        arg0->unk_0x22--;
                    }
                    if (D_800944B8[D_80078C9C].unk_0x2A0 != 0) {
                        for (i = 0; i < D_800944B8[D_80078C9C].unk_0x2A2; i++) {
                            s = (Unk_800944B8Stream *)&D_800944B8[D_80078C9C].unk_0x0[i];
                            s->unk_0x20 = s->unk_0x21;
                            s->unk_0x25 = s->unk_0x26;
                            s->unk_0x0 = s->unk_0x4;
                            s->unk_0x1C = s->unk_0x1E;
                            s->unk_0x18 = s->unk_0x1A;
                        }
                        D_800944B8[D_80078C9C].unk_0x298 = D_800944B8[D_80078C9C].unk_0x29C;
                    } else {
                        arg0->unk_0x0 = arg0->unk_0x4;
                    }
                }
            }
        }
        if (note == 6 && D_800937D0[channel][0x24] == 0x14) {
            if (D_800944B8[D_80078C9C].unk_0x2A0 != 0) {
                for (i = 0; i < D_800944B8[D_80078C9C].unk_0x2A2; i++) {
                    D_800944B8[D_80078C9C].unk_0x0[i].unk_0x21[1] = val;
                }
            } else {
                arg0->unk_0x22 = val;
                return;
            }
        }
        func_80039E60(channel, note, val);
        break;
    case 0xE0:
        func_8003A5C8(channel, note, val);
        break;
    case 0xC0:
        func_8003A594(channel, note);
        break;
    case 0xD0:
        func_8003A5C0(channel, note);
        break;
    }
}

