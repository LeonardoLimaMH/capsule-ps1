#include "common.h"

#include "common.h"

void func_800DEB38(void)
{
  extern M2C_UNK D_800F1EB4[];
  void *temp_v1;
  temp_v1 = (((struct 
  {
    u8 _p[0];
    s16 v;
  } *) D_800F1EB4)->v * 4) + ((u8 *) D_800F1EB4);
  ((struct 
  {
    u8 _p[0x1E];
    u16 v;
  } *) D_800F1EB4)->v = (u16) (*((u16 *) (((s8 *) temp_v1) + 6)));
  ((struct 
  {
    u8 _p[0x20];
    u16 v;
  } *) D_800F1EB4)->v = (u16) (*((u16 *) (((s8 *) temp_v1) + 8)));
  ((struct 
  {
    u8 _p[4];
    u16 v;
  } *) D_800F1EB4)->v = (u16) (((struct 
  {
    u8 _p[4];
    u16 v;
  } *) D_800F1EB4)->v - 1);
  ((struct 
  {
    u8 _p[0];
    s16 v;
  } *) D_800F1EB4)->v = (s16) ((((struct 
  {
    u8 _p[0];
    s16 v;
  } *) D_800F1EB4)->v + 1) % 5);
}

#include "common.h"
