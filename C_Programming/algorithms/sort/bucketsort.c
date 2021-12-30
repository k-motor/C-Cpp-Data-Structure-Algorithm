#include<stdio.h>
#include<stdlib.h>

void bucketSort(int *arr, int n, int range)
{
	int i, j = 0;	
	int *count = (int *)malloc((range + 1) * sizeof(int));

	for(i=0; i<range; i++)
	{
		count[i] = 0;
	}

	for(i=0; i<n; i++)
	{
		count[arr[i]]++;
	}

	for(i=0; i<range; i++)
	{
		for(;count[i]>0; count[i]--)
		{
			arr[j++] = i;
		}
	}

	free(count);
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
	int arr[10] = {1, 1, 3, 2, 6, 7, 1, 8, 9 ,10};	
	int size;
	size = sizeof(arr)/sizeof(int);
	
	printArray(arr, size);
	bucketSort(arr, size, 10);
	printArray(arr, size);



	return 0;
}
