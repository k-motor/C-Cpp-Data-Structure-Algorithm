#include<stdio.h>

void selectionSort(int arr[], int size)
{
	int i, j, temp, max;
	
	for(i = 0; i < size -1; i++)
	{
		max = 0;
		for(j = 1; j <= (size -1 -i); j++)
		{
			if(arr[j] > arr[max])
			{
				max = j;
			}
		}

		temp = arr[size -1 -i];
		arr[size -1 -i] = arr[max];
		arr[max] = temp;
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
	int arr[] = {10, 3, 1, 4, 9, 11, 2, 5};

	selectionSort(arr, sizeof(arr) / sizeof(int));

	printArray(arr, sizeof(arr) / sizeof(int));
	return 0;
}
