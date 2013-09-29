/**
 * \file C05E05.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Calculates the arithmetic sum up to a user defined limit.
 * \return 0 upon successful execution.
 */
int main(void)
{
	int count, sum, max;

	count = 0;
	sum = 0;
	printf("Enter a number: ");
	scanf("%d", &max);
	while(count++ < max)
		sum = sum + count;
	printf("sum = %d\n", sum);

	return EXIT_SUCCESS;
}
