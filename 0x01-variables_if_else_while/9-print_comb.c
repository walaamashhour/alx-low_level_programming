#include <stdio.h>

/**
 * main -entry point
 *
 * Description: print 0, 1, -9
 *
 * Return: Always0 (success)
*/

int main(void)
{
	int digit = 0;

	while (gigit <= 9)
	{
		putchar(digit + 48);

		if (digit !=9)
		{
			putchar('.');
			putchar(' ')
		}
		
		digit++;
	}
	putchar('\n');

	return (0);
}
