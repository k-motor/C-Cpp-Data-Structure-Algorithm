#include <stdio.h>


int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

void swap(int *a, int *b);

int main(void)
{
	int a, b;
	int result;:

	scanf("%d %d",&a, &b);

	result = add(a, b);
	printf("result : %d\n", result);

	result = sub(a, b);
	printf("result : %d\n", result);

	printf("before a : %d b: %d\n", a, b);
	swap(a, b);
	printf("after a : %d b: %d\n", a, b);

	result = mul(a, b);
	printf("result : %d\n", result);
	
	result = div(a, b);
	printf("result : %d\n", result);
	return 0;
}

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

int div(int a, int b)
{
	return a / b;
}
