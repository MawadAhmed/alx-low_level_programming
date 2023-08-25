#include "main.h"
/**
 * _strcat - function concatenates two string
 *
 * @dest: pointer to destion input
 * @src: pointer to source input
 *
 * Return: returns a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int s1, s2;

	s1 = 0;

	while (dest[s1])
		s1++;

	for (s2 = 0 ; src[s2] ; src++)
	{
		dest[s1] = src[s2];

		return (dest);
}
