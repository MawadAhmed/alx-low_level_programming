#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that generates random valid passwords.
 * 
 * Return : return 0;
 */
int main(void)
{
	int sum;
	char p;

	srand(time(NULL));
	while(sum <= 2000)
	{
		p = rand() % 120;
		sum =  sum + p;
		putchar(p);
	}
	putchar(3456-sum);
	return (0);
}
