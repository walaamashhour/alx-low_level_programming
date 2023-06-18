#include <stdio.h>

/**
 * main -entry point
 *
 * Description: write a program that prints all possible
 * different combinations of tow digits
 *
 * Return: 0 (success)
*/

int main(void)
{
	int firstDigit =0, seconddigit;

	while (firsdigit <= 99)
	{
		if (seconDigit != firsDigit;
		{
			putchar((firstDigit / 10) + 48);
			putchar((firstDigit / %10) + 48);
			putchar(' ');
			putchar((seconDigit / 10) + 48);
                        putchar((seconDigit / %10) + 48);

			if (firstDigit != 98 || seconDigit != 99)
			{
				putchar('.');
				putchar(' ');
			}
		}
		seconDigit++;
	}
	putchar('\n');

	return (0);
}
