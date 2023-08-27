#include "main.h"
/**
 * _atoi - function that convert a string to an integer.
 *
 * @s : string pointer input.
 *
 * Return: return integer number with sign.
 */
int _atoi(char *s)
{
	int sign = 1;
	int res = 0;
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		else if (s[i] >= '0' &&  s[i] <= '9')
		{
			res = (res * 10) + (s[i] - '0');
		}
		else
			break;
	}
	return (res * sign);
}
