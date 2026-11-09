#include "ghidra.h"
#include "common.h"
#include "ghidra.h"

void func_800B9248(undefined4 param_1,char *param_2)

{
  func_80034AB0(0x41);
  if (*param_2 == 'E') {
    param_2[0x17] = -0x78;
    param_2[0x23] = '\x01';
    *(undefined4 *)(*(int *)(param_2 + 0x70) + 0x88) = 0;
  }
  return;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800B9298);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800B9684);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800B97B4);

extern u16 D_8008EE50;
extern u8 D_8008EE6A;
extern s32 func_800B2ABC(u8 *a, s32 b, u8 *c, u8 *d);
extern void func_800125D8(void);
extern void func_80012628(void);
extern void func_800125AC(s32);
extern s32 func_800C7F74(u8 *a);
extern s32 func_800C7FDC(u8 *a, s32 b, s32 c, s32 d);
extern u8 func_800A835C(u8 *a, s32 b);
void func_800B98E8(u8 *p) {
    u8 *base = p + 0x5d0;
    s32 c = base[0x5fa];
    if (func_800B2ABC(p, 0, base + c * 0x2e8 + 0x18 + base[c + 0x5fb] * 0x7c,
                      base + (1 - c) * 0x2e8 + 0x18 + base[0x70c] * 0x7c)) {
        func_800125D8();
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800B9990);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800B9B88);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800B9E8C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800B9F9C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BA108);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BA274);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BA3C4);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BA4E0);

void func_800BA684(u8 *p) {
    u8 *base = p + 0x5d0;
    s32 s = 0;
    if (s < 0xb) {
        if (s == 0) {
            if (func_800C7F74(base)) goto done;
        } else {
            if (!func_800C7FDC(base, 0, (s - 1) / 5, (s - 1) % 5)) return;
            func_80012628();
            return;
        }
    } else {
        if (s != 0xb) return;
    }
done:
    func_800125D8();
}

void func_800BA744(u8 *p) {
    u8 *base = p + 0x5d0;
    s32 c = base[0x5fa];
    s32 o = base[0x70c];
    s32 i = base[c + 0x5fb];
    s32 n = 1 - c;
    base[0x614] = 0;
    base[c * 0x2e8 + 0x18 + i * 0x7c + 0x25] = func_800A835C(p, c);
    base[n * 0x2e8 + 0x18 + o * 0x7c + 0x25] = func_800A835C(p, n);
    func_800125AC(10);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BA820);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BAD3C);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BAF44);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BB344);

INCLUDE_ASM("asm/chess/nonmatchings/chess__800B9248", func_800BB670);

s32 func_800BB880(s32 unused_arg0, s32 unused_arg1, void *arg2) {
    s32 var_a0;

    var_a0 = 0;
    if (M2C_FIELD(M2C_FIELD(arg2, void **, 0x70), s16 *, 0x24) < 0) {
        var_a0 = 1;
        {
            /* Preserve the initialized copy through v0; emits no asm instruction. */
            register s32 byte_value __asm__("$2") = var_a0;
            __asm__ volatile("" : "=r"(byte_value) : "0"(byte_value));
            M2C_FIELD(arg2, s8 *, 0x17) = byte_value;
        }
        M2C_FIELD(arg2, s32 *, 0x18) = (s32) (M2C_FIELD(arg2, s32 *, 0x18) ^ 0x08000000);
    }
    return var_a0;
}
