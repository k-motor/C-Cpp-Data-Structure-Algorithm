#include<stdio.h>
#include<stdlib.h>
void merge(int *arr, int *tempArray, int lowerIndex, int middleIndex, int upperIndex)
{
	int lowerStart = lowerIndex;
	int lowerStop = middleIndex;
	int upperStart = middleIndex + 1;
	int upperStop = upperIndex;
	int count = lowerIndex;
	int i;

	while(lowerStart <= lowerStop && upperStart <= upperStop)
	{
		if(arr[lowerStart] < arr[upperStart])
		{
			tempArray[count++] = arr[lowerStart++];
		}
		else
		{
			tempArray[count++] = arr[upperStart++];
		}
	}

	while(lowerStart <= lowerStop)
	{
		tempArray[count++] = arr[lowerStart++];
	}

	while(upperStart <= upperStop)
	{
		tempArray[count++] = arr[upperStart++];
	}

	for(i = lowerIndex; i <= upperIndex; i++)
	{
		arr[i] = tempArray[i];
	}
}

void mergeUtil(int *arr, int *tempArray, int lowerIndex, int upperIndex)
{
	if(lowerIndex >= upperIndex)
	{
		return;
	}

	int middleIndex = (lowerIndex + upperIndex) / 2;

	mergeUtil(arr, tempArray, lowerIndex, middleIndex);
	mergeUtil(arr, tempArray, middleIndex + 1, upperIndex);
	merge(arr, tempArray, lowerIndex, middleIndex, upperIndex);
}

void printArray(int arr[], int size)
{
	int i;
	for(i = 0; i<size; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");
}
int main(void)
{
	int arr[] = {3, 10, 2, 11, 13, 1, 9, 7};
	int *temp;
	int size;

	size = sizeof(arr)/sizeof(int);
	temp = (int *)malloc(size * sizeof(int));

	mergeUtil(arr, temp, 0, size -1);

	printArray(arr, size);	
	return 0;
}
