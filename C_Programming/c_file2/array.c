#include<stdio.h>

int main(void)
{

	int str1[] = {1,2,3,4,5};
	int str2[] = {5,4,3,2,1};

	int temp[5];
	
	int i;

	for(i = 0; i<5; i++)
	{
		temp[i] = str1[i];
	}
	
	for(i = 0; i<5; i++)
	{
		str1[i] = str2[i];
		str2[i] = temp[i];
	}

	for(i=0; i<5; i++)
	{
		printf("str1[%d] = %d\n", i, str1[i]);
		printf("str2[%d] = %d\n", i, str2[i]);
	}

	return 0;
}
