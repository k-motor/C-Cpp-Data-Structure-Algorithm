#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void reverseStr(char *str)
{
	int size = strlen(str);
	int i = 0;
	char *temp;

	temp = (char *)malloc(size * sizeof(char));

	for(i = 0 ; i < size/2; i++)
	{
		temp[i] = str[i];
		str[i] = str[size-i-1];
		str[size-i-1] = temp[i];
	}
	free(temp);
}

void myitoA(int num, char *str)
{
	int i= 0;

	if(num <= 0)
	{
		num = -num;
	}

	do
	{
		str[i++] = num % 10 + '0';
	}while( (num /= 10) > 0);

	if(num < 0)
	{
		str[i++] = '-';
	}

	str[i] = '\0';

	reverseStr(str);
}

void printStr(char *str)
{
	const int size = strlen(str);
	int i;
	for(i = 0; i<size; i++)
	{
		printf("str[%d]= %c \n", i, str[i]);
	}
}

int main(void)
{
	int num = 156;
	char str[10];
	
	myitoA(num,str);
	printStr(str);
	printf("%s\n", str);
	return 0;
}
