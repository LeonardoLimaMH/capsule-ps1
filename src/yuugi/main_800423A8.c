#include "common.h"
#include "yuugi.h"

void SpuGetVoiceEnvelope(s32 arg0, u16 *arg1) {
    extern s32 D_80071598[];
    *arg1 = M2C_FIELD(((arg0 * 0x10) + (*D_80071598)), u16 *, 0xC);
}
