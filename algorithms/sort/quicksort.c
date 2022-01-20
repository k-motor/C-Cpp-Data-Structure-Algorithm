#include<stdio.h>

void swap(int *arr, int a, int b)
{
	int temp;
	temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}

void quicksort(int *arr, int lower, int upper)
{
	if( upper <= lower)
		return;

	int pivot = arr[lower];
	int start = lower;
	int stop = upper;

	while(lower < upper)
	{
		while(arr[lower] <= pivot)
			lower++;

		while(arr[upper] > pivot)
			upper--;

		if(lower < upper)
			swap(arr, upper, lower);
	}

	swap(arr, upper, start);
	quicksort(arr, start, upper -1);
	quicksort(arr, upper+1, stop);
}

void printArray(int *arr, int size)
{
	int i;
	for( i = 0; i< size; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");
}

int main(void)
{
	int arr[] = {5, 10, 2, 1, 3, 8, 4, 11, 7};
	int size;
	size = sizeof(arr) / sizeof(int);

	quicksort(arr, 0, size - 1);
	printArray(arr, size);
}
