#include <stdio.h>

/**
 * main -entry point
 *
 * Description: prints all alphabet letters except q and e
 *
 * Return: Alawys 0 (success)
*/

int main(void)
{
	chart ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar ('\n');

		return (0);
}

