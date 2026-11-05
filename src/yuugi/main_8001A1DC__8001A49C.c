#include "common.h"
#include "ghidra.h"
#include "yuugi.h"

void func_8001A49C(int param_1)

{
  func_8001A684(param_1,param_1 + 0x50,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x54,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x58,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x5c,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x60,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 100,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x68,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x6c,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x70,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x74,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x78,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x7c,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x80,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x84,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x8c,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x94,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0x9c,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0xa4,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0xac,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0xb4,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0xbc,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0xc4,*(undefined4 *)(param_1 + 0x4c));
  func_8001A684(param_1,param_1 + 0xcc,*(undefined4 *)(param_1 + 0x4c));
  func_8001A704(param_1,param_1 + 0x5c,*(undefined4 *)(param_1 + 0x4c));
  func_8001A784(param_1,param_1 + 0x60,*(undefined4 *)(param_1 + 0x4c));
  func_8001A818(param_1,param_1 + 100,*(undefined4 *)(param_1 + 0x4c));
  *(int *)(param_1 + 0x4c) = param_1;
  return;
}

void func_8001A684(s32 arg0, s32 *arg1, s32 arg2) {
    s32 temp_v1;

    temp_v1 = *arg1;
    if (temp_v1 != 0) {
        *arg1 = temp_v1 + (arg0 - arg2);
        func_8001A6B8();
    }
}

void func_8001A6B8(s32 arg0, s32 **arg1, s32 arg2) {
    s32 *p = *arg1;
    register s32 v asm("v0") = -1;
    register s32 end asm("v1");
    s32 d;

void func_8001A704(s32 arg0, s32 ***arg1, s32 arg2) {
    register s32 i asm("t1");
    register s32 *q asm("t0");
    register u32 j asm("a3");
    register s32 *p asm("v1");
    register s32 end asm("t2");

    if (*arg1 != 0) {
        i = 0;
        end = -1;
        arg0 -= arg2;
        while (1) {
            q = (*arg1)[i];
            j = 0;
            if ((s32)q == end) break;
            q[1] += arg0;
            if (q[2] != 0) {
                p = q;
                do {
                    j++;
                    p[3] += arg0;
                    p++;
                } while (j < (u32)q[2]);
            }
            i++;
        }
    }
}

void func_8001A704(s32 arg0, s32 ***arg1, s32 arg2) {
    register s32 i asm("t1");
    register s32 *q asm("t0");
    register u32 j asm("a3");
    register s32 *p asm("v1");
    register s32 end asm("t2");

    if (*arg1 != 0) {
        i = 0;
        end = -1;
        arg0 -= arg2;
        while (1) {
            q = (*arg1)[i];
            j = 0;
            if ((s32)q == end) break;
            q[1] += arg0;
            if (q[2] != 0) {
                p = q;
                do {
                    j++;
                    p[3] += arg0;
                    p++;
                } while (j < (u32)q[2]);
            }
            i++;
        }
    }
}

void func_8001A784(s32 arg0, s32 ***arg1, s32 arg2) {
    s32 i = 0;
    s32 *q;
    register u32 j;
    register s32 d;
    register s32 off asm("t0");
    register s32 *x;
    register s32 *end asm("t3");
    if (*arg1 != 0) {
        end = (s32 *)-1;
        d = arg0 - arg2;
        while (1) {
            q = (*arg1)[i];
            j = 0;
            if (q == end) break;
            q[2] += d;
            if ((u32)q[0] != 0) {
                off = j;
                do {
                    x = (s32 *)(q[2] + off);
                    j++;
                    x[1] += d;
                    x[2] += d;
                    off += 0x24;
                } while (j < (u32)q[0]);
            }
            i++;
        }
    }
}
