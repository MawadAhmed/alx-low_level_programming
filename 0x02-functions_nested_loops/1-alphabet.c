#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * description - using _putchar function to print alphabet, in lowercase. 
 * Return: Always 0.
 */
int main(void)
{
	char str;
	for (str='a'; str <= 'z' ; str++)
		_putchar(str);
	_putchar('\n');
	return (0);
}
