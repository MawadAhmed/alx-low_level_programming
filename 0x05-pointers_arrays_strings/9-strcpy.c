#include "main.h"
/**
 * _strcpy - function that prints n elements of an array of integers.
 *
 * @dest : integer pointer input.
 * @src : integer pointer input.
 *
 * Return: return the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
}
