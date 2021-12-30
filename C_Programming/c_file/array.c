#include <stdio.h>


int main(void)
{
	int a[5][2] = {{1,2},{3,4},{5,6},{7,8},{9,10}};
	int b[5][2];
	
	int i,j;

	for(i = 0; i<5; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("a:%d ", a[i][j]);
			b[i][j] = a[i][j];
			printf("b:%d ", b[i][j]);
		} 
	}

	return 0;
}
