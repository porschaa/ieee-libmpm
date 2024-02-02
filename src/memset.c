#include "internal.h"

/* 2016-2024 Porcha.  All rights reserved */


void *_arb_memset(void *s, int c, size_t n)
{
	return memset(s, c, n * sizeof(UARBT));
}

