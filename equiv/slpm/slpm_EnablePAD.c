#include "common.h"

extern void (*jtbl_80133508)(void);

void slpm_EnablePAD(void) {
    jtbl_80133508();
}
