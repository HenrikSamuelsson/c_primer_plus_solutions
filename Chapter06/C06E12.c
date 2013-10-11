/**
 * \file C06E12.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Calculates powers of two.
 * \return 0 upon successful execution.
 */
int main(void)
{
	const int MAX = 8;
	int powersOfTwo[MAX];
	int p = 1;	// Two raised to 0 is equal to 1.
	int i;

	// Calculate the series of powers.
	for (i = 0; i < MAX; i++)
	{
		powersOfTwo[i] = p;
		p *= 2;
	}

	// Present the result.
	i = 0;
	do
	{
		printf("%d ", powersOfTwo[i]);
		i++;
	} while (i < MAX);

	return EXIT_SUCCESS;
}
