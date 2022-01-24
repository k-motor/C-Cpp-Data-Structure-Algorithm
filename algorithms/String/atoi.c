#include<stdio.h>

int myAtoi(char *str)
{
	int res = 0;

	while(*str)
	{
		printf("%c\n", *str);
		res = (res << 3) + (res << 1) + (*str - '0');
		str++;
	}

	return res;
}

int main(void)
{
	char *str = "2000";
	
	printf("%d\n", myAtoi(str));
	return 0;
}
