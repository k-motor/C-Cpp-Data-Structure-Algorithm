#include<stdio.h>

void swap(int *arr, int x, int y)
{
	int temp;
	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}

int partion01(int *arr, int size)
{
	int left = 0;
	int right = size - 1;
	int count = 0;

	while(left < right)
	{
		while( arr[left] == 0)
		{
			left += 1;
		}
		while( arr[right] == 1)
		{
			right -= 1;
		}
		if(left < right)
		{
			swap(arr, left, right);
			count += 1;
		}
	}

	return count;
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
	int arr[] = {0, 1, 1, 0, 1, 0, 1, 1, 0, 0, 0, 1};
	int size;	
	int cnt;
	size = sizeof(arr) / sizeof(int);


	cnt = partion01(arr, size);

	printArray(arr, size);
	printf("cnt : %d\n", cnt);
	return 0;
}
