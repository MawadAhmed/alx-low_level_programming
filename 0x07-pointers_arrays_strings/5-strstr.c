#include "main.h"
/**
 * _strstr - function finds the first occurrence of the substring.
 *
 * @haystack : string pointer input.
 * @needle : string pointer input.
 *
 * Return: pointer to the beginning of the located substring or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0 ; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] == haystack[i])
			{
				return (j);
			}
		}
	}
	return ('\0');
}
