/**
 * \file C08E01.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Counts number of characters in input from the user.
 * \note Did not really work when testing on a Windows 7 system. Had to press
 *       enter and then CTRL + Z to get correct result.
 * \return 0 upon successful execution.
 */
int main(void)
{
	int charCount;
	char ch;

	charCount = 0;

	while ( (ch = getchar()) != EOF )
		charCount++;
	printf("\nThere was %d characters in the input", charCount);

	return EXIT_SUCCESS;
}
