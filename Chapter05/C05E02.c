/**
 * \file C05E02.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Prints a series of integers.
 * \return 0 upon successful execution.
 */
int main(void)
{
	int start, end;

	printf("Enter an integer: ");
	scanf("%d", &start);
	end = start + 10;
	while (start <= end)
	{
		printf("%d\n", start);
		start = start + 1;
	}

	return EXIT_SUCCESS;
}
