#include "main.h"
/**
 * _isdigit - function that use to checks for a digit.
 *
 * @c : checks the input for function.
 *
 * Return: return 1 if c is digit if not return 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
