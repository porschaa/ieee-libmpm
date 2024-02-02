#include <libmpm/libmpm.h>

int main(int argc, char *argv[])
{
	if (argc < 4 )
		arb_error("Needs 3 args, such as: 123 123 base");
	
	int base = strtoll(argv[3], NULL, 10);
	fxdpnt *a, *b, *c = NULL;
	a = arb_str2fxdpnt(argv[1]);
	b = arb_str2fxdpnt(argv[2]);
	c = arb_add(a, b, c, base);
	arb_print(c);
	arb_free(a);
	arb_free(b);
	arb_free(c);

	return 0;
}

