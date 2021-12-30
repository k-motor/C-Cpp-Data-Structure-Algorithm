#include<stdio.h>

int sumArray(int arr[], int size)
{

	int total = 0;
	int index = 0;

	for(index = 0; index < size; index++)
	{
		total = total + arr[index];
	}

	return total;
}

int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};

	printf("sum array : %d\n", sumArray(arr, 5));

	return 0;
}

