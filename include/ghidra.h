/* Tipos e intrínsecos do pseudo-C do Ghidra em termos do GCC 2.7.2 (tools/ghidra2c.py). */
#ifndef GHIDRA_H
#define GHIDRA_H

typedef unsigned char undefined, undefined1, byte, uchar, bool;
typedef unsigned short undefined2, ushort, word;
typedef unsigned int undefined4, uint, dword;
typedef unsigned long ulong;
typedef signed char sbyte;
typedef long long longlong, undefined8;
typedef unsigned long long ulonglong;
typedef int code();
#define true 1
#define false 0
#define CONCAT11(a, b) ((((unsigned)(a) & 0xFF) << 8) | ((b) & 0xFF))
#define CONCAT12(a, b) ((((unsigned)(a) & 0xFF) << 16) | ((b) & 0xFFFF))
#define CONCAT13(a, b) (((unsigned)(a) << 24) | ((b) & 0xFFFFFF))
#define CONCAT21(a, b) ((((unsigned)(a) & 0xFFFF) << 8) | ((b) & 0xFF))
#define CONCAT22(a, b) (((unsigned)(a) << 16) | ((b) & 0xFFFF))
#define CONCAT31(a, b) (((unsigned)(a) << 8) | ((b) & 0xFF))
#define SUB41(x, n) ((unsigned char)((x) >> ((n) * 8)))
#define SUB42(x, n) ((unsigned short)((x) >> ((n) * 8)))
#define SUB21(x, n) ((unsigned char)((x) >> ((n) * 8)))
#define ZEXT14(x) ((unsigned int)(unsigned char)(x))
#define ZEXT24(x) ((unsigned int)(unsigned short)(x))
#define SEXT14(x) ((int)(signed char)(x))
#define SEXT24(x) ((int)(short)(x))

#endif
