#include "main.h"
/**
 * create_array - function that creates an array of chars.
 * @size : size of the array.
 * @c : initializes char.
 *
 * Return: Returns a pointer to the array, or NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *s = malloc(size);

	if (size == 0 || s == NULL)
		return (NULL);
	while (size--)
		s[size] = c;
	return (s);
}
