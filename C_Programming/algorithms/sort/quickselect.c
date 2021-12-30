#include<stdio.h>

void swap(int *arr, int x, int y)
{
	int temp;
	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}

void quickselect(int *arr, int lower, int upper, int k)
{
	if(upper <= lower)
		return;

	int pivot = arr[lower];
	int start = lower;
	int stop = upper;

	while(lower < upper)
	{
		while(lower < upper && arr[lower] <= pivot)
			lower++;

		while(lower < upper && arr[upper] > pivot)
			upper--;

		if(lower < upper)
			swap(arr, upper, lower);
	}

	swap(arr, upper, start);

	if(k < upper)
		quickselect(arr, start, upper -1, k);
	if(k > upper)
		quickselect(arr, upper+1, stop, k);	
}
void printArray(int *arr, int size)
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
	int arr[] = {1, 3, 2, 10, 11, 9, 5, 7 , 8};
	int size;
	size = sizeof(arr) / sizeof(int);

	quickselect(arr, 0, size-1, 5 -1);
	printArray(arr, size);
	printf("%d\n", arr[5 - 1]);
}
