#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 *
 * @s: string to modify
 *
 * Return: the resulting string
 */

char *string_toupper(char *s)
{
	return (strupr(s));
}
