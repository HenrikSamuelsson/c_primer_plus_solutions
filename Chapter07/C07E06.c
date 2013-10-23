/**
 * \file C07E06.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STOP '#'
#define FIRST 'e'
#define SECOND 'i'

/**
 * \brief Counts numbers of occurrences of a repeating pattern in a text.
 * \return 0 upon successful execution.
 */
int main(void)
{
	int count = 0;
	char previousChar = 0;
	char currentChar;

	printf("Enter a text (# to end input): ");
	while((currentChar = getchar()) != STOP )
	{
		if(previousChar == FIRST && currentChar == SECOND)
			count++;
		previousChar = currentChar;
	}
	printf("The letter combination \"%c%c\" was found %d times.",
			FIRST, SECOND, count);

	return EXIT_SUCCESS;
}
