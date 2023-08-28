#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 *
 * @s : charater pointer input.
 * @accept : string pointer to find in the address.
 *
 * Return: return a pointer s that match accept or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ptr;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				ptr = &s[i];
				return (ptr);
			}
		}
	}
	return ('\0');
}
