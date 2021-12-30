#include<stdio.h>

int main(void)
{
	char grade = 'B';

	printf("%d %c\n", grade, grade);

	switch(grade)
	{
		case 'A':
			printf("A\n");
		break;

		case 'B':
		case 'C':
			printf("B or C\n");
		break;

		case 'D':
			printf("D\n");
		break;
		
		case 'F':
			printf("F\n");
		break;
		
		default:
			printf("N\n");
		break;
	}

	return 0;
}
