#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 *
 * @s : the address of memory to print.
 * @c : characters value to copy in address.
 *
 * Return: return pointer to s, or NULL if c not found.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
