#include <libmpm/libmpm.h>

int main(int argc, char *argv[])
{
	if (argc < 4)
	{
		printf("needs 3 args: bignum base scale\n");
		return 0;
	}

	int base = strtoll(argv[2], NULL, 10);
	int scale =  strtoll(argv[3], NULL, 10);
	fxdpnt *a = NULL;
	a = arb_str2fxdpnt(argv[1]);
	a = nsqrt(a, base, scale);
	arb_print(a);
	arb_free(a);
	return 0;
}

