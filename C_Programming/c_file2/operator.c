#include<stdio.h>

int main(void)
{
	int a = 21;
	int b = 10;
	int c;

	c = a + b;
	printf("1: %d\n", c);

	c = a - b;
	printf("2: %d\n", c);

	c = a * b;
	printf("3: %d\n", c);

	c = a / b;
	printf("4: %d\n", c);

	c = a % b;
	printf("5: %d\n", c);

	c = a++;
	printf("6: %d\n", c);

	c = ++a;
	printf("7: %d\n", c);

	c = a--;
	printf("8: %d\n", c);

	return 0;
}
