#include <main.h>
/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s : the address of memory to print.
 * @b : character value to print in address.
 * @n : the size of the memory to print.
 *
 * Return: Return a pointer s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for  (i = 0 ; i < n; i++)
		s[i] = b;
	s[i] = '\0';
	return (s);
}
