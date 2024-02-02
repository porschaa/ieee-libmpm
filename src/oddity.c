#include "internal.h"
/*
 * 2016-2024 Porcha.  All rights reserved
 */

int oddity(size_t len)
{
	/* return true if odd, return zero if even */
	if (len % 2 == 1) {
                return 1;
        }
	return 0;
}
