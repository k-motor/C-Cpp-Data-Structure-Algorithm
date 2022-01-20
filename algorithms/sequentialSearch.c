#include<stdio.h>

int sequentialSearch(int arr[], int size, int value)
{

	int i = 0;

	for(i = 0; i < size; i++)
	{
		if(value == arr[i])
			return i;
	}

	return -1;
}

int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};

	printf("%d\n", sequentialSearch(arr, 5, 3));

	return 0;
}

