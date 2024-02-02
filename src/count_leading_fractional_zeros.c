#include "internal.h"

/* 2016-2024 Porcha.  All rights reserved */

size_t count_leading_fractional_zeros(fxdpnt *a)
{
	size_t pos = a->lp;
	size_t ret = 0;
	if (a->lp == 1 && a->number[0] == 0)
		;
	else if (a->lp > 0) {
		return 0;
	}
	while (a->number[pos] == 0) {
		pos++;
		ret++;
	}
	return ret;
}


