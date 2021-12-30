#include<stdio.h>

int main(void)
{
	int a = 5;
	int b = 20;
	int c;

	printf("1: %d\n", a && b);
	printf("2: %d\n", a || b);

	a = 0;
	b = 10;

	printf("3: %d\n", a && b);
	printf("4: %d\n", !(a && b));
	
}
