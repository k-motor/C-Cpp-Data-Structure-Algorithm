#include<stdio.h>
#include<stdlib.h>

#define	min(x, y)     ((x > y) ? (y) : (x))

int rainWater(int *arr, int size)
{
	int water = 0;
	int i;
	int *leftHigh = (int *)calloc(size, sizeof(int));
	int *rightHigh = (int *)calloc(size, sizeof(int));
	int max = arr[0];
	leftHigh[0] = arr[0];
	
	for(i = 1; i < size; i++)
	{
		if( max < arr[i] )
		{
			max = arr[i];
		}
		leftHigh[i] = max;
	}

	max = arr[size -1];
	rightHigh[size-1] = arr[size-1];

	for(i = size -2; i>=0; i--)
	{
		if(max < arr[i])
		{
			max = arr[i];
		}
		rightHigh[i] = max;
	}

	for(i=0; i< size; i++)
	{
		water += min(leftHigh[i], rightHigh[i]) - arr[i];
	}

	printf("total of rain : %d\n", water);
	return water;
}

int main(void)
{
	int arr[] = {4, 0, 1, 5};

	rainWater(arr, 4);

	return 0;
}
