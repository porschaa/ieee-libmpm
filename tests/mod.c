#include <libmpm/libmpm.h>

int main(int argc, char *argv[])
{
	if (argc < 5 )
		arb_error("Needs 3 args, such as: 123 123 scale base");
 
	
	int base = strtoll(argv[3], NULL, 10);
	int scale = strtoll(argv[4], NULL, 10);

	fxdpnt *a, *b, *c;

	a = arb_str2fxdpnt(argv[1]);
	b = arb_str2fxdpnt(argv[2]);
	c = arb_expand(NULL, 1);
	c = arb_mod(a, b, c, base, scale);
	arb_print(c);
	arb_free(a);
	arb_free(b);
	arb_free(c);
	return 0;
}

