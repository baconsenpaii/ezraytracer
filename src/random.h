#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void random_seed (uint64_t seed, int jumps);
uint64_t ranl (void);
double ranf (void);

#ifdef __cplusplus
}
#endif
