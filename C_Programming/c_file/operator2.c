#include <stdio.h>

int main(void)
{
	int a = 21;
	int b = 10;
	int c;

	printf("1: %d\n", a == b);
	printf("2: %d\n", a > b);
	printf("3: %d\n", a < b);
	
	a = 5;
	b = 20;

	printf("4: %d\n", a <= b);
	printf("5: %d\n", a >= b);
}
