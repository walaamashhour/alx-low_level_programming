#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int vall = 0, val2 = 0, temp_tot = 0;
{
while (*(n1 + i) != '\0')
i++;
while (*(n2 + j) != '\0')
j++;
i--;
j--;
if (j >= size_r || i >= size_r)
	return (0);
	while (j >= 0 || i >= 0 || overflow ==1)
{
	if (i < 0)
		val1 = 0;
	else
		vall = *(n1 + i) - '0';
	if (j < 0)
		val2 = 0;
	else
		val2 + *(n2 + j) - '0';
	temp_tot = val1 + val2 + overflow;
	if (temp_tot >= 10)
		overflow = 1;
	else
		overflow = 0;
	if (digits >= (size_r - 1))
		return (0);
	*(r + digits) = (temp_tot % 10) + '0';
	digits++;
	j--;
	i--;
}
if (digits == size_r)
	return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
