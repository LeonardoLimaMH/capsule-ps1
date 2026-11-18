#include "common.h"

/* identical to func_800505D0 (matched), with its names changed by decomp.wtf */
extern void *D_801334F4[];
extern void *D_801334F0[];
extern void *D_801334FC[];
extern void func_80112014(void);
extern void func_80112024(void);
extern void func_80111F28(void);
extern void func_80111F90(void);
extern void func_80112044(s32, void *);
extern void func_80112034(s32, void *);

s32 func_80111E78(void)
{
  void *(*new_var8)[];
  int new_var4;
  void *(*new_var2)[];
  int new_var;
  void **new_var5;
  int new_var3;
  unsigned int new_var9;
  void **new_var6;
  unsigned int new_var7;
  void **p;
 do { new_var7 = 1; } while (0);
  func_80112014();
  D_801334F4[0] = (void *) func_80111F28;
  D_801334F4[new_var7] = (void *) func_80111F90;
  new_var8 = &D_801334F0;
  new_var3 = 0;
  new_var9 = new_var7;
  new_var2 = new_var8;
  new_var5 = D_801334F4 - new_var9;
  p = new_var5;
  new_var6 = p;
  ((s32 *) (&D_801334FC))[new_var3] = (((s32 *) new_var2)[new_var3] = new_var3);
  func_80112044(new_var7, new_var6);
  new_var6 = p;
  func_80112034(new_var7, new_var6);
  new_var4 = 1;
  func_80112024();
  new_var = new_var4;
  return new_var;
  new_var3 += 0;
}

