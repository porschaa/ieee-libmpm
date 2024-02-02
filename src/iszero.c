#include "internal.h"

/* 2016-2024 Porcha.  All rights reserved */


int iszero(const fxdpnt *a)
{
	size_t i = 0;
	for (i=0; i < a->len; ++i) {
		if (a->number[i] != 0)
			return 1;
	}
	return 0;
}

