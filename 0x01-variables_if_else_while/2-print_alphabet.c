#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program for aplhabet letters
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		++alph;
	}
	putchar('\n');

	return (0);
}
