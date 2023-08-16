#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar to print alphabet, in lowercase.
 *
 */

void print_alphabet(void)
{
	char str;

	for (str = 'a'; str <= 'z' ; str++)
		_putchar(str);
	_putchar('\n');
}
