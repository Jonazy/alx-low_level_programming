#include"main.h"
#include<string.h>
#include<stdio.h>

/**
 * print_rev - function that prints a string,
 * in reverse, followed by a new line
 *
 * @s: argument
 *
 * Return: return 0 (success)
 */

void print_rev(char *s)
{
	s = strrev(s);

	puts(s);
	return (0);
}
