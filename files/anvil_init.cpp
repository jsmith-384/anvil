/* Jordan Smith 2023
 * Anvil | anvil_init.cpp
 * Licensed under the MIT license
 */
 
#include <iostream>
#include <cstdio>
#include <anvil_init.hpp>

using namespace std;

int ANV_Initialize(int flags) {
	printf("Initialize function called with flags %d\n",flags);
	return 0;
}

void ANV_Diagnostics() {
	printf("-- Anvil Graphics Library\n");

	#ifdef ANVIL_BUILD_ID
	printf("Build ID: %s\n",ANVIL_BUILD_ID);
	#else
	printf("No build ID was detected\n");
	#endif
	
	#ifdef ANVIL_BUILD_ISDEBUG
	printf("Debug build: %d\n", ANVIL_BUILD_ISDEBUG);
	#else
	printf("Debug build: 0 (flag not set)\n");
	#endif
}