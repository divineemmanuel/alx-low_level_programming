<<<<<<< HEAD
#include "main.h"
=======
#include <stdio.h>
>>>>>>> dce35b9076fa90b064d9ba4e16d579e28221e88e
/**
 * print_square - Prints a squareusing the character #.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int height, width;

	if (size > 0)
	{
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
			{
				putchar('#');
			}
			putchar('#');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
