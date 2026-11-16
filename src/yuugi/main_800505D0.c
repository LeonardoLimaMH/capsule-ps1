#include "common.h"
#include "yuugi.h"

extern void *D_80096664[];
extern void *D_80096660[];
extern void *D_8009666C[];
extern void func_8004FEDC(void);
extern void func_8004FEEC(void);
extern void func_80050680(void);
extern void func_800506E8(void);
extern void func_8005077C(s32, void *);
extern void func_8005076C(s32, void *);

typedef struct {
    void *f1;
    void *f2;
} S80096664;

s32 func_800505D0(void)
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
  func_8004FEDC();
  D_80096664[0] = (void *) func_80050680;
  D_80096664[new_var7] = (void *) func_800506E8;
  new_var8 = &D_80096660;
  new_var3 = 0;
  new_var9 = new_var7;
  new_var2 = new_var8;
  new_var5 = D_80096664 - new_var9;
  p = new_var5;
  new_var6 = p;
  ((s32 *) (&D_8009666C))[new_var3] = (((s32 *) new_var2)[new_var3] = new_var3);
  func_8005077C(new_var7, new_var6);
  new_var6 = p;
  func_8005076C(new_var7, new_var6);
  new_var4 = 1;
  func_8004FEEC();
  new_var = new_var4;
  return new_var;
  new_var3 += 0;
}
