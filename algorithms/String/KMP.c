#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void KMPPreprocess(char *pattern, int *shiftArr)
{
	const int m = strlen(pattern);
	int i = 1, j = 0;
	shiftArr[i] = 0;

	while( i < m )
	{
		while( j > 0 && pattern[i] != pattern[j])
		{
			j = shiftArr[j-1];
		}

		if(pattern[i] == pattern[j])
		{
			shiftArr[i] = ++j;
		}
		printf("1. pattern[%d] = %d\n", i, shiftArr[i]);
		
		i++;
	}
}

void KMP(char *text, char *pattern)
{
	int i = 0, j = 0, count = 0;
	const int n = strlen(text);
	const int m = strlen(pattern);

	int *shiftArr = (int *)calloc(m + 1, sizeof(int));
	KMPPreprocess(pattern, shiftArr);
	for( i = 0; i < n; i++)
	{
		while( j > 0 && text[i] != pattern[j])
		{
			j = shiftArr[j - 1];
		}

		if(text[i] == pattern[j])
		{
			if(j == m - 1)
			{
				printf("%d번째 찾았다\n", i - m + 2);
				j = shiftArr[j];
			}
			else
			{
				j++;
			}
		}
	}
}

int main(void)
{
	char *text = "ababacabacaabacaaba";
	char *pattern = "abacaaba";
	int res = 0;

	KMP(text, pattern);

}
