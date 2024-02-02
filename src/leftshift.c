#include "internal.h"

/* 2016-2024 Porcha.  All rights reserved */

fxdpnt *arb_leftshift(fxdpnt *a, size_t n)
{
	size_t i = 0;
	size_t j = n;
	size_t k = 0;
	size_t l = a->len -1;

	for (i = n-1;i < a->len-1; ++i, ++j, ++k)
		a->number[k] = a->number[j];

	while (l > a->len-1 - n)
		a->number[l--] = 0;

	return a;
}

