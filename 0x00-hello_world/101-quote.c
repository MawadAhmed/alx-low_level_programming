#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: 1 (unSuccess)
 */
int main(void)
{
	char qou[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, qou, 59);
	return (1);
}
