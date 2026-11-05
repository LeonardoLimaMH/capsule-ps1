#include "common.h"

typedef struct {
    u16 f_0;
    u8 _p2[0xE];
    u16 f_10;
    u8 _p12[0x78];
    u16 f_8A;
    u8 _p8C[0x100];
    s32 f_18C;
    u8 _p190[0x18];
} S_80091618;
extern S_80091618 D_80091618[];






void func_800E1B30(void) {
    extern s16 D_80078C20[];
    (*D_80078C20) = (*D_80078C20) == 0;
}

#include "common.h"
extern u8 D_800F2D30[];
extern u16 D_8006AF80[];
extern s32 func_800A8CB4(s32), func_800A0E6C(s32);
extern void func_8001A464(s32, s32), func_80019F30(s32, void *);
extern s32 func_80012508(void);
s32 func_800E1B48(void)
{
  u16 new_var;
  u16 j = D_80091618[*D_8006AF80].f_8A;
  s32 (*new_var2)(void);
  u16 c = D_80091618[j].f_0;
  s32 a;
  s32 b;
  new_var = c;
  if (D_800F2D30[new_var] != 0xFF)
  {
    if (D_80091618[j].f_0 || func_80012508)
    {
      return 1;
    }
    else
    {
      return 1;
    }
  }
  a = func_800A8CB4(new_var);
  b = func_800A0E6C(new_var);
  func_8001A464(a, b);
  new_var2 = func_80012508;
  func_80019F30(a, new_var2);
  return 0;
}

#include "common.h"

/* rand-u16: 0x8006AF80 1 0,1,2,3 */
/* rand-u16: 0x800916A2 1 0,1,2,3 */
/* rand-u16: 0x8009184A 1 0,1,2,3 */
/* rand-u16: 0x800919F2 1 0,1,2,3 */
/* rand-u16: 0x80091B9A 1 0,1,2,3 */
typedef struct { u8 _p0[0x386]; u16 f_386; u8 _p388[0x414]; } S_80100F38;
extern S_80100F38 D_80100F38[];
extern u8 D_800F2D30[];
extern u16 D_8006AF80[];
extern s32 func_800A0E6C(s32);
extern void func_8001A49C(s32), func_800E2AA0(s32, s32, s32), func_800CD288(s32, s32), func_800B9F50(s32);
extern void raise_SpuInit(void), func_800A1F44(s32, s32, s32), func_800C60E0(s32, s32), func_800C62A4(s32, s32);
extern void func_800C5EFC(s32, s32), func_800E11A0(s32, s32);



s32 func_800E1C14(void) {
    u16 j = D_80091618[*D_8006AF80].f_8A;
    u16 c = D_80091618[j].f_0;
    if (D_800F2D30[c] == 0xFF) func_8001A49C(func_800A0E6C(c));
    j = D_80091618[*D_8006AF80].f_8A;
    func_800E2AA0(D_80091618[j].f_10, 0, 0);
    func_800CD288(0, 1);
    func_800B9F50(0);
    raise_SpuInit();
    func_800A1F44(0, 0, 0);
    func_800C60E0(0, 1);
    func_800C62A4(0, 1);
    func_800C5EFC(0, 1);
    func_800E11A0(0, j);
    D_80100F38[j].f_386 = 0;
    return 1;
}

extern s32 D_800EF2D8[];
s32 func_800E1DAC(void) {
    u16 c = D_80091618[*D_800EF2D8].f_0;
    s32 a;
    s32 b;
    s32 r;

    if (D_800F2D30[c] != 0xFF) {
        r = 1;
    } else {
        a = func_800A8CB4(c);
        b = func_800A0E6C(c);
        func_8001A464(a, b);
        func_80019F30(a, func_80012508);
        r = 0;
    }
    return r;
}

#include "common.h"


s32 func_800E1E50(void) {
    extern u16 D_8006AF80[];
    extern s16 D_80078C20[];
    extern s16 D_80078C26[];
    extern s16 D_80078C28[];
    extern s32 D_80078C34[];
    extern s32 D_80078C38[];
    extern M2C_UNK D_800EEB9C[];
    extern u16 D_800F1F54[];
    M2C_UNK var_a3;
    u16 temp_v1;
    u16 temp_a0;

    if ((*D_80078C28) != 0) {
        return 0;
    }
    temp_v1 = (*D_800F1F54) & 0xFFFF;
    if (temp_v1 != 0) {
        if (temp_v1 == 4) {
            (*D_80078C20) = (*D_80078C20) == 0;
        }
        (*D_800F1F54) -= 1;
        return 0;
    }
    (*D_800F1F54) = 8;
    (*D_8006AF80) = M2C_GFIELD(D_800EEB9C, u16, 0x73C);
    temp_a0 = D_80091618[(*D_8006AF80)].f_0;
    if (*(u8 *)(temp_a0 + (u8 *)D_800F2D30) == 0xFF) {
        func_8001A49C(func_800A0E6C(temp_a0));
    }
    func_800E2AA0(D_80091618[(*D_8006AF80)].f_10, 1, 0);
    func_800CD288(1, 1);
    func_80024990(D_80091618[(*D_8006AF80)].f_18C, 1, 0x32, ((*D_80078C26) == 3) ? 6 : 8);
    M2C_GFIELD(D_800EEB9C, s32, 0xC) = 0;
    func_800B9F50(1);
    SpuInitHot();
    func_800A1F44(1, 1, 0);
    func_800C60E0(1, 1);
    func_800C62A4(1, 1);
    func_800C5EFC(1, 1);
    func_800B4C40((*D_8006AF80));
    func_800B6FA0();
    func_800B53D4(1, (*D_8006AF80));
    func_800E11A0(1, (*D_8006AF80));
    D_80100F38[(*D_8006AF80)].f_386 = 0;
    if ((*D_80078C34) == 0x7006) {
        func_800282A0((*D_80078C38));
    }
    return 1;
}
