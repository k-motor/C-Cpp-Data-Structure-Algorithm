#include<stdio.h>
#include<string.h>

int isUniqueChar(char *str)
{
	int bitarr = 0;
	int size = strlen(str);
	int i;
	char c;
	for(i=0; i<size; i++)
	{
		c = str[i];

		if( 'A' <= c && 'Z' >= c)
		{
			c = c - 'A';
		}	
		else if( 'a' <= c && 'z' >= c)
		{
			c = c - 'a';
		}
		else
		{
			return 0;
		}	
	
		printf("bitarr = %d \n", bitarr);
		
		if(bitarr & ( 1 << c ))
		{
			printf("bitarr = %d \n", bitarr);
			printf("not unique\n");
			return 0;
		}
		
		bitarr = (1 << c);

	}

	return 1;

}

int main(void)
{
	char *str = "ABCLE";

	printf("%d \n", isUniqueChar(str));
	return 0;
}
