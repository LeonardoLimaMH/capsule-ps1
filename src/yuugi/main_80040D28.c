#include "common.h"
#include "yuugi.h"

void SpuGetReverbVoice(void) {
    _SpuGetAnyVoice(0xCC, 0xCD);
}
