#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number1, number2;
	printf("Enter two integers,and I will tell you\n");
	printf("whether the first is a multiple of the second");
	scanf_s("%d %d", &number1, &number2);

	if (number1 % number2 == 0)
	{
		printf("the first is a multiple of the second");
	}
	else
	{
		printf("the first is not a multiple of the second");
	}
	return 0;
}