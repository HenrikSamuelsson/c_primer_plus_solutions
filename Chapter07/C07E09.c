/**
 * \file C07E09.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * \brief Lists prime numbers up to a user defined limit.
 * \return 0 upon successful execution.
 */
int main(void) {
	int limit;
	int i;
	int div;
	bool isPrime;

	printf("Enter a positive integer to generate a list with all the prime\n"
			"numbers lower than that integer: ");
	scanf("%d", &limit);
	for (i = 2; i <= limit; i++)
	{
		isPrime = true;
		for (div = 2; div * div <= i; div++)
		{
			if (i % div == 0)
			{
				isPrime = false;
				break;
			}
		}
		if (isPrime)
			printf("%d\n", i);
	}

	return EXIT_SUCCESS;
}

