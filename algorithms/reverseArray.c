#include<stdio.h>

void reverseArray(int *a, int n)
{
	int i, j;

	for(int i = 0, j = n-1; i<j; i++, j--)
	{
		a[i] ^= a[j] ^= a[i] ^= a[j];
	}
}

int main(void)
{
	int arr[2] = {3,5};

	arr[0] ^= arr[1] ^= arr[0];

	printf("%d", arr[0]);

	return 0;
}
