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
    u8 _p346[0x40];
    s16 unk_386;
    u8 _p388[0x410];
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
    u8 pad_92[0xFA];
    s32 unk_18C;
    u8 pad_190[0x18];
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

s32 func_800D4860(s32 arg0) {
    extern u16 D_8006AF80[];
    extern s16 D_80078C26[];
    extern s16 D_80078C28[];
    extern s32 D_80078C34[];
    extern s32 D_80078C38[];
    extern Slot_80091618 D_80091618[];
    extern s32 D_800EEBA8[];
    extern u16 D_800EF2D8[];
    extern u8 D_800F1D14[];
    extern s32 func_800B1260(s32);
    extern void func_800D4404(s32, s32);
    extern void func_800CD288(s32, s32);
    extern void func_800C60E0(s32, s32);
    extern void func_800C62A4(s32, s32);
    extern void func_800C5EFC(s32, s32);
    extern void func_800B4C40(s32);
    extern void func_800B53D4(s32, s32);
    extern void func_800B9F50(s32);
    extern void SpuInitHot(void);
    extern void raise_SpuInit(void);
    extern void func_800A1F44(s32, s32, s32);
    extern void func_800E11A0(s32, s32);
    extern void func_800B6FA0(void);
    extern void func_80024990(s32, s32, s32, s32);
    extern void func_800282A0(s32);
    s32 idx;

    if (*D_80078C28 != 0) {
        return 0;
    }
    if (*(u16 *)(D_800F1D14 + 2) != 0) {
        *(u16 *)(D_800F1D14 + 2) -= 1;
        return 0;
    }
    *(u16 *)(D_800F1D14 + 2) = 0x10;
    idx = *D_800EF2D8;
    *D_8006AF80 = idx;
    switch (arg0) {
        case 0:
            func_800D4404(D_80091618[idx].unk_10, 1);
            func_800CD288(1, 1);
            func_800C60E0(1, 1);
            func_800C62A4(1, 1);
            func_800C5EFC(1, 1);
            func_800B4C40(idx);
            func_800B53D4(1, idx);
            func_800B9F50(1);
            SpuInitHot();
            func_800A1F44(1, 0, 0);
            func_800E11A0(1, idx);
            D_80100F38[idx].unk_386 = 0;
            break;
        case 1: {
            s32 i = 1;
            do {
                s32 ret = func_800B1260(i);
                u16 id = ret;
                if (id != 0xFFFF) {
                    func_800D4404(D_80091618[id].unk_10, i);
                    func_800CD288(i, 1);
                    func_800B4C40(id);
                    func_800B53D4(i, id);
                    func_800C60E0(i, 1);
                    func_800C62A4(i, 1);
                    func_800C5EFC(i, 1);
                    func_800B9F50((u16)i);
                    if (i == 1) {
                        SpuInitHot();
                    } else {
                        raise_SpuInit();
                    }
                    func_800A1F44(i, 0, 0);
                    id = ret;
                    func_800E11A0(i, id);
                    D_80100F38[id].unk_386 = 0;
                }
                i--;
            } while (i >= 0);
            break;
        }
    }
    func_800B6FA0();
    func_80024990(D_80091618[*D_8006AF80].unk_18C, 1, 0x32, (*D_80078C26 == 3) ? 0xA : 0xC);
    *D_800EEBA8 = 0;
    if (*D_80078C34 == 0x7006) {
        func_800282A0(*D_80078C38);
    }
    return 1;
}

