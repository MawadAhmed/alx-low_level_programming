#include "main.h"
/**
 * swap_int -  function swaps the values of two integers.
 *
 * @a : int parameter.
 * @b : int parameter.
 *
 * Returun: nothing.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
