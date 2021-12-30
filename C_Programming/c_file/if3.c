#include<stdio.h>

int main(void)
{
	int a = 100;

	if( a > 90 )
	{
		printf("1. A\n");
	}
	if( a > 80 )
	{
		printf("1. B\n");
	}


	if( a > 90 )
	{
		printf("2. A\n");
	}
	else if( a > 80 )
	{
		printf("2. B\n");
	}

	return 0;
}
