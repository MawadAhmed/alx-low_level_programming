#include "main.h"

/**
 * print_rev - function that prints a string, in reverse, followed by a new line.
 *
 * @s : string parameter input.
 *
 * Return: return 0.
 */

void print_rev(char *s)
{
	for (*s = '\0'; s[0] ; s--)
	{
		_putchar(*s+0);
	}
	_putchar('\n');
}
