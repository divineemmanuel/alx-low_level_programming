#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: The first int for swapping
 * @b: The second int for swapping
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
