#include <stdio.h>
#include <stdlib.h>

// Clicking 'Open Declaration' should open config.h
#include "config.h"
// Clicking 'Open Declaration' should open include/included.h
#include <included.h>

int main(void) {
#if MACRO_FROM_CONFIGURE_FILE-0
	puts("!!!Hello World!!!" );
#endif
#if MACRO_FROM_ADD_DEFINITIONS-0
	puts("!!!Hello, hello World!!!" );
#endif
#if MACRO_FROM_INCLUDE_DIRECTORIES_BELOW-0
	puts("!!!Hello, hello World!!!" );
#endif
#if MACRO_FROM_INCLUDE_DIRECTORIES_ABOVE-0
	puts("!!!Hello, hello World!!!" );
#endif
#if __GNUC__-0
	puts("!!!Hello, hello World!!!" );
#endif

return EXIT_SUCCESS;
}
