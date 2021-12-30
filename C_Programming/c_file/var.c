#include<stdio.h>

int main(void)
{
	unsigned char a = 127;
	int  b = 255;
	float c = 10.1;
	double d = 111.11;

	printf("%d %d %f %lf\n", a, b, c, d);

	scanf("%d %d %f %lf", &a, &b, &c, &d);

	printf("%d %d %f %lf\n", a, b, c, d);
}
