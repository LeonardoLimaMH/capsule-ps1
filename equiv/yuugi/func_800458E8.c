#include "common.h"

void func_800458E8(void) {
    extern M2C_UNK D_80072F44[];
    extern M2C_UNK * D_80094C08[];
    extern s32 D_80094C0C[];
    extern s32 D_80094C10[];
    M2C_UNK *var_a1;

    printf("*** STATUS of DS system ***\n");
    printf("\tcommand status: %d %d %d\n", M2C_FIELD(D_80072F44, M2C_UNK **, 0), M2C_FIELD(D_80072F44, s32 *, 4), M2C_FIELD(D_80072F44, s32 *, 8));
    printf("\tlast command: %02x %02x%02x%02x%02x\n", (M2C_UNK *) M2C_FIELD(D_80072F44, u8 *, -0x1C), (s32) M2C_FIELD(D_80072F44, u8 *, -0x1B), (s32) M2C_FIELD(D_80072F44, u8 *, -0x1A), (s32) M2C_FIELD(D_80072F44, u8 *, -0x19), (s32) M2C_FIELD(D_80072F44, u8 *, -0x18));
    printf("\tcommand execution(remain): %d\n", M2C_FIELD(D_80072F44, M2C_UNK **, 0x24));
    printf("\tsystem timer: %d\n", M2C_FIELD(D_80072F44, M2C_UNK **, 0x20));
    printf("\tcallbacks vsync: %08x sync: %08x ready: %08x\n", (*D_80094C08), (*D_80094C0C), (*D_80094C10));
    var_a1 = "none";
    if (ER_active() != 0) {
        var_a1 = "active";
    }
    printf("\tready system: %s\n\0\0\0\0CdlReadS\0CdlSeekP\0CdlSeekL\0CdlGetTD\0CdlGetTN\0CdlGetlocP\0CdlGetlocL\0s32\0CdlSetmode\0CdlSetfilter\0CdlDemute\0CdlMute\0CdlReset\0CdlPause\0CdlStop\0CdlStandby\0CdlReadN\0CdlBackward\0CdlForward\0CdlPlay\0CdlSetloc\0CdlNop\0CdlSync\0DiskError\0DataEnd\0Acknowledge\0Complete\0DataReady\0NoIntr", var_a1);
}
