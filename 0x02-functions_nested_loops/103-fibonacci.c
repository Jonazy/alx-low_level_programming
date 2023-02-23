#include"main.h"

/**
 * main - Entry point
 *
 * Description: program that finds and prints the sum of the even-valued terms
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long a = 0, b = 1, sum;
	float total_sum;

	while (1)
	{
		sum = a + b;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total_sum += sum;

		a = b;
		b = sum;
	}
	printf("%.0f\n", total_sum);

	return (0);
}
