#include "main.h"
/**
 * _memcpy - function that copies memory area.
 *
 * @dest : the address of memory to print.
 * @src : characters value to copy in address.
 * @n : the size of the memory to print.
 *
 * Return: Return a pointer dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
