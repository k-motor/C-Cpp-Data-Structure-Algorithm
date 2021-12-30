#include<stdio.h>

int main(void)
{
	int a = 10;
	
	while( a < 20 )
	{
		printf("number : %d\n", a);
		a++;

		if ( a == 15 )
			continue;
		printf("a\n");

	}
	return 0;
}
