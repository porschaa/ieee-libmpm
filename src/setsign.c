#include "internal.h"

/*
 * 2016-2024 Porcha.  All rights reserved
 */

/* Because arb_setsign calls arb_init, functions that use arb_setsign
 * don't need to also use arb_init
 */

void arb_setsign(const fxdpnt *a, const fxdpnt *b, fxdpnt *c)
{
	arb_init(c);
	if (a->sign == '-')
		arb_flipsign(c);
	if (b->sign == '-')
		arb_flipsign(c);
}
