#include "common.h"

s32 func_8004CDD4(void *arg0, void *arg1) {
    s32 temp_v0;
    u32 temp_v1;

    memset(arg1, 0, 0x78);
    temp_v0 = M2C_FIELD(arg0, s32 *, 0);
    temp_v1 = temp_v0 & 0xFDFFFFFF;
    M2C_FIELD(arg1, s32 *, 0) = temp_v0;
    switch (temp_v1) {                              /* irregular */
    case 0x20020304:
    case 0x20000304:
        if (GetGraphDebug(0x2D030709) == 2) {
            printf("F3L ");
        }
        M2C_FIELD(arg1, u8 *, 4) = (u8) M2C_FIELD(arg0, u8 *, 4);
        M2C_FIELD(arg1, u8 *, 5) = (u8) M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(arg1, u8 *, 6) = (u8) M2C_FIELD(arg0, u8 *, 6);
        M2C_FIELD(arg1, u8 *, 8) = (u8) M2C_FIELD(arg0, u8 *, 4);
        M2C_FIELD(arg1, u8 *, 9) = (u8) M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(arg1, u8 *, 0xA) = (u8) M2C_FIELD(arg0, u8 *, 6);
        M2C_FIELD(arg1, u8 *, 0xC) = (u8) M2C_FIELD(arg0, u8 *, 4);
        M2C_FIELD(arg1, u8 *, 0xD) = (u8) M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(arg1, u8 *, 0xE) = (u8) M2C_FIELD(arg0, u8 *, 6);
        M2C_FIELD(arg1, u16 *, 0x68) = (u16) M2C_FIELD(arg0, u16 *, 0xA);
        M2C_FIELD(arg1, u16 *, 0x6A) = (u16) M2C_FIELD(arg0, u16 *, 0xC);
        M2C_FIELD(arg1, u16 *, 0x6C) = (u16) M2C_FIELD(arg0, u16 *, 0xE);
        M2C_FIELD(arg1, u16 *, 0x70) = (u16) M2C_FIELD(arg0, u16 *, 8);
        M2C_FIELD(arg1, u16 *, 0x72) = (u16) M2C_FIELD(arg0, u16 *, 8);
        M2C_FIELD(arg1, u16 *, 0x74) = (u16) M2C_FIELD(arg0, u16 *, 8);
        return 0x10;
    case 0x30020406:
    case 0x30000406:
        if (GetGraphDebug(0x2D030709) == 2) {
            printf("G3L ");
        }
        M2C_FIELD(arg1, u8 *, 4) = (u8) M2C_FIELD(arg0, u8 *, 4);
        M2C_FIELD(arg1, u8 *, 5) = (u8) M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(arg1, u8 *, 6) = (u8) M2C_FIELD(arg0, u8 *, 6);
        M2C_FIELD(arg1, u8 *, 8) = (u8) M2C_FIELD(arg0, u8 *, 4);
        M2C_FIELD(arg1, u8 *, 9) = (u8) M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(arg1, u8 *, 0xA) = (u8) M2C_FIELD(arg0, u8 *, 6);
        M2C_FIELD(arg1, u8 *, 0xC) = (u8) M2C_FIELD(arg0, u8 *, 4);
        M2C_FIELD(arg1, u8 *, 0xD) = (u8) M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(arg1, u8 *, 0xE) = (u8) M2C_FIELD(arg0, u8 *, 6);
        M2C_FIELD(arg1, u16 *, 0x68) = (u16) M2C_FIELD(arg0, u16 *, 0xA);
        M2C_FIELD(arg1, u16 *, 0x6A) = (u16) M2C_FIELD(arg0, u16 *, 0xE);
        M2C_FIELD(arg1, u16 *, 0x6C) = (u16) M2C_FIELD(arg0, u16 *, 0x12);
        M2C_FIELD(arg1, u16 *, 0x70) = (u16) M2C_FIELD(arg0, u16 *, 8);
        M2C_FIELD(arg1, u16 *, 0x72) = (u16) M2C_FIELD(arg0, u16 *, 0xC);
        M2C_FIELD(arg1, u16 *, 0x74) = (u16) M2C_FIELD(arg0, u16 *, 0x10);
        return 0x14;
    case 0x24020507:
    case 0x24000507:
        if (GetGraphDebug(0x2D030709) == 2) {
            printf("FT3L ");
        }
        M2C_FIELD(arg1, u16 *, 0x14) = (u16) M2C_FIELD(arg0, u16 *, 0xA);
        M2C_FIELD(arg1, u16 *, 0x16) = (u16) M2C_FIELD(arg0, u8 *, 6);
        M2C_FIELD(arg1, u8 *, 0x18) = (u8) M2C_FIELD(arg0, u8 *, 4);
        M2C_FIELD(arg1, u8 *, 0x19) = (u8) M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(arg1, u8 *, 0x1A) = (u8) M2C_FIELD(arg0, u16 *, 8);
        M2C_FIELD(arg1, u8 *, 0x1B) = (u8) M2C_FIELD(arg0, u8 *, 9);
        M2C_FIELD(arg1, u8 *, 0x1C) = (u8) M2C_FIELD(arg0, u16 *, 0xC);
        M2C_FIELD(arg1, u8 *, 0x1D) = (u8) M2C_FIELD(arg0, u8 *, 0xD);
        M2C_FIELD(arg1, u16 *, 0x68) = (u16) M2C_FIELD(arg0, u16 *, 0x12);
        M2C_FIELD(arg1, u16 *, 0x6A) = (u16) M2C_FIELD(arg0, u16 *, 0x14);
        M2C_FIELD(arg1, u16 *, 0x6C) = (u16) M2C_FIELD(arg0, u16 *, 0x16);
        M2C_FIELD(arg1, u16 *, 0x70) = (u16) M2C_FIELD(arg0, u16 *, 0x10);
        M2C_FIELD(arg1, u16 *, 0x72) = (u16) M2C_FIELD(arg0, u16 *, 0x10);
        M2C_FIELD(arg1, u16 *, 0x74) = (u16) M2C_FIELD(arg0, u16 *, 0x10);
        return 0x18;
    case 0x34020609:
    case 0x34000609:
        if (GetGraphDebug(0x2D030709) == 2) {
            printf("GT3L ");
        }
        M2C_FIELD(arg1, u16 *, 0x14) = (u16) M2C_FIELD(arg0, u16 *, 0xA);
        M2C_FIELD(arg1, u16 *, 0x16) = (u16) M2C_FIELD(arg0, u8 *, 6);
        M2C_FIELD(arg1, u8 *, 0x18) = (u8) M2C_FIELD(arg0, u8 *, 4);
        M2C_FIELD(arg1, u8 *, 0x19) = (u8) M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(arg1, u8 *, 0x1A) = (u8) M2C_FIELD(arg0, u16 *, 8);
        M2C_FIELD(arg1, u8 *, 0x1B) = (u8) M2C_FIELD(arg0, u8 *, 9);
        M2C_FIELD(arg1, u8 *, 0x1C) = (u8) M2C_FIELD(arg0, u16 *, 0xC);
        M2C_FIELD(arg1, u8 *, 0x1D) = (u8) M2C_FIELD(arg0, u8 *, 0xD);
        M2C_FIELD(arg1, u16 *, 0x68) = (u16) M2C_FIELD(arg0, u16 *, 0x12);
        M2C_FIELD(arg1, u16 *, 0x6A) = (u16) M2C_FIELD(arg0, u16 *, 0x16);
        M2C_FIELD(arg1, u16 *, 0x6C) = (u16) M2C_FIELD(arg0, u16 *, 0x1A);
        M2C_FIELD(arg1, u16 *, 0x70) = (u16) M2C_FIELD(arg0, u16 *, 0x10);
        M2C_FIELD(arg1, u16 *, 0x72) = (u16) M2C_FIELD(arg0, u16 *, 0x14);
        M2C_FIELD(arg1, u16 *, 0x74) = (u16) M2C_FIELD(arg0, u16 *, 0x18);
        return 0x1C;
    case 0x21030304:
    case 0x21010304:
        if (GetGraphDebug(0x2D030709) == 2) {
            printf("F3 ");
        }
        M2C_FIELD(arg1, u8 *, 4) = (u8) M2C_FIELD(arg0, u8 *, 4);
        M2C_FIELD(arg1, u8 *, 5) = (u8) M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(arg1, u8 *, 6) = (u8) M2C_FIELD(arg0, u8 *, 6);
        M2C_FIELD(arg1, u8 *, 8) = (u8) M2C_FIELD(arg0, u8 *, 4);
        M2C_FIELD(arg1, u8 *, 9) = (u8) M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(arg1, u8 *, 0xA) = (u8) M2C_FIELD(arg0, u8 *, 6);
        M2C_FIELD(arg1, u8 *, 0xC) = (u8) M2C_FIELD(arg0, u8 *, 4);
        M2C_FIELD(arg1, u8 *, 0xD) = (u8) M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(arg1, u8 *, 0xE) = (u8) M2C_FIELD(arg0, u8 *, 6);
        M2C_FIELD(arg1, u16 *, 0x68) = (u16) M2C_FIELD(arg0, u16 *, 8);
        M2C_FIELD(arg1, u16 *, 0x6A) = (u16) M2C_FIELD(arg0, u16 *, 0xA);
        M2C_FIELD(arg1, u16 *, 0x6C) = (u16) M2C_FIELD(arg0, u16 *, 0xC);
        return 0x10;
    case 0x31030506:
    case 0x31010506:
        if (GetGraphDebug(0x2D030709) == 2) {
            printf("G3 ");
        }
        M2C_FIELD(arg1, u8 *, 4) = (u8) M2C_FIELD(arg0, u8 *, 4);
        M2C_FIELD(arg1, u8 *, 5) = (u8) M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(arg1, u8 *, 6) = (u8) M2C_FIELD(arg0, u8 *, 6);
        M2C_FIELD(arg1, u8 *, 8) = (u8) M2C_FIELD(arg0, u16 *, 8);
        M2C_FIELD(arg1, u8 *, 9) = (u8) M2C_FIELD(arg0, u8 *, 9);
        M2C_FIELD(arg1, u8 *, 0xA) = (u8) M2C_FIELD(arg0, u16 *, 0xA);
        M2C_FIELD(arg1, u8 *, 0xC) = (u8) M2C_FIELD(arg0, u16 *, 0xC);
        M2C_FIELD(arg1, u8 *, 0xD) = (u8) M2C_FIELD(arg0, u8 *, 0xD);
        M2C_FIELD(arg1, u8 *, 0xE) = (u8) M2C_FIELD(arg0, u16 *, 0xE);
        M2C_FIELD(arg1, u16 *, 0x68) = (u16) M2C_FIELD(arg0, u16 *, 0x10);
        M2C_FIELD(arg1, u16 *, 0x6A) = (u16) M2C_FIELD(arg0, u16 *, 0x12);
        M2C_FIELD(arg1, u16 *, 0x6C) = (u16) M2C_FIELD(arg0, u16 *, 0x14);
        return 0x18;
    case 0x25030607:
    case 0x25010607:
        if (GetGraphDebug(0x2D030709) == 2) {
            printf("FT3 ");
        }
        M2C_FIELD(arg1, u16 *, 0x14) = (u16) M2C_FIELD(arg0, u16 *, 0xA);
        M2C_FIELD(arg1, u16 *, 0x16) = (u16) M2C_FIELD(arg0, u8 *, 6);
        M2C_FIELD(arg1, u8 *, 0x18) = (u8) M2C_FIELD(arg0, u8 *, 4);
        M2C_FIELD(arg1, u8 *, 0x19) = (u8) M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(arg1, u8 *, 0x1A) = (u8) M2C_FIELD(arg0, u16 *, 8);
        M2C_FIELD(arg1, u8 *, 0x1B) = (u8) M2C_FIELD(arg0, u8 *, 9);
        M2C_FIELD(arg1, u8 *, 0x1C) = (u8) M2C_FIELD(arg0, u16 *, 0xC);
        M2C_FIELD(arg1, u8 *, 0x1D) = (u8) M2C_FIELD(arg0, u8 *, 0xD);
        M2C_FIELD(arg1, u8 *, 4) = (u8) M2C_FIELD(arg0, u16 *, 0x10);
        M2C_FIELD(arg1, u8 *, 5) = (u8) M2C_FIELD(arg0, u8 *, 0x11);
        M2C_FIELD(arg1, u8 *, 6) = (u8) M2C_FIELD(arg0, u16 *, 0x12);
        M2C_FIELD(arg1, u8 *, 8) = (u8) M2C_FIELD(arg0, u16 *, 0x10);
        M2C_FIELD(arg1, u8 *, 9) = (u8) M2C_FIELD(arg0, u8 *, 0x11);
        M2C_FIELD(arg1, u8 *, 0xA) = (u8) M2C_FIELD(arg0, u16 *, 0x12);
        M2C_FIELD(arg1, u8 *, 0xC) = (u8) M2C_FIELD(arg0, u16 *, 0x10);
        M2C_FIELD(arg1, u8 *, 0xD) = (u8) M2C_FIELD(arg0, u8 *, 0x11);
        M2C_FIELD(arg1, u8 *, 0xE) = (u8) M2C_FIELD(arg0, u16 *, 0x12);
        M2C_FIELD(arg1, u16 *, 0x68) = (u16) M2C_FIELD(arg0, u16 *, 0x14);
        M2C_FIELD(arg1, u16 *, 0x6A) = (u16) M2C_FIELD(arg0, u16 *, 0x16);
        M2C_FIELD(arg1, u16 *, 0x6C) = (u16) M2C_FIELD(arg0, u16 *, 0x18);
        return 0x1C;
    case 0x35030809:
    case 0x35010809:
        if (GetGraphDebug(0x2D030709) == 2) {
            printf("GT3 ");
        }
        M2C_FIELD(arg1, u16 *, 0x14) = (u16) M2C_FIELD(arg0, u16 *, 0xA);
        M2C_FIELD(arg1, u16 *, 0x16) = (u16) M2C_FIELD(arg0, u8 *, 6);
        M2C_FIELD(arg1, u8 *, 0x18) = (u8) M2C_FIELD(arg0, u8 *, 4);
        M2C_FIELD(arg1, u8 *, 0x19) = (u8) M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(arg1, u8 *, 0x1A) = (u8) M2C_FIELD(arg0, u16 *, 8);
        M2C_FIELD(arg1, u8 *, 0x1B) = (u8) M2C_FIELD(arg0, u8 *, 9);
        M2C_FIELD(arg1, u8 *, 0x1C) = (u8) M2C_FIELD(arg0, u16 *, 0xC);
        M2C_FIELD(arg1, u8 *, 0x1D) = (u8) M2C_FIELD(arg0, u8 *, 0xD);
        M2C_FIELD(arg1, u16 *, 0x68) = (u16) M2C_FIELD(arg0, u16 *, 0x1C);
        M2C_FIELD(arg1, u16 *, 0x6A) = (u16) M2C_FIELD(arg0, u8 *, 0x1E);
        M2C_FIELD(arg1, u16 *, 0x6C) = (u16) M2C_FIELD(arg0, u8 *, 0x20);
        M2C_FIELD(arg1, u8 *, 4) = (u8) M2C_FIELD(arg0, u16 *, 0x10);
        M2C_FIELD(arg1, u8 *, 5) = (u8) M2C_FIELD(arg0, u8 *, 0x11);
        M2C_FIELD(arg1, u8 *, 6) = (u8) M2C_FIELD(arg0, u16 *, 0x12);
        M2C_FIELD(arg1, u8 *, 8) = (u8) M2C_FIELD(arg0, u16 *, 0x14);
        M2C_FIELD(arg1, u8 *, 9) = (u8) M2C_FIELD(arg0, u8 *, 0x15);
        M2C_FIELD(arg1, u8 *, 0xA) = (u8) M2C_FIELD(arg0, u16 *, 0x16);
        M2C_FIELD(arg1, u8 *, 0xC) = (u8) M2C_FIELD(arg0, u16 *, 0x18);
        M2C_FIELD(arg1, u8 *, 0xD) = (u8) M2C_FIELD(arg0, u8 *, 0x19);
        M2C_FIELD(arg1, u8 *, 0xE) = (u8) M2C_FIELD(arg0, u16 *, 0x1A);
        return 0x24;
    case 0x28020405:
    case 0x28000405:
        if (GetGraphDebug(0x2D030709) == 2) {
            printf("F4L ");
        }
        M2C_FIELD(arg1, u8 *, 4) = (u8) M2C_FIELD(arg0, u8 *, 4);
        M2C_FIELD(arg1, u8 *, 5) = (u8) M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(arg1, u8 *, 6) = (u8) M2C_FIELD(arg0, u8 *, 6);
        M2C_FIELD(arg1, u8 *, 8) = (u8) M2C_FIELD(arg0, u8 *, 4);
        M2C_FIELD(arg1, u8 *, 9) = (u8) M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(arg1, u8 *, 0xA) = (u8) M2C_FIELD(arg0, u8 *, 6);
        M2C_FIELD(arg1, u8 *, 0xC) = (u8) M2C_FIELD(arg0, u8 *, 4);
        M2C_FIELD(arg1, u8 *, 0xD) = (u8) M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(arg1, u8 *, 0xE) = (u8) M2C_FIELD(arg0, u8 *, 6);
        M2C_FIELD(arg1, u8 *, 0x10) = (u8) M2C_FIELD(arg0, u8 *, 4);
        M2C_FIELD(arg1, u8 *, 0x11) = (u8) M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(arg1, u8 *, 0x12) = (u8) M2C_FIELD(arg0, u8 *, 6);
        M2C_FIELD(arg1, u16 *, 0x68) = (u16) M2C_FIELD(arg0, u16 *, 0xA);
        M2C_FIELD(arg1, u16 *, 0x6A) = (u16) M2C_FIELD(arg0, u16 *, 0xC);
        M2C_FIELD(arg1, u16 *, 0x6C) = (u16) M2C_FIELD(arg0, u16 *, 0xE);
        M2C_FIELD(arg1, u16 *, 0x6E) = (u16) M2C_FIELD(arg0, u16 *, 0x10);
        M2C_FIELD(arg1, u16 *, 0x70) = (u16) M2C_FIELD(arg0, u16 *, 8);
        M2C_FIELD(arg1, u16 *, 0x72) = (u16) M2C_FIELD(arg0, u16 *, 8);
        M2C_FIELD(arg1, u16 *, 0x74) = (u16) M2C_FIELD(arg0, u16 *, 8);
        M2C_FIELD(arg1, u16 *, 0x76) = (u16) M2C_FIELD(arg0, u16 *, 8);
        return 0x14;
    case 0x38020508:
    case 0x38000508:
        if (GetGraphDebug(0x2D030709) == 2) {
            printf("G4L ");
        }
        M2C_FIELD(arg1, u8 *, 4) = (u8) M2C_FIELD(arg0, u8 *, 4);
        M2C_FIELD(arg1, u8 *, 5) = (u8) M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(arg1, u8 *, 6) = (u8) M2C_FIELD(arg0, u8 *, 6);
        M2C_FIELD(arg1, u8 *, 8) = (u8) M2C_FIELD(arg0, u8 *, 4);
        M2C_FIELD(arg1, u8 *, 9) = (u8) M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(arg1, u8 *, 0xA) = (u8) M2C_FIELD(arg0, u8 *, 6);
        M2C_FIELD(arg1, u8 *, 0xC) = (u8) M2C_FIELD(arg0, u8 *, 4);
        M2C_FIELD(arg1, u8 *, 0xD) = (u8) M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(arg1, u8 *, 0xE) = (u8) M2C_FIELD(arg0, u8 *, 6);
        M2C_FIELD(arg1, u8 *, 0x10) = (u8) M2C_FIELD(arg0, u8 *, 4);
        M2C_FIELD(arg1, u8 *, 0x11) = (u8) M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(arg1, u8 *, 0x12) = (u8) M2C_FIELD(arg0, u8 *, 6);
        M2C_FIELD(arg1, u16 *, 0x68) = (u16) M2C_FIELD(arg0, u16 *, 0xA);
        M2C_FIELD(arg1, u16 *, 0x6A) = (u16) M2C_FIELD(arg0, u16 *, 0xE);
        M2C_FIELD(arg1, u16 *, 0x6C) = (u16) M2C_FIELD(arg0, u16 *, 0x12);
        M2C_FIELD(arg1, u16 *, 0x6E) = (u16) M2C_FIELD(arg0, u16 *, 0x16);
        M2C_FIELD(arg1, u16 *, 0x70) = (u16) M2C_FIELD(arg0, u16 *, 8);
        M2C_FIELD(arg1, u16 *, 0x72) = (u16) M2C_FIELD(arg0, u16 *, 0xC);
        M2C_FIELD(arg1, u16 *, 0x74) = (u16) M2C_FIELD(arg0, u16 *, 0x10);
        M2C_FIELD(arg1, u16 *, 0x76) = (u16) M2C_FIELD(arg0, u16 *, 0x14);
        return 0x18;
    case 0x2C020709:
    case 0x2C000709:
        if (GetGraphDebug(0x2D030709) == 2) {
            printf("FT4L ");
        }
        M2C_FIELD(arg1, u16 *, 0x14) = (u16) M2C_FIELD(arg0, u16 *, 0xA);
        M2C_FIELD(arg1, u16 *, 0x16) = (u16) M2C_FIELD(arg0, u8 *, 6);
        M2C_FIELD(arg1, u8 *, 0x18) = (u8) M2C_FIELD(arg0, u8 *, 4);
        M2C_FIELD(arg1, u8 *, 0x19) = (u8) M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(arg1, u8 *, 0x1A) = (u8) M2C_FIELD(arg0, u16 *, 8);
        M2C_FIELD(arg1, u8 *, 0x1B) = (u8) M2C_FIELD(arg0, u8 *, 9);
        M2C_FIELD(arg1, u8 *, 0x1C) = (u8) M2C_FIELD(arg0, u16 *, 0xC);
        M2C_FIELD(arg1, u8 *, 0x1D) = (u8) M2C_FIELD(arg0, u8 *, 0xD);
        M2C_FIELD(arg1, u8 *, 0x1E) = (u8) M2C_FIELD(arg0, u16 *, 0x10);
        M2C_FIELD(arg1, u8 *, 0x1F) = (u8) M2C_FIELD(arg0, u8 *, 0x11);
        M2C_FIELD(arg1, u16 *, 0x68) = (u16) M2C_FIELD(arg0, u16 *, 0x16);
        M2C_FIELD(arg1, u16 *, 0x6A) = (u16) M2C_FIELD(arg0, u16 *, 0x18);
        M2C_FIELD(arg1, u16 *, 0x6C) = (u16) M2C_FIELD(arg0, u16 *, 0x1A);
        M2C_FIELD(arg1, u16 *, 0x6E) = (u16) M2C_FIELD(arg0, u16 *, 0x1C);
        M2C_FIELD(arg1, u16 *, 0x70) = (u16) M2C_FIELD(arg0, u16 *, 0x14);
        M2C_FIELD(arg1, u16 *, 0x72) = (u16) M2C_FIELD(arg0, u16 *, 0x14);
        M2C_FIELD(arg1, u16 *, 0x74) = (u16) M2C_FIELD(arg0, u16 *, 0x14);
        M2C_FIELD(arg1, u16 *, 0x76) = (u16) M2C_FIELD(arg0, u16 *, 0x14);
        return 0x20;
    case 0x3C02080C:
    case 0x3C00080C:
        if (GetGraphDebug(0x2D030709) == 2) {
            printf("GT4L ");
        }
        M2C_FIELD(arg1, u16 *, 0x14) = (u16) M2C_FIELD(arg0, u16 *, 0xA);
        M2C_FIELD(arg1, u16 *, 0x16) = (u16) M2C_FIELD(arg0, u8 *, 6);
        M2C_FIELD(arg1, u8 *, 0x18) = (u8) M2C_FIELD(arg0, u8 *, 4);
        M2C_FIELD(arg1, u8 *, 0x19) = (u8) M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(arg1, u8 *, 0x1A) = (u8) M2C_FIELD(arg0, u16 *, 8);
        M2C_FIELD(arg1, u8 *, 0x1B) = (u8) M2C_FIELD(arg0, u8 *, 9);
        M2C_FIELD(arg1, u8 *, 0x1C) = (u8) M2C_FIELD(arg0, u16 *, 0xC);
        M2C_FIELD(arg1, u8 *, 0x1D) = (u8) M2C_FIELD(arg0, u8 *, 0xD);
        M2C_FIELD(arg1, u8 *, 0x1E) = (u8) M2C_FIELD(arg0, u16 *, 0x10);
        M2C_FIELD(arg1, u8 *, 0x1F) = (u8) M2C_FIELD(arg0, u8 *, 0x11);
        M2C_FIELD(arg1, u16 *, 0x68) = (u16) M2C_FIELD(arg0, u16 *, 0x16);
        M2C_FIELD(arg1, u16 *, 0x6A) = (u16) M2C_FIELD(arg0, u16 *, 0x1A);
        M2C_FIELD(arg1, u16 *, 0x6C) = (u16) M2C_FIELD(arg0, u8 *, 0x1E);
        M2C_FIELD(arg1, u16 *, 0x6E) = (u16) M2C_FIELD(arg0, u8 *, 0x22);
        M2C_FIELD(arg1, u16 *, 0x70) = (u16) M2C_FIELD(arg0, u16 *, 0x14);
        M2C_FIELD(arg1, u16 *, 0x72) = (u16) M2C_FIELD(arg0, u16 *, 0x18);
        M2C_FIELD(arg1, u16 *, 0x74) = (u16) M2C_FIELD(arg0, u16 *, 0x1C);
        M2C_FIELD(arg1, u16 *, 0x76) = (u16) M2C_FIELD(arg0, u8 *, 0x20);
        return 0x24;
    case 0x29030305:
    case 0x29010305:
        if (GetGraphDebug(0x2D030709) == 2) {
            printf("F4 ");
        }
        M2C_FIELD(arg1, u8 *, 4) = (u8) M2C_FIELD(arg0, u8 *, 4);
        M2C_FIELD(arg1, u8 *, 5) = (u8) M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(arg1, u8 *, 6) = (u8) M2C_FIELD(arg0, u8 *, 6);
        M2C_FIELD(arg1, u8 *, 8) = (u8) M2C_FIELD(arg0, u8 *, 4);
        M2C_FIELD(arg1, u8 *, 9) = (u8) M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(arg1, u8 *, 0xA) = (u8) M2C_FIELD(arg0, u8 *, 6);
        M2C_FIELD(arg1, u8 *, 0xC) = (u8) M2C_FIELD(arg0, u8 *, 4);
        M2C_FIELD(arg1, u8 *, 0xD) = (u8) M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(arg1, u8 *, 0xE) = (u8) M2C_FIELD(arg0, u8 *, 6);
        M2C_FIELD(arg1, u8 *, 0x10) = (u8) M2C_FIELD(arg0, u8 *, 4);
        M2C_FIELD(arg1, u8 *, 0x11) = (u8) M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(arg1, u8 *, 0x12) = (u8) M2C_FIELD(arg0, u8 *, 6);
        M2C_FIELD(arg1, u16 *, 0x68) = (u16) M2C_FIELD(arg0, u16 *, 8);
        M2C_FIELD(arg1, u16 *, 0x6A) = (u16) M2C_FIELD(arg0, u16 *, 0xA);
        M2C_FIELD(arg1, u16 *, 0x6C) = (u16) M2C_FIELD(arg0, u16 *, 0xC);
        M2C_FIELD(arg1, u16 *, 0x6E) = (u16) M2C_FIELD(arg0, u16 *, 0xE);
        return 0x10;
    case 0x39030608:
    case 0x39010608:
        if (GetGraphDebug(0x2D030709) == 2) {
            printf("G4 ");
        }
        M2C_FIELD(arg1, u8 *, 4) = (u8) M2C_FIELD(arg0, u8 *, 4);
        M2C_FIELD(arg1, u8 *, 5) = (u8) M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(arg1, u8 *, 6) = (u8) M2C_FIELD(arg0, u8 *, 6);
        M2C_FIELD(arg1, u8 *, 8) = (u8) M2C_FIELD(arg0, u16 *, 8);
        M2C_FIELD(arg1, u8 *, 9) = (u8) M2C_FIELD(arg0, u8 *, 9);
        M2C_FIELD(arg1, u8 *, 0xA) = (u8) M2C_FIELD(arg0, u16 *, 0xA);
        M2C_FIELD(arg1, u8 *, 0xC) = (u8) M2C_FIELD(arg0, u16 *, 0xC);
        M2C_FIELD(arg1, u8 *, 0xD) = (u8) M2C_FIELD(arg0, u8 *, 0xD);
        M2C_FIELD(arg1, u8 *, 0xE) = (u8) M2C_FIELD(arg0, u16 *, 0xE);
        M2C_FIELD(arg1, u8 *, 0x10) = (u8) M2C_FIELD(arg0, u16 *, 0x10);
        M2C_FIELD(arg1, u8 *, 0x11) = (u8) M2C_FIELD(arg0, u8 *, 0x11);
        M2C_FIELD(arg1, u8 *, 0x12) = (u8) M2C_FIELD(arg0, u16 *, 0x12);
        M2C_FIELD(arg1, u16 *, 0x68) = (u16) M2C_FIELD(arg0, u16 *, 0x14);
        M2C_FIELD(arg1, u16 *, 0x6A) = (u16) M2C_FIELD(arg0, u16 *, 0x16);
        M2C_FIELD(arg1, u16 *, 0x6C) = (u16) M2C_FIELD(arg0, u16 *, 0x18);
        M2C_FIELD(arg1, u16 *, 0x6E) = (u16) M2C_FIELD(arg0, u16 *, 0x1A);
        return 0x1C;
    case 0x2D030709:
    case 0x2D010709:
        if (GetGraphDebug(0x2D030709) == 2) {
            printf("FT4 ");
        }
        M2C_FIELD(arg1, u16 *, 0x14) = (u16) M2C_FIELD(arg0, u16 *, 0xA);
        M2C_FIELD(arg1, u16 *, 0x16) = (u16) M2C_FIELD(arg0, u8 *, 6);
        M2C_FIELD(arg1, u8 *, 0x18) = (u8) M2C_FIELD(arg0, u8 *, 4);
        M2C_FIELD(arg1, u8 *, 0x19) = (u8) M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(arg1, u8 *, 0x1A) = (u8) M2C_FIELD(arg0, u16 *, 8);
        M2C_FIELD(arg1, u8 *, 0x1B) = (u8) M2C_FIELD(arg0, u8 *, 9);
        M2C_FIELD(arg1, u8 *, 0x1C) = (u8) M2C_FIELD(arg0, u16 *, 0xC);
        M2C_FIELD(arg1, u8 *, 0x1D) = (u8) M2C_FIELD(arg0, u8 *, 0xD);
        M2C_FIELD(arg1, u8 *, 0x1E) = (u8) M2C_FIELD(arg0, u16 *, 0x10);
        M2C_FIELD(arg1, u8 *, 0x1F) = (u8) M2C_FIELD(arg0, u8 *, 0x11);
        M2C_FIELD(arg1, u8 *, 4) = (u8) M2C_FIELD(arg0, u16 *, 0x14);
        M2C_FIELD(arg1, u8 *, 5) = (u8) M2C_FIELD(arg0, u8 *, 0x15);
        M2C_FIELD(arg1, u8 *, 6) = (u8) M2C_FIELD(arg0, u16 *, 0x16);
        M2C_FIELD(arg1, u8 *, 8) = (u8) M2C_FIELD(arg0, u16 *, 0x14);
        M2C_FIELD(arg1, u8 *, 9) = (u8) M2C_FIELD(arg0, u8 *, 0x15);
        M2C_FIELD(arg1, u8 *, 0xA) = (u8) M2C_FIELD(arg0, u16 *, 0x16);
        M2C_FIELD(arg1, u8 *, 0xC) = (u8) M2C_FIELD(arg0, u16 *, 0x14);
        M2C_FIELD(arg1, u8 *, 0xD) = (u8) M2C_FIELD(arg0, u8 *, 0x15);
        M2C_FIELD(arg1, u8 *, 0xE) = (u8) M2C_FIELD(arg0, u16 *, 0x16);
        M2C_FIELD(arg1, u8 *, 0x10) = (u8) M2C_FIELD(arg0, u16 *, 0x14);
        M2C_FIELD(arg1, u8 *, 0x11) = (u8) M2C_FIELD(arg0, u8 *, 0x15);
        M2C_FIELD(arg1, u8 *, 0x12) = (u8) M2C_FIELD(arg0, u16 *, 0x16);
        M2C_FIELD(arg1, u16 *, 0x68) = (u16) M2C_FIELD(arg0, u16 *, 0x18);
        M2C_FIELD(arg1, u16 *, 0x6A) = (u16) M2C_FIELD(arg0, u16 *, 0x1A);
        M2C_FIELD(arg1, u16 *, 0x6C) = (u16) M2C_FIELD(arg0, u16 *, 0x1C);
        M2C_FIELD(arg1, u16 *, 0x6E) = (u16) M2C_FIELD(arg0, u8 *, 0x1E);
        return 0x20;
    case 0x3D010A0C:
    case 0x3D030A0C:
        if (GetGraphDebug(0x2D030709) == 2) {
            printf("GT4 ");
        }
        M2C_FIELD(arg1, u16 *, 0x14) = (u16) M2C_FIELD(arg0, u16 *, 0xA);
        M2C_FIELD(arg1, u16 *, 0x16) = (u16) M2C_FIELD(arg0, u8 *, 6);
        M2C_FIELD(arg1, u8 *, 0x18) = (u8) M2C_FIELD(arg0, u8 *, 4);
        M2C_FIELD(arg1, u8 *, 0x19) = (u8) M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(arg1, u8 *, 0x1A) = (u8) M2C_FIELD(arg0, u16 *, 8);
        M2C_FIELD(arg1, u8 *, 0x1B) = (u8) M2C_FIELD(arg0, u8 *, 9);
        M2C_FIELD(arg1, u8 *, 0x1C) = (u8) M2C_FIELD(arg0, u16 *, 0xC);
        M2C_FIELD(arg1, u8 *, 0x1D) = (u8) M2C_FIELD(arg0, u8 *, 0xD);
        M2C_FIELD(arg1, u8 *, 0x1E) = (u8) M2C_FIELD(arg0, u16 *, 0x10);
        M2C_FIELD(arg1, u8 *, 0x1F) = (u8) M2C_FIELD(arg0, u8 *, 0x11);
        M2C_FIELD(arg1, u16 *, 0x68) = (u16) M2C_FIELD(arg0, u16 *, 0x24);
        M2C_FIELD(arg1, u16 *, 0x6A) = (u16) M2C_FIELD(arg0, u16 *, 0x26);
        M2C_FIELD(arg1, u16 *, 0x6C) = (u16) M2C_FIELD(arg0, u16 *, 0x28);
        M2C_FIELD(arg1, u16 *, 0x6E) = (u16) M2C_FIELD(arg0, u16 *, 0x2A);
        M2C_FIELD(arg1, u8 *, 4) = (u8) M2C_FIELD(arg0, u16 *, 0x14);
        M2C_FIELD(arg1, u8 *, 5) = (u8) M2C_FIELD(arg0, u8 *, 0x15);
        M2C_FIELD(arg1, u8 *, 6) = (u8) M2C_FIELD(arg0, u16 *, 0x16);
        M2C_FIELD(arg1, u8 *, 8) = (u8) M2C_FIELD(arg0, u16 *, 0x18);
        M2C_FIELD(arg1, u8 *, 9) = (u8) M2C_FIELD(arg0, u8 *, 0x19);
        M2C_FIELD(arg1, u8 *, 0xA) = (u8) M2C_FIELD(arg0, u16 *, 0x1A);
        M2C_FIELD(arg1, u8 *, 0xC) = (u8) M2C_FIELD(arg0, u16 *, 0x1C);
        M2C_FIELD(arg1, u8 *, 0xD) = (u8) M2C_FIELD(arg0, u8 *, 0x1D);
        M2C_FIELD(arg1, u8 *, 0xE) = (u8) M2C_FIELD(arg0, u8 *, 0x1E);
        M2C_FIELD(arg1, u8 *, 0x10) = (u8) M2C_FIELD(arg0, u8 *, 0x20);
        M2C_FIELD(arg1, u8 *, 0x11) = (u8) M2C_FIELD(arg0, u8 *, 0x21);
        M2C_FIELD(arg1, u8 *, 0x12) = (u8) M2C_FIELD(arg0, u8 *, 0x22);
        return 0x2C;
    default:
        printf("unsupported type (%08x)\n", M2C_FIELD(arg1, s32 *, 0) & 0xFDFFFFFF);
        return -1;
    }
}
