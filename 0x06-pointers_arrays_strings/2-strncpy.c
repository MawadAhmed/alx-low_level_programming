#include "main.h"
/**
 * *_strncpy - function that copies a string
 *
 * @dest: pointer to destion input
 * @src: pointer to source input
 * @n: integer input
 * Return: returns a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; s2 < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
