#include<stdio.h>

int main(void)
{
	int a, b;
	double c;
	
	scanf("%d %d", &a, &b);

	if( (a > 0) && (b < 10) )
	{
		c = ((double)a / b);

		printf("%.9lf", c);
	}

	return 0;
}	
