#include "main.h"

/**
 * _is lower - function to check if
 * character is lowercase
 *
 * @c: checks input of function
 *
 * Return: returns 1 if 'c' is lowercase
 * otherwise always 0 (success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
