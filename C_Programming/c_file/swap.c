#include<stdio.h>

void swap(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}
int main(void)
{
	int a = 100;
	int b = 200;

	printf("before swap : %d, %d\n", a , b);
	
	swap(a,b);

	printf("after swap : %d, %d\n", a , b);
	return 0;
}
