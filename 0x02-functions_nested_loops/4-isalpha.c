#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character.
 *
 * @c : check input of function.
 *
 * Return: returns 1 if c is alphabetic character otherwise 0 (success).
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	return (1);
	else
		return (0);
}
