#include "internal.h"

/* 2016-2024 Porcha.  All rights reserved */

fxdpnt *hrdware2arb(size_t a)
{
	char str[50];
	sprintf(str, "%zu", a);
	fxdpnt *ret = arb_str2fxdpnt(str);
	return ret;
}

