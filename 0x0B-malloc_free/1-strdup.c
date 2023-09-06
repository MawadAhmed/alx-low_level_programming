#include "main.h"
/**
 * _strdup - function that returns a pointer to a newly allocated space.
 *
 * @str : string.
 *
 * Return: NULL if str = NULL.
 */
char *_strdup(char *str)
{
	int i, size;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
		;
	char *s = malloc(size * sizeof(*str) + 1);

	if (m == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = str[i];
	return (s);
}