#include "main.h"
/**
 * _strncat - function concatenates two string
 *
 * @dest: pointer to destion input
 * @src: pointer to source input
 * @n: integer input
 * Return: returns a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int s1, s2;

	s1 = 0;

	while (dest[s1])
		s1++;

	for (s2 = 0 ; s2 < n && src[s2] != '\0' ; s2++)
		dest[s1 + s2] = src[s2];
	dest[s1 + s2] = '\0';
	return (dest);
}
