#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that generates random passwords for 101-crackme.
 * 
 * Return : return 0;
 */
int main(void)
{
	int sum;
	char p;

	srand(time(NULL));
	while(sum <= 2545)
	{
		p = rand() % 128;
		sum =  sum + p;
		putchar(p);
	}
	putchar(2772 - sum);
	return (0);
}
