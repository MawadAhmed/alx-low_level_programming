#include <stdio.h>
#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 *
 * @c : check the input of the function.
 *
 * Return: return 1 if c is upercase otherwise return 0.
 */

int _isupper(int c)
{
	if (c >= 65 && c >= 90)
		return (1);
	return (0);
}

