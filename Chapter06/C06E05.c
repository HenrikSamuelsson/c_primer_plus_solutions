/**
 * \file C06E05.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Prints a mathematical table with square and cube calculations of
 *        integers.
 * \return 0 upon successful execution.
 */
int main(void)
{
	int min, max, index;
	int square, cube;

	// Request input about the table from the user.
	printf("Enter lower limit: ");
	scanf("%d", &min);
	printf("Enter upper limit: ");
		scanf("%d", &max);

	// Do calculations and print the result line by line.
	printf("%7s %7s %7s\n", "num", "square", "cube");
	for(index = min; index <= max; index++)
	{
		square = index * index;
		cube = index * square;
		printf("%7d %7d %7d\n", index, square, cube);
	}

	return EXIT_SUCCESS;
}
