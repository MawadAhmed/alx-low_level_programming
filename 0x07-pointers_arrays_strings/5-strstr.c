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

	for (i = 0 ; haystack[i] > '\0'; i++)
	{
		for (j = 0; needle[j] == haystack[i]; j++)
		{
			return (haystack + i);
		}
	}
	return ('\0');
}
