#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program to print all possible different
 *              combinations of two digits.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int first_digit = 0, second_digit = 0;

	while (first_digit <= 89)
	{
		while (second_digit <= 89)
		{
			if (first_digit != second_digit && first_digit < second_digit)
			{
				putchar(first_digit + 48);
				putchar(second_digit + 48);

				if (first_digit + second_digit != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++second_digit;
		}
		++first_digit;
	}
	putchar('\n');

	return (0);
}
