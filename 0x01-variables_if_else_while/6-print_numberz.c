#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print 0-9 using putchar
 *		 while using int variable
 *
 * Return: Always  0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ASCII representation*/
		putchar(digit + '0'0);
		digit++;
	}
	putchar('\n')

		return (0);
}
