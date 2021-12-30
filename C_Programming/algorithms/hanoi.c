#include<stdio.h>

void hanoi(int num, char src, char dst, char temp)
{
	if(num<1)
	{
		return;
	}

	hanoi(num-1, src, temp, dst);
	printf("\n disk %d, move  %c to %c", num, src, dst);
	hanoi(num-1, temp, dst, src);
}

int main(void)
{

	int num = 4;
	hanoi(4, 'a', 'c', 'b');
	return 0;
}
