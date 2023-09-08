#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main-print the last digit of a randomly generated number
 * and whether it is greater than 5, less than6, or 0.
 *
 * Return: Always 0(success)
 */
int main(void)
{
       int n;  

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  digit = n % 10;
        if (digit > 5)
                printf("Last digit of %d is %d and is greater than 5\n", n, digit);
        else if (digit == 0)
                printf("Last digit of %d is %d and is 0\n", n, digit);
        else if (digit < 6 && digit != 0)
                printf("Last digit of is %d and is %d less than 6 and not 0\n", n, digit);
        
	return (0);
}
