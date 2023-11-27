/* Jordan Smith 2023
 * Anvil | anvil_init.hpp
 * Licensed under the MIT license
 */

#ifndef ANVIL_INIT
#define ANVIL_INIT

// use C style linking; stops mangling
#ifdef __cplusplus
extern "C" {
#endif

int ANV_Initialize(int flags);
void ANV_Diagnostics();

#ifdef __cplusplus
}
#endif

#endif