#include "internal.h"

/* 2016-2024 Porcha.  All rights reserved */


void _arb_copy_core(UARBT *b, UARBT *a, size_t len)
{
	memcpy(b, a, len * sizeof(UARBT));
}

fxdpnt *arb_copy(fxdpnt *b, const fxdpnt *a)
{ 
	b = arb_expand(b, a->len);
	b->len = a->len;
	b->lp = a->lp;
	b->sign = a->sign;
	_arb_copy_core(b->number, a->number, a->len);
	return b;
}

