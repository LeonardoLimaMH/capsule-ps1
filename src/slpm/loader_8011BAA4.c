#include "common.h"

void slpm_SsInitHot(void) {
    slpm_ResetCallback();
    func_8011E864();
    _SsInit();
}
