#include <stdlib.h>
#include"main.h"

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: first argument
 * @c: second argument
 *
 * Return: a pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(char));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
