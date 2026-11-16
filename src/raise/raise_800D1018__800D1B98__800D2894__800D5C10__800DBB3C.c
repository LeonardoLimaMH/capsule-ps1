#include "common.h"

/* registro de 0x79C bytes; o campo 0x798 é lido como palavra ou como byte */
typedef struct {
    u8 _p0[0x2BC];
    s32 unk_2BC;
    u8 _p2C0[0x64];
    s16 unk_324;
    u16 unk_326;
    s16 unk_328;
    u8 _p32A[0x1A];
    s16 unk_344;
    u8 _p346[0x452];
    union {
        u32 w;
        u8 b;
    } f_798;
} S_80100F38;

typedef struct {
    u8 pad_0[0x10];
    u16 unk_10;
    u8 pad_12[0x7E];
    u16 unk_90;
    u8 pad_92[0x116];
} Slot_80091618;
extern S_80100F38 D_80100F38[];

typedef struct {
    u8 pad[0x8B];
    u8 grid[2][8][8];
} S_800EFF58;

typedef struct {
    u8 _p0[0x64];
    s32 f_64;
    s32 f_68;
    s32 f_6C;
    s32 f_70;
} Struct_80069E4C;

typedef struct {
    u8 _p0[0x54];
    s32 f_54;
    u8 _p58[0xE0 - 0x58];
    s32 f_E0;
} Struct_80069AD4;

typedef struct { u8 pad[0x386]; s16 field; u8 tail[0x414]; } Record_800D2894;

extern void func_800D0730(s16 *, s32, s32, s32);
extern s32 func_800D6A2C(s32, s32, s32, s32, s32, s32);

extern s32 D_80069B28[];
extern u8 D_80091618[], D_800EF524[], D_800900C0[];
extern void func_800D8A20(void);

s32 func_800DBB3C(s16 id);

extern s32 func_800B1260(s32);

#define PL(a) ((u8 *)D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s32 D_800F1DA4[];
extern u8 *D_800F1DA8[];
extern u8 *func_800D9030(void);


/* rand-u16: 0x8006AF90 1 0,1,2,3 */
extern u8 D_80091618[];
extern u16 D_8006AF90[];
extern s32 D_800EEB64[];
extern s32 func_800B1260(s32);
extern void func_800D1CC4(s32, s32, s32, s32);


extern u8 D_80091618[];
extern s32 D_800EEB6C[];
extern s32 func_800B1260(s32);
extern void func_800D4B7C(s32, s32), func_800D1CC4(s32, s32, s32, s32);
extern s32 func_800D0CFC(s32);


/* stub-ret: mixed */
extern s32 func_800B1260(s32);

#define PL(a) ((u8 *)&D_80100F38[func_800B1260(a) & 0xFFFF])
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s16 D_800F0738[];
extern s32 func_800CE128(s32), func_800B12D8(s32);
extern void func_800CE4B8(s32, s32, s32, s32), func_800D8E90(s32);

#define Q798(a) (D_80100F38[func_800B12D8(a) & 0xFFFF].f_798.w)


/* stub-ret: mixed */
extern s32 func_800B1260(s32);

#define PL(a) ((u8 *)&D_80100F38[func_800B1260(a) & 0xFFFF])
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s16 D_800F0738[];
extern s32 func_800CE128(s32), func_800B12D8(s32);
extern void func_800CE4B8(s32, s32, s32, s32), func_800D8E90(s32);

#define Q798(a) ((q = &D_80100F38[func_800B12D8(a) & 0xFFFF])->f_798.w)


/* stub-ret: mixed */
extern s32 func_800B1260(s32);

#define PL(a) ((u8 *)&D_80100F38[func_800B1260(a) & 0xFFFF])
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s16 D_800F0738[];
extern s32 func_800CE128(s32), func_800B12D8(s32);
extern void func_800CE4B8(s32, s32, s32, s32), func_800D8E90(s32);

#define Q798(a) ((q = &D_80100F38[func_800B12D8(a) & 0xFFFF])->f_798.b)

s32 func_800DBB3C(s16 arg0) {
    extern u8 D_80091618[];
    u8 *src = D_80091618;

    switch (*(u16 *)(src + arg0 * 0x1A8)) {
    case 1:
    case 2:
    case 6:
    case 7:
    case 0x14:
    case 0x15:
    case 0x1B:
    case 0x1C:
    case 0x24:
    case 0x28:
    case 0x2B:
    case 0x2D:
    case 0x2E:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x38:
    case 0x3A:
    case 0x3B:
    case 0x3D:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x52:
    case 0x5D:
    case 0x61:
    case 0x62:
        return 1;
    case 3:
    case 5:
    case 0x33:
    case 0x36:
    case 0x3F:
    case 0x57:
    case 0x5B:
    case 0x5E:
        return 2;
    case 0x1D:
    case 0x5C:
        return 3;
    case 0x40:
    case 0x65:
        return 4;
    case 0:
    case 0xD:
    case 0x1A:
    case 0x25:
    case 0x56:
        return 5;
    case 0x19:
        return 6;
    case 0x2A:
    case 0x2F:
        return 7;
    case 0x44:
    case 0x45:
    case 0x5A:
        return 8;
    case 0x13:
    case 0x51:
    case 0x53:
        return 9;
    case 4:
        return 10;
    case 0x21:
        return 11;
    case 0x37:
        return 12;
    case 0x4C:
    case 0x4D:
        return 13;
    case 0xF:
    case 0x11:
        return 14;
    case 100:
        return 15;
    case 0xB:
        return 16;
    case 0x22:
        return 17;
    case 0x39:
        return 18;
    case 0xC:
        return 19;
    case 0x26:
        return 20;
    case 0x58:
        return 21;
    case 9:
        return 22;
    case 0x60:
        return 23;
    case 10:
        return 24;
    case 0x23:
    case 0x35:
    case 0x42:
    case 0x5F:
        return 25;
    case 0x55:
        return 26;
    case 0x50:
        return 27;
    case 0xE:
        return 28;
    case 0x17:
    case 0x59:
        return 29;
    case 0x4E:
        return 30;
    case 0x66:
    default:
        return 0;
    }
}

