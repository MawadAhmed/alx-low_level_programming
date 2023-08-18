#include "main.h"
/**
 * print_most_numbers - function that that prints the numbers, from 0 to 9 and Do not print 2 and 4.
 *
 * Return: return always 0 (success).
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (i = 2 || i = 4)
			continue;
		_putchar(i + 48);
	}
	_putchar('\n');
}
