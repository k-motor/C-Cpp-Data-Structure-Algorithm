#include<stdio.h>

void swap(int *arr, int x, int y)
{
	int temp;
	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}

void partion012(int *arr, int size)
{
	int left = 0;
	int right = size - 1;
	int i = 0;

	while(i <= right)
	{
		if(arr[i] == 0)
		{
			swap(arr, i, left);
			i += 1;
			left += 1;
		}
		else if(arr[i] == 2)
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
	int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
	int size;
	size = sizeof(arr) / sizeof(int);

	partion012(arr, size);
	printArray(arr, size);
	return 0;
}
