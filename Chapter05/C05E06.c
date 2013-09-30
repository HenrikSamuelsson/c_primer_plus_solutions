/**
 * \file C05E06.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Calculates sums of the squares of the integers up to a user
 *        defined limit.
 * \return 0 upon successful execution.
 */
int main(void)
{
	int count, sum, max;

	count = 0;
	sum = 0;
	printf("Enter an integer: ");
	scanf("%d", &max);
	while(count++ < max)
		sum = sum + count * count;
	printf("The sum of the squares of all the integers up to %d is %d.\n"
			,max ,sum);

	return EXIT_SUCCESS;
}
