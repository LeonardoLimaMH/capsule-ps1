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
    u16 unk_12;
    u8 pad_14[0x7C];
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

void func_800D8E90(s32 arg0) {
    extern S_80100F38 D_80100F38[];
    extern u8 D_80091618[];
    extern s32 D_800EE9B8[];
    extern s32 func_800B1260(s32);
    extern void func_800DCC94(s32);
    extern void func_800D0730(s16 *, s32, s32, s32);
    u32 id = (u16)func_800B1260(arg0);
    u8 *p = (u8 *)D_80100F38 + id * 0x79C;
    u16 val326 = *(u16 *)(p + 0x326);
    u16 val336 = *(u16 *)(p + 0x336);
    u16 val338 = *(u16 *)(p + 0x338);
    u8 *slot_base;
    u8 *slot;
    register s32 temp_a1 asm("a1");
    *(u16 *)(p + 0x324) = val326;
    slot_base = D_80091618;
    *(u16 *)(p + 0x332) = val336;
    *(u16 *)(p + 0x32e) = val336;
    slot = slot_base + id * 0x1A8;
    *(u16 *)(p + 0x334) = val338;
    *(u16 *)(p + 0x330) = val338;
    *(s32 *)(slot + 0xa4) = *(s16 *)(p + 0x336);
    temp_a1 = *(s16 *)(p + 0x338);
    *(s32 *)(slot + 0xac) = 5;
    *(s32 *)(slot + 0xa8) = temp_a1;
    func_800DCC94(arg0);
    {
        register u32 copy asm("v0") = *(u16 *)(p + 0x32c);
        register u32 x asm("a1") = *(u16 *)(p + 0x336);
        register u32 y asm("a2") = *(u16 *)(p + 0x338);
        x = (x - 1) << 16;
        y = (y - 1) << 16;
        *(u16 *)(p + 0x32a) = copy;
        func_800D0730((s16 *)(p + 0x1cc), (s32)x >> 16, (s32)y >> 16, 0);
    }
    *(u16 *)(p + 0x1d4) = 0;
    *(u16 *)(p + 0x1d6) = 0;
    *(u16 *)(p + 0x1d8) = 0;
    D_800EE9B8[1 - arg0] = 0;
}

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

