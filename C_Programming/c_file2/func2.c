#include <stdio.h>

double getAverage(int arr[], int size)
{
	int sum = 0;
	
	int i = 0;

	float avg;

	for(i = 0; i < size; i++)
	{
		sum += arr[i];
	}

	avg = (float)(sum/size);

	return (double)avg;
}

int main(void)
{
	int balance[5] = {1,2,3,4,5};
	int size = 5;
	double avg;
	
	avg = getAverage(balance, size);

	printf("%lf\n", avg);

	return 0;
}

