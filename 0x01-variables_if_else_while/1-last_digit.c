#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print if the number is positive, zero, or negative 
 * 
 * Description: using the main function 
 * this program prints "programming is positive, zero, or negative
 * Return: 0
 */
int n;
int l;

sprand(time(0));
n = rand () - RAND_MAX / 2;
l = n % 10;

if (1 > 5)
{
	printf("last digit of %d is %d and is greater than 5\n", n, l);
}
else if (1 == 0)
{
	printf("last digit of %d is % and is 0\n", n, l);
}
else
{
	printf("last digit of %d is less than band not 0\n", n, l);
}
return(0);
}