/**
 * \file C06E01.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

#define LETTER_COUNT 26

/**
 * \brief Creates and populates an array with letters and prints the array.
 * \return 0 upon successful execution.
 */
int main(void)
{
	char alphabet[LETTER_COUNT];
	int index;

	// Populate the array.
	for(index = 0; index < LETTER_COUNT; index++)
		alphabet[index] = 'a' + index;

	// Present the result.
	for(index = 0; index < LETTER_COUNT; index++)
		printf("%c", alphabet[index]);

	return EXIT_SUCCESS;
}
