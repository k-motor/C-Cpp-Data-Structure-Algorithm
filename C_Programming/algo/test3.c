#include<stdio.h>

int main(void)
{

	int a, b;
	int n1, n2, n3, n4;
	
	scanf("%d %d", &a, &b);

	n1 = (a * (b % 10));
	n2 = (a * ((b % 100) / 10) );
	n3 = (a * (b / 100));
	n4 = n3 * 100 + n2 * 10 + n1;

	printf("%d\n", n1);
	printf("%d\n", n2);
	printf("%d\n", n3);
	printf("%d\n", n4);

	return 0;
}
