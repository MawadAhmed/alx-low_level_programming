#include "main.h"
/**
 * _strlen - a function that returns the length of a string.
 *
 * @s : string parameter input.
 *
 * Return: length of string.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0 ; *s != '\0' ; s++)
		i++;
	return (i);

}
