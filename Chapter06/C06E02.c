/**
 * \file C06E02.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Prints dollar signs by the use of nested loops.
 * \return 0 upon successful execution.
 */
int main(void)
{
	int i, j;

	for(i = 1; i < 6; i++)
	{
		for(j = 0; j < i; j++)
		{
			printf("$");
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
