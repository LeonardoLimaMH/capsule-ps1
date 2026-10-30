#ifndef M2C_H
#define M2C_H

/*
 * Macros usadas por rascunhos gerados pelo m2c para acessos ainda sem tipo
 * definido. À medida que as structs do jogo forem identificadas, os usos
 * destas macros devem ser substituídos por acessos a campos nomeados.
 *
 * Diferente do m2c_macros.h original, as macros aritméticas aqui têm a semântica
 * real (o C precisa se comportar como o original no teste diferencial). M2C_ERROR
 * não é definido de propósito: rascunho com erro do m2c não deve compilar.
 */
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef long long M2C_UNK64;

#define M2C_FIELD(expr, type, offset) (*(type)((s8*)(expr) + (offset)))
#define M2C_STRUCT_COPY(dst, src, size) (*(struct { u8 _[size]; }*)(dst) = *(struct { u8 _[size]; }*)(src))
#define M2C_BITWISE(type, expr) ((type)(expr))
/* campo de um global por meio de uma struct: o GCC mantém o deslocamento na
 * instrução (lhu $v1,0xDC($a1)) em vez de somá-lo ao símbolo (%lo(D_X+0xDC)) */
#define M2C_GFIELD(base, type, offset) (((struct { u8 _p[offset]; type v; } *)(base))->v)

/* parte alta da multiplicação de 32x32 bits (divisão por constante, etc.) */
#define MULT_HI(a, b) ((s32)(((long long)(s32)(a) * (long long)(s32)(b)) >> 32))
#define MULTU_HI(a, b) ((u32)(((unsigned long long)(u32)(a) * (unsigned long long)(u32)(b)) >> 32))

#endif /* M2C_H */
