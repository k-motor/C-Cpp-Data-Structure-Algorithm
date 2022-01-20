#include<stdio.h>

void printInt(unsigned int number, const int base)
{

	char *con = "0123456789ABCDEF";
	char digit = number % base;
	if(number /= base)
	{
		printInt(number, base);
	}

	printf("%c", con[digit]);
}
int main(void)
{
	printInt(19, 16);
	return 0;
}
