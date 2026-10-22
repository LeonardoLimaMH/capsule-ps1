#include "common.h"

void slpm_SpuGetVoiceEnvelope(s32 arg0, u16 *arg1) {
    extern s32 D_801333D4[];
    *arg1 = M2C_FIELD(((arg0 * 0x10) + (*D_801333D4)), u16 *, 0xC);
}
