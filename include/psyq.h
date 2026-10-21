#ifndef PSYQ_H
#define PSYQ_H

/*
 * Protótipos mínimos das funções do SDK PsyQ usadas pelo jogo.
 * Escritos a partir das assinaturas observadas no binário; acrescente aqui
 * conforme novas funções forem decompiladas.
 */

/* libgpu */
int ResetGraph(int mode);
int DrawSync(int mode);
int VSync(int mode);

/* libc */
void srand(unsigned int seed);
int rand(void);

#endif /* PSYQ_H */
