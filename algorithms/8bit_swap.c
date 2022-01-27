#include<stdio.h>

void swap(unsigned char a, unsigned char b)
{
	a ^= b ^= a ^= b;
	/*
	 *  a = 5,    0000 0101
	 *  b = 8,    0000 1000
	 *  a ^= b => 0000 1101 => a
	 *
	 *  a = 13 => 0000 1101
	 *  b = 8  => 0000 1000
	 *  b ^= a => 0000 0101 => b
	 *  
	 *  b = 5  => 0000 0101
	 *  a = 13 => 0000 1101
	 *  a ^= b => 0000 1000 => a
	 *
	 *  a = 1000 => 8
	 *  b = 0101 => 5
	 *
	 * */
	printf("a = %d, b = %d\n", a , b);
}

int main(void)
{
	unsigned char a = 15;
	unsigned char b = 20;

	printf("before swap\n");
	printf("a = %d, b = %d\n", a , b);
	
	printf("after swap\n");
	swap(a, b);

	return 0;
}
