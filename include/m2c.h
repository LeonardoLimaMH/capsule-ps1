#ifndef M2C_H
#define M2C_H

/*
 * Macros usadas por rascunhos gerados pelo m2c para acessos ainda sem tipo
 * definido. À medida que as structs do jogo forem identificadas, os usos
 * destas macros devem ser substituídos por acessos a campos nomeados.
 */
#define M2C_FIELD(expr, type, offset) (*(type)((s8*)(expr) + (offset)))
#define M2C_STRUCT_COPY(dst, src, size) (*(struct { u8 _[size]; }*)(dst) = *(struct { u8 _[size]; }*)(src))

#endif /* M2C_H */
