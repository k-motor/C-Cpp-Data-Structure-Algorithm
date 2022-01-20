#include<stdio.h>

int less(int value1, int value2)
{
	return value1 < value2;
}

int more(int value1, int value2)
{
	return value1 > value2;
}

void insertionSort(int arr[], int size)
{
	int temp, i, j;
	for(i = 1; i < size; i++)
	{
		temp = arr[i];
		for(j=i; (j > 0 && more(arr[j-1], temp)); j--)
		{
			arr[j] = arr[j-1];
		}
		arr[j] = temp;
	}
}

void printArray(int arr[], int size)
{
	int i;

	for(i=0; i<size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(void)
{
	int arr[10] = {4, 5, 3, 2, 6, 7, 1, 8, 9 ,10};

	insertionSort(arr, sizeof(arr) / sizeof(int));
	printArray(arr, sizeof(arr) / sizeof(int));
	return 0;
}
