/* stub-ret: mixed */
#include "common.h"

typedef struct { s16 x, y, z, pad; } SV;
typedef struct {
    u32 id;
    u8 c[4][4];
    u16 tpage, clut;
    u8 uv[8];
    SV n[4], v[4];
    SV *v_ofs, *n_ofs;
    u16 vert[4], norm[4];
} Prim;
typedef struct { u32 w[6]; } B18;
typedef struct { u32 w[10]; } B28;
typedef struct { u32 w[8]; } B20;
typedef struct { u32 w[7]; } B1C;
typedef struct { u32 w[9]; } B24;
typedef struct { u32 w[13]; } B34;

extern u16 D_8008EE5A;
extern s32 D_80069EA4;
extern s32 D_80069EA8;
extern SV D_800921A0[];
extern SV D_800921B8;
extern s32 func_80019F30(s32);
extern void func_8002B964(u8 *, s32);
extern s32 OpenTMD(s32, s32);
extern s32 ReadTMD(Prim *);
extern void func_8002C490(void *, SV *, s32, u16);
extern void func_8002C438(void *, SV *, s32, u16);
extern void SetPolyF4(u8 *), SetPolyFT4(u8 *), SetPolyFT3(u8 *), SetPolyG3(u8 *), SetPolyG4(u8 *), SetPolyGT4(u8 *);
extern void func_8002BD08(u8 *, s16 *, Prim *), func_8002BD94(u8 *, s16 *, Prim *), func_8002BE20(u8 *, s16 *, Prim *);
extern void func_8002BEAC(u8 *, s16 *, Prim *), func_8002C000(u8 *, s16 *, Prim *), func_8002C214(u8 *, s16 *, Prim *);
extern u16 GetClut(s32, s32);

#define TYPE (*(s32 *)(a2 + 8))
#define FT4 pp[0]
#define FT3 pp[2]
#define G3 pp[4]
#define F4 pp[6]
#define GT4 pp[8]
#define G4 pp[10]

s32 func_8002858C(s32 a0, s32 a1, u8 *a2, s32 a3, s32 a4) {
    u8 *pp[12];
    Prim pr;
    s32 cnt;
    u32 k;
    s32 i, j;
    s16 *s1, *s2;
    SV *vo, *no;
    u32 sel;
    s32 h;

    __asm__("" : : "r"(&a1), "r"(&cnt));
    sel = D_8008EE5A;
    h = func_80019F30(a0 | 0xF0000);
    if (h == 0) return 0;
    *(s32 *)(a2 + 4) = a4;
    TYPE = D_80069EA4;
    func_8002B964(a2, a4);
    switch ((u32)TYPE) {
    case 0: k = 6; break;
    case 1: k = 0; break;
    case 2: k = 10; break;
    default: k = 8; break;
    case 4: k = 2; break;
    case 5: k = 4; break;
    }
    if (!a3) {
        pp[k] = *(u8 **)(a2 + 0xA4);
        pp[k + 1] = *(u8 **)(a2 + 0xA8);
    } else {
        pp[k] = *(u8 **)(a2 + 0xA4 + sel * 4);
    }
    s2 = *(s16 **)(a2 + 0xA0);
    cnt = OpenTMD(h, 0);
    i = 0;
    if (cnt > 0) {
        do {
            if (ReadTMD(&pr) == 0) break;
            D_80069EA8 = ((pr.id >> 27) ^ 1) & 1;
            if (D_80069EA8 && TYPE < 4) pr.id |= 0x8000000;
            vo = pr.v_ofs;
            no = pr.n_ofs;
            switch ((u32)TYPE) {
            case 0:
            case 1:
            case 4:
                func_8002C490(&D_800921A0[0], no, 0, pr.norm[0]);
                func_8002C490(&D_800921A0[1], no, 0, pr.norm[1]);
                func_8002C490(&D_800921A0[2], no, 0, pr.norm[2]);
                s1 = s2;
                if (TYPE == 4) {
                    for (j = 1; j < 3; j++) {
                        D_800921A0[0].x += D_800921A0[j].x;
                        D_800921A0[0].y += D_800921A0[j].y;
                        D_800921A0[0].z += D_800921A0[j].z;
                    }
                    D_800921A0[0].x = D_800921A0[0].x / 3;
                    D_800921A0[0].y = D_800921A0[0].y / 3;
                    D_800921A0[0].z = D_800921A0[0].z / 3;
                } else {
                    func_8002C490(&D_800921B8, no, 0, D_80069EA8 ? pr.norm[0] : pr.norm[3]);
                    for (j = 1; j < 4; j++) {
                        D_800921A0[0].x += D_800921A0[j].x;
                        D_800921A0[0].y += D_800921A0[j].y;
                        D_800921A0[0].z += D_800921A0[j].z;
                    }
                    D_800921A0[0].x = D_800921A0[0].x >> 2;
                    D_800921A0[0].y = D_800921A0[0].y >> 2;
                    D_800921A0[0].z = D_800921A0[0].z >> 2;
                }
                s1[0] = D_800921A0[0].x;
                s1[1] = D_800921A0[0].y;
                s1[2] = D_800921A0[0].z;
                func_8002C438(s1 + 4, vo, 0, pr.vert[0]);
                func_8002C438(s1 + 8, vo, 0, pr.vert[1]);
                func_8002C438(s1 + 12, vo, 0, pr.vert[2]);
                if (TYPE != 4)
                    func_8002C438(s1 + 16, vo, 0, D_80069EA8 ? pr.vert[0] : pr.vert[3]);
                break;
            case 5:
                func_8002C490(s2, no, 0, pr.norm[0]);
                func_8002C438(s2 + 12, vo, 0, pr.vert[0]);
                func_8002C490(s2 + 4, no, 0, pr.norm[1]);
                func_8002C438(s2 + 16, vo, 0, pr.vert[1]);
                func_8002C490(s2 + 8, no, 0, pr.norm[2]);
                func_8002C438(s2 + 20, vo, 0, pr.vert[2]);
                break;
            case 2:
            case 3:
                func_8002C490(s2, no, 0, pr.norm[0]);
                func_8002C438(s2 + 16, vo, 0, pr.vert[0]);
                func_8002C490(s2 + 4, no, 0, pr.norm[1]);
                func_8002C438(s2 + 20, vo, 0, pr.vert[1]);
                func_8002C490(s2 + 8, no, 0, pr.norm[2]);
                func_8002C438(s2 + 24, vo, 0, pr.vert[2]);
                s1 = s2;
                func_8002C490(s2 + 12, no, 0, D_80069EA8 ? pr.norm[0] : pr.norm[3]);
                func_8002C438(s1 + 28, vo, 0, D_80069EA8 ? pr.vert[0] : pr.vert[3]);
                break;
            default:
                goto next;
            }
            switch ((u32)TYPE) {
            case 0:
                SetPolyF4(F4);
                func_8002BD08(F4, s2, &pr);
                if (!a3) *(B18 *)pp[7] = *(B18 *)F4;
                s2 += 0x2C / 2;
                F4 += 0x18; pp[7] += 0x18;
                break;
            case 1:
                SetPolyFT4(FT4);
                FT4[0xC] = pr.uv[0]; FT4[0xD] = pr.uv[1];
                FT4[0x14] = pr.uv[2]; FT4[0x15] = pr.uv[3];
                FT4[0x1C] = pr.uv[4]; FT4[0x1D] = pr.uv[5];
                FT4[0x24] = D_80069EA8 ? pr.uv[0] : pr.uv[6];
                FT4[0x25] = D_80069EA8 ? pr.uv[1] : pr.uv[7];
                *(u16 *)(FT4 + 0x16) = pr.tpage;
                *(u16 *)(FT4 + 0xE) = pr.clut;
                func_8002BD94(FT4, s2, &pr);
                if (!a3) *(B28 *)pp[1] = *(B28 *)FT4;
                s2 += 0x2C / 2;
                FT4 += 0x28; pp[1] += 0x28;
                break;
            case 4:
                SetPolyFT3(FT3);
                FT3[0xC] = pr.uv[0]; FT3[0xD] = pr.uv[1];
                FT3[0x14] = pr.uv[2]; FT3[0x15] = pr.uv[3];
                FT3[0x1C] = pr.uv[4]; FT3[0x1D] = pr.uv[5];
                *(u16 *)(FT3 + 0x16) = pr.tpage;
                *(u16 *)(FT3 + 0xE) = pr.clut;
                func_8002BE20(FT3, s2, &pr);
                if (!a3) *(B20 *)pp[3] = *(B20 *)FT3;
                s2 += 0x24 / 2;
                FT3 += 0x20; pp[3] += 0x20;
                break;
            case 5:
                SetPolyG3(G3);
                func_8002BEAC(G3, s2, &pr);
                if (!a3) *(B1C *)pp[5] = *(B1C *)G3;
                s2 += 0x3C / 2;
                G3 += 0x1C; pp[5] += 0x1C;
                break;
            case 2:
                SetPolyG4(G4);
                func_8002C000(G4, s2, &pr);
                if (!a3) *(B24 *)pp[11] = *(B24 *)G4;
                s2 += 0x50 / 2;
                G4 += 0x24; pp[11] += 0x24;
                break;
            case 3:
                SetPolyGT4(GT4);
                GT4[0xC] = pr.uv[0]; GT4[0xD] = pr.uv[1];
                GT4[0x18] = pr.uv[2]; GT4[0x19] = pr.uv[3];
                GT4[0x24] = pr.uv[4]; GT4[0x25] = pr.uv[5];
                GT4[0x30] = D_80069EA8 ? pr.uv[0] : pr.uv[6];
                GT4[0x31] = D_80069EA8 ? pr.uv[1] : pr.uv[7];
                *(u16 *)(GT4 + 0x1A) = pr.tpage;
                if (a4 == 2 || a4 == 5) {
                    switch (a1) {
                    case 4: *(u16 *)(GT4 + 0xE) = GetClut(0x130, 0x1F8); break;
                    case 7: *(u16 *)(GT4 + 0xE) = GetClut(0x130, 0x1F9); break;
                    case 10: *(u16 *)(GT4 + 0xE) = GetClut(0x130, 0x1FA); break;
                    }
                } else {
                    *(u16 *)(GT4 + 0xE) = pr.clut;
                }
                func_8002C214(GT4, s2, &pr);
                if (!a3) *(B34 *)pp[9] = *(B34 *)GT4;
                s2 += 0x50 / 2;
                GT4 += 0x34; pp[9] += 0x34;
                break;
            }
        next:
            i++;
        } while (i < cnt);
    }
    *(s32 *)(a2 + 0xC) = i;
    return i;
}
