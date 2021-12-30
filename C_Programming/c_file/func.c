#include <stdio.h>

int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);

int main(void)
{
	int a,b;
	int c;
	scanf("%d %d", &a, &b);

	c = add(a, b);
	printf("%d + %d = %d\n",a,b,c);
	
	c = sub(a, b);
	printf("%d - %d = %d\n",a,b,c);
	
	c = mul(a, b);
	printf("%d * %d = %d\n",a,b,c);
	
	c = div(a, b);
	printf("%d / %d = %d\n",a,b,c);

	return 0;
}

int add(int a,int b)
{
	int result;
	result = a + b;
	return result;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a * b;
}
int div(int a,int b)
{
	return a / b;
}

