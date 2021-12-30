#include<stdio.h>

int main(void)
{
	int a = 10;
	
label:	do
	{
		if( a == 15)
		{
			a = a + 1;
			goto label;
		}

		printf("number : %d\n", a);
		a++;
	}	
	while( a < 20 );

	return 0;
}
