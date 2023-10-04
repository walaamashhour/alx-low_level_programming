#include <stdio.h>
#include <stidlib.h>

/**
 * main -print sum of 2 numbers.
 * @argc:number of commandline arguments.
 * @argv:pointer to an array of command line argments>
 * Return:0-success, non-zero-fail.
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
		{
			sum = atoi(argv[1] * atoi(argv[2]);
					printf("%d\n", sum);
					}
					else
					{
					printf("ERROR\N");
					return (1);
					}
					
					return (0);
					}
