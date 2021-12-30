#include <stdio.h>

int main(void)
{
	unsigned int a = 60;
	unsigned int b = 13;
	int c = 0;

	c = a & b;
	printf("1: %d\n", c);
	
	c = a| b;
	printf("2: %d\n", c);
	
	c = a ^ b;
	printf("3: %d\n", c);
	
	c = ~a;
	printf("4: %d\n", c);
	
	c = a << 2;
	printf("5: %d\n", c);
	
	c = a >> 2;
	printf("6: %d\n", c);

	return 0;
}
