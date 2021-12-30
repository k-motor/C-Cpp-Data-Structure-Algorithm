#include<stdio.h>

void swap(int *arr, int x, int y)
{
	int temp;
	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}

void rangepartion(int *arr, int size, int lower, int higher)
{
	int left = 0;
	int right = size - 1;
	int i = 0;

	while(i <= right)
	{
		if(arr[i] < lower)
		{
			swap(arr, i, left);
			i += 1;
			left += 1;
		}
		else if(arr[i] > higher)
		{
			swap(arr, i, right);
			right -= 1;
		}
		else
		{
			i += 1;
		}
	}
}

void printArray(int *arr, int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");
}

int main(void)
{
	int arr[] = {1, 21, 2, 20, 3, 19, 4, 18, 5, 17, 6, 16, 7, 15, 8, 14, 9, 13, 10, 12, 11};
	int size;
	size = sizeof(arr) / sizeof(int);

	rangepartion(arr, size, 9, 12);
	printArray(arr, size);
	return 0;
}
