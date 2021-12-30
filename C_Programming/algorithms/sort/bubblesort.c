#include<stdio.h>
int less(int value1, int value2)
{
	return value1 < value2;
}

int more(int value1, int value2)
{
	return value1 > value2;
}

void bubbleSort(int arr[], int size)
{
	int i, j, temp;
	for(i = 0; i < (size - 1); i++)
	{
		for(j = 0; j < size -i -1; j++)
		{
			if(more(arr[j], arr[j+1]))
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}			
		}
	}
}

void printArray(int arr[], int size)
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
	int arr[10] = {4, 5, 3, 2, 6, 7, 1, 8, 9, 10};

	bubbleSort(arr, sizeof(arr) / sizeof(int));
	printArray(arr, sizeof(arr) / sizeof(int));
}
