#include "internal.h"

/* 2016-2024 Porcha.  All rights reserved */

fxdpnt *arb_rightshift(fxdpnt *a, size_t n)
{
	a = arb_expand(a, a->len + n);
	size_t i = 0;
	size_t j = a->len -1;
	
	for (i=0;i<a->len;++i, --j) {
		a->number[j + n] = a->number[j];
	}
	a->len += n;
	size_t k = 0;
	for (k=0;k<n;++k) {
		a->number[k] = 0;
	}
	return a;
}

