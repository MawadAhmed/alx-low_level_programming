#include "main.h"
/**
 * more_numbers - function that prints 10 times numbers from 0-14.
 *
 * Return: returns always 0 (success).
 */
void more_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9; i++)
	{
		int j;

		for (j = 0 ; j <= 14 ; j++)
		{
			if (j > 9)
			{
			_putchar(49);
			}
			_putchar(j + 48);
		}
		_putchar('\n');
	}
}
