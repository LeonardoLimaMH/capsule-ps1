#include "common.h"
#include "yuugi.h"

void func_80012324(void) {

}

extern u8 D_8008ED68[];
void func_80012394(void);

u8 *func_8001232C(void)
{
  u8 *new_var2;
  struct 
  {
    u8 _p[0xE6];
    s16 v;
  } *new_var;
  new_var2 = (u8 *) func_80012394;
  func_80013668();
  new_var = (struct 
  {
    u8 _p[0xE6];
    s16 v;
  } *) D_8008ED68;
  *((void **) (D_8008ED68 + 0xCC)) = (void *) new_var2;
  ((struct 
  {
    u8 _p[0xC8];
    s32 v;
  } *) D_8008ED68)->v = 0;
  ((struct 
  {
    u8 _p[0xDC];
    s16 v;
  } *) D_8008ED68)->v = 0;
  ((struct 
  {
    u8 _p[0xE0];
    s16 v;
  } *) D_8008ED68)->v = 0;
  ((struct 
  {
    u8 _p[0xDE];
    s16 v;
  } *) D_8008ED68)->v = 0;
  ((struct 
  {
    u8 _p[0xE2];
    s16 v;
  } *) D_8008ED68)->v = 0;
  ((struct 
  {
    u8 _p[0xE4];
    s16 v;
  } *) D_8008ED68)->v = 0;
  new_var->v = 0;
  ((struct 
  {
    u8 _p[0xE8];
    s16 v;
  } *) D_8008ED68)->v = 0;
  ((struct 
  {
    u8 _p[0xEA];
    s16 v;
  } *) D_8008ED68)->v = 0;
  ((struct 
  {
    u8 _p[0xEC];
    s16 v;
  } *) D_8008ED68)->v = 0;
  ((struct 
  {
    u8 _p[0xEE];
    s16 v;
  } *) D_8008ED68)->v = 0;
  ((struct 
  {
    u8 _p[0xF8];
    s32 v;
  } *) D_8008ED68)->v = 0;
  return D_8008ED68;
}

#include "ghidra.h"
void func_80012394(void)

{
    extern M2C_UNK D_800508C0[];
    extern u16 D_8008EE48[];
  (*(code *)(D_800508C0)[(*D_8008EE48)])();
  return;
}

void func_800123D4(void) {
    extern u16 D_8008EE4C[];
    extern int func_80011ED4();
    switch ((*D_8008EE4C)) {                           /* irregular */
    case 0:
        func_800125D8();
        return;
    case 1:
        func_80019F30(1, &func_80011ED4);
        func_80012578();
        return;
    }
}

void func_80012430(void) {

}

void func_80012438(void) {
    extern u16 D_8008EE4C[];
    switch ((*D_8008EE4C)) {                           /* irregular */
    case 0:
        func_8002009C(0);
        func_800125D8();
        return;
    case 1:
        if (func_80019654() != 0) {
            func_80012578();
        }
        return;
    }
}

void func_80012394(void);

extern u8 D_80099C08[];
void func_80013668(void);
u8 *func_800124A0(void)
{
  u8 *new_var2;
  struct 
  {
    u8 _p[0xE6];
    s16 v;
  } *new_var;
  new_var2 = (u8 *) D_80099C08;
  func_80013668();
  new_var = (struct 
  {
    u8 _p[0xE6];
    s16 v;
  } *) D_8008ED68;
  *((void **) (D_8008ED68 + 0xCC)) = (void *) new_var2;
  ((struct 
  {
    u8 _p[0xC8];
    s32 v;
  } *) D_8008ED68)->v = 0;
  ((struct 
  {
    u8 _p[0xDC];
    s16 v;
  } *) D_8008ED68)->v = 0;
  ((struct 
  {
    u8 _p[0xE0];
    s16 v;
  } *) D_8008ED68)->v = 0;
  ((struct 
  {
    u8 _p[0xDE];
    s16 v;
  } *) D_8008ED68)->v = 0;
  ((struct 
  {
    u8 _p[0xE2];
    s16 v;
  } *) D_8008ED68)->v = 0;
  ((struct 
  {
    u8 _p[0xE4];
    s16 v;
  } *) D_8008ED68)->v = 0;
  new_var->v = 0;
  ((struct 
  {
    u8 _p[0xE8];
    s16 v;
  } *) D_8008ED68)->v = 0;
  ((struct 
  {
    u8 _p[0xEA];
    s16 v;
  } *) D_8008ED68)->v = 0;
  ((struct 
  {
    u8 _p[0xEC];
    s16 v;
  } *) D_8008ED68)->v = 0;
  ((struct 
  {
    u8 _p[0xEE];
    s16 v;
  } *) D_8008ED68)->v = 0;
  ((struct 
  {
    u8 _p[0xF8];
    s32 v;
  } *) D_8008ED68)->v = 0;
  return D_8008ED68;
}

typedef struct {
    u8 pad[0xEC];
    s16 a;
    s16 b;
} Rec_8008ED68;

extern u8 D_8008ED50[];
extern u16 D_800508D0[];

u8 *func_80012508(void) {
    u16 v = M2C_GFIELD(D_8008ED68, u16, 0xDC);

    M2C_GFIELD(D_8008ED68, s16, 0xE0) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xDE) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xE2) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xE4) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xE6) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xE8) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xEA) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xEC) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xEE) = 0;
    M2C_GFIELD(D_8008ED68, u16, 0xDC) = v + 1;
    return D_8008ED68;
}

u8 *func_80012544(s16 value) {
    M2C_GFIELD(D_8008ED68, s16, 0xDC) = value;
    M2C_GFIELD(D_8008ED68, s16, 0xE0) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xDE) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xE2) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xE4) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xE6) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xE8) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xEA) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xEC) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xEE) = 0;
    return D_8008ED68;
}

u8 *func_80012578(void) {
    u16 v = M2C_GFIELD(D_8008ED68, u16, 0xE0);

    M2C_GFIELD(D_8008ED68, s16, 0xE2) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xE4) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xE6) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xE8) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xEA) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xEC) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xEE) = 0;
    M2C_GFIELD(D_8008ED68, u16, 0xE0) = v + 1;
    return D_8008ED68;
}

u8 *func_800125AC(s16 value) {
    M2C_GFIELD(D_8008ED68, s16, 0xE0) = value;
    M2C_GFIELD(D_8008ED68, s16, 0xE2) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xE4) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xE6) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xE8) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xEA) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xEC) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xEE) = 0;
    return D_8008ED68;
}

u8 *func_800125D8(void) {
    u16 v = M2C_GFIELD(D_8008ED68, u16, 0xE4);

    M2C_GFIELD(D_8008ED68, s16, 0xE6) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xE8) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xEA) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xEC) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xEE) = 0;
    M2C_GFIELD(D_8008ED68, u16, 0xE4) = v + 1;
    return D_8008ED68;
}

void func_80012604(s16 value) {
    M2C_GFIELD(D_8008ED68, s16, 0xE4) = value;
    M2C_GFIELD(D_8008ED68, s16, 0xE6) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xE8) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xEA) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xEC) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xEE) = 0;
}

u8 *func_80012628(void) {
    u16 v = M2C_GFIELD(D_8008ED68, u16, 0xE8);

    M2C_GFIELD(D_8008ED68, s16, 0xEA) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xEC) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xEE) = 0;
    M2C_GFIELD(D_8008ED68, u16, 0xE8) = v + 1;
    return D_8008ED68;
}

void func_8001264C(s16 value) {
    M2C_GFIELD(D_8008ED68, s16, 0xE8) = value;
    M2C_GFIELD(D_8008ED68, s16, 0xEA) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xEC) = 0;
    M2C_GFIELD(D_8008ED68, s16, 0xEE) = 0;
}

void func_80012668(void) {
    extern u8 D_8008ED68[];
    M2C_GFIELD(D_8008ED68, s16, 0xEE) = 0;
    M2C_GFIELD(D_8008ED68, u16, 0xEC) = (u16) (M2C_GFIELD(D_8008ED68, u16, 0xEC) + 1);
}

void func_80012684(s16 value) {
    extern u8 D_8008ED68[];
    Rec_8008ED68 *p = (Rec_8008ED68 *)D_8008ED68;
    p->a = value;
    p->b = 0;
}

void func_80012698(void) {
    extern u8 D_8008ED50[];
    extern u16 D_800508D0[];
    extern void func_80012264(void);
    u8 *p = D_8008ED50;
    *(void **)(p + 0x14) = (void *)func_80012264;
    *(u16 *)(p + 0xE) = 0;
    *(u16 *)D_8008ED50 = 1;
    func_800127AC(D_800508D0[0]);
    *(s16 *)(p + 0xC) = 0;
    *(s32 *)(p + 4) = **(s32 **)(p + 8);
}

void func_800126F8(void)
{
  u16 old = ((struct 
  {
    u8 _p[0xE];
    u16 v;
  } *) D_8008ED50)->v;
  ((struct 
  {
    u8 _p[0x10];
    u16 v;
  } *) D_8008ED50)->v = old;
  ((struct 
  {
    u8 _p[0xE];
    u16 v;
  } *) D_8008ED50)->v = ((struct 
  {
    u8 _p[0x12];
    u16 v;
  } *) D_8008ED50)->v;
  func_800127AC(D_800508D0[((struct 
  {
    u8 _p[0xE];
    u16 v;
  } *) D_8008ED50)->v]);
  ((struct 
  {
    u8 _p[0xC];
    s16 v;
  } *) D_8008ED50)->v = 0;
  ((struct 
  {
    u8 _p[4];
    s32 v;
  } *) D_8008ED50)->v = *(*((s32 **) (D_8008ED50 + 8)));
}

u8 *func_80012764(void) {
    M2C_GFIELD(D_8008ED50, s32, 4) = 0;
    M2C_GFIELD(D_8008ED50, s16, 0xC) = 0;
    return D_8008ED50;
}

s32 func_80012778(void) {
    s32 v;

    M2C_GFIELD(D_8008ED50, u16, 0xC) += 1;
    v = (*(s32 **)(D_8008ED50 + 8))[M2C_GFIELD(D_8008ED50, u16, 0xC)];
    M2C_GFIELD(D_8008ED50, s32, 4) = v;
    return v;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012324", func_800127AC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012324", func_800127F4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80012324", func_80012868);

void func_800129DC(void) {
    u8 *p = D_8008ED68;
    func_800131C0();
    VSync(p[0x103]);
}
