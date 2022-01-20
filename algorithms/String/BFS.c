#include<stdio.h>
#include<string.h>

int BruteForceSearch(char *txt, char *pattern)
{

	const int n = strlen(txt);
	const int m = strlen(pattern);

	int i, j;

	for(i = 0; i <= n - m; i++)
	{
		for(j = 0; j < m; j++)
		{
			if(pattern[j] != txt[i+j])
			{
				break;
			}
		}
		if( j == m )
			return i;
	}

	return -1;
}

int main(void)
{
	char *txt = "applepizzatomato";
	char *pattern = "pizza";
	
	int num;

	num = BruteForceSearch(txt,pattern);

	printf("%d \n", num);

	return 0;
}
