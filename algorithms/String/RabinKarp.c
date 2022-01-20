#include<stdio.h>
#include<string.h>

int RabinKarp(char *txt, char *pattern)
{
	const int n = strlen(txt);
	const int m = strlen(pattern);	

	int i, j;
	int prime = 101;
	int powm  = 1;
	int TextHash = 0;
	int PatternHash = 0;

	if( m == 0 || m>n)
	{
		return -1;
	}

	for(i = 0; i < m - 1; i++)
	{
		powm = (powm << 1) % prime;
		printf("pown = %d \n", powm);
	}

	for(i = 0; i < m; i++)
	{
		PatternHash = ((PatternHash << 1) + pattern[i]) % 101;
		printf("PatternHash = %d \n", PatternHash);
		TextHash = ((TextHash << 1) + txt[i]) % 101;
		printf("TextHash = %d \n", TextHash);
	}

	for(i = 0; i <= (n - m); i++)
	{
		if(TextHash == PatternHash)
		{
			for(j = 0; j < m; j++)
			{
				if(txt[i + j] != pattern[j])
				       break;	
			}
			if(j == m)
			{
				return i;
			}
		}
		TextHash = ( ((TextHash - txt[i] * powm) << 1) + txt[i+m]) % prime;
		if( TextHash < 0 )
		{
			TextHash = (TextHash + prime);
		}
	}
}

int main(void)
{
	char *txt = "abababbccaaa";
	char *pattern = "ababbc";

	int num;
	num = RabinKarp(txt, pattern);
	printf("RabinKarp = %d \n", num);
	
	return 0;
}
