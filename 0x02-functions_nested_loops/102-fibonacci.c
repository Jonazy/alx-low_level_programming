#include"main.h"

/**
 * main - Entry point
 *
 * Description: program that prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int count;
	unsigned long a = 0, b = 1, sum;

	for (count = 0; count < 50; ++count)
	{
		sum = a + b;
		printf("%lu", sum);

		a = b;
		b = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
