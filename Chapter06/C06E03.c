/**
 * \file C06E03.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Prints a letter pattern using nested loops.
 * \note Assumes that a character encoding with sequential codes for the letters
 *       A to F is used on the system where the code will run.
 * \return 0 upon successful execution.
 */
int main(void)
{
	char start, end, current;

	start = 'F';
	for(end = 'F'; end >= 'A'; end--)
	{
		for(current = start; current >= end; current--)
			printf("%c", current);
		printf("\n");
	}

	return EXIT_SUCCESS;
}
