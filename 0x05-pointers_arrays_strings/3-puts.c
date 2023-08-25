#include "msin.h"

/**
 * _puts _ function that prints a string, followed by a new line
 *
 * @str : string parameter input.
 *
 * Return: return 0.
 */

void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str + 0);
                str++;
        _putchar('\n');
}

