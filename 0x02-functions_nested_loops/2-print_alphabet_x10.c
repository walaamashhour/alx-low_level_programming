#include"main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 *
 */

void print _alphabet_x10(void)
{
	int line, ch;

	for (line = o; line <= 9; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchart(ch);
		_putchar('\n')
	}
}
