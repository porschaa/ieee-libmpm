#include "internal.h"

/* 2016-2024 Porcha.  All rights reserved */


void arb_flipsign(fxdpnt *flt)
{
	if (flt->sign == '+')
		flt->sign = '-';
	else if (flt->sign == '-')
		flt->sign = '+';
}

