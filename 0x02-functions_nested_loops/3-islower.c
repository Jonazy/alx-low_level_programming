#include"main.h"

/**
 * _islower(int c) - Entry point
 *
 * Description: a function that checks for lowercase character.
 *
 * Return: 1 if c is lowercase else 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
