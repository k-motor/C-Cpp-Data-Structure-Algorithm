#include<stdio.h>
#include<stdlib.h>

int strlen(char *str)
{
	int i = 0;
	for(i=0; *str++; i++);
	return i;
}

int main(void)
{
	char str[100];
	gets(str);

	printf("%d\n", strlen(str));
	return 0;
}
