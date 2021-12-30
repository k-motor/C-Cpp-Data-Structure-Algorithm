#include<stdio.h>

int main(void)
{
	int a = 10;
	
	while( a < 20 )
	{
		printf("number : %d\n", a);
		a++;
		
		if( a > 15 )
		{
			break;
		}
		else
		{
			//do nothing
		}
	}
	return 0;
}
