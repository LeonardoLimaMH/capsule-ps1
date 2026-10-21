#include "common.h"
#include "yuugi.h"

void SpuSetKeyOnWithAttr(s32 *arg0) {
    SpuSetVoiceAttr();
    SpuSetKey(1, *arg0);
}
