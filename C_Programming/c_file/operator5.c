#include<stdio.h>

int main(void)
{
	int a = 21;
	int c;

	c = a;
	printf("1: %d\n", c);
	
	c += a;
	printf("2: %d\n", c);
	
	c -= a;
	printf("3: %d\n", c);
	
	c *= a;
	printf("4: %d\n", c);
	
	c /= a;
	printf("5: %d\n", c);

	c = 200;
	c %= a;
	printf("6: %d\n", c);

	c <<= 2;
	printf("7: %d\n", c);

	c >>= 2;
	printf("8: %d\n", c);
	
	c &= 2;

	c = c & 2;
	printf("9: %d\n", c);

	c ^= 2;
	printf("10: %d\n", c);
	
	c |= 2;
	printf("11: %d\n", c);

	return 0;
}
