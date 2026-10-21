#ifndef INCLUDE_ASM_H
#define INCLUDE_ASM_H

/*
 * INCLUDE_ASM: insere a função original (assembly extraído pelo splat) no
 * lugar de uma função ainda não decompilada. A cada função convertida para C
 * com byte-matching, a linha INCLUDE_ASM correspondente é removida.
 *
 * O GCC 2.7.2 emite blocos asm de topo imediatamente, mas corpos de funções C
 * podem sair depois, o que alteraria a ordem do .text. Por isso o assembly é
 * embrulhado numa função falsa (__maspsx_include_asm_hack_*): ela é compilada
 * na ordem do arquivo e o maspsx descarta tudo dela exceto as linhas marcadas
 * com "# maspsx-keep".
 */
#if !defined(M2CTX) && !defined(PERMUTER)

#define INCLUDE_ASM(FOLDER, NAME)                                              \
    void __maspsx_include_asm_hack_##NAME(void) {                              \
        __asm__(".text # maspsx-keep\n"                                        \
                "\t.align\t2 # maspsx-keep\n"                                  \
                "\t.set noreorder # maspsx-keep\n"                             \
                "\t.set noat # maspsx-keep\n"                                  \
                ".include \"" FOLDER "/" #NAME ".s\" # maspsx-keep\n"          \
                "\t.set reorder # maspsx-keep\n"                               \
                "\t.set at # maspsx-keep\n");                                  \
    }

#define INCLUDE_RODATA(FOLDER, NAME)                                           \
    __asm__(".section .rodata\n"                                               \
            "\t.include \"" FOLDER "/" #NAME ".s\"\n"                          \
            ".section .text")

__asm__(".include \"include/macro.inc\"\n");

#else

#define INCLUDE_ASM(FOLDER, NAME)
#define INCLUDE_RODATA(FOLDER, NAME)

#endif

#endif /* INCLUDE_ASM_H */
