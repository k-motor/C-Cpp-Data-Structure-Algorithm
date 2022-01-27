#include<stdio.h>
#include<string.h>

void ReverseWordByWord(char *str)
{
	int i = strlen(str) - 1;
	int j = strlen(str) - 1;
	int k = 0, p = 0;
	char reverse[100];
	
	while( i > 0)
	{
		if(str[i] == ' ')
		{
			p = i + 1; 
			while( p <= j)
			{
				reverse[k++] = str[p++];
			}

			reverse[k++] = ' ';

			j = i - 1;
		}
		i--;	
	}

	for(i=0; i <= j;k++, i++)
	{
		reverse[k] = str[i];
	}	

	reverse[k] = '\0';

	printf("str = %s\n", reverse);
}

int main(void)
{
	char *str = "Dog is cute";
	ReverseWordByWord(str);

	//printf("%s\n", str);
	return 0;
}

