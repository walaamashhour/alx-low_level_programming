#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minmum number of coins
 * to make change for an amount of money.
 * @argc: number of commandline argument.
 * @argv: pointer to an array of command line argument.
 * Return: 0-success, null-zero-fail.
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, leastcents = 0, money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (money >= cents[i])
			{
				leastcents += money / cents[i];
				money = money % cents[i];
				{
					break;
				}
			}
		}
		printf("%d\n", leastcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
