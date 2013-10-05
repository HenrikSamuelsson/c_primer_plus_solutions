/**
 * \file C06E04.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Prints a pyramid of letters.
 * \return 0 upon successful execution.
 */
int main(void)
{
	char input;	      // The letter that the user enters.
	char rowCount;    // Keeps track of how many rows there are left to print.
	char spaceCount;  // Keeps track of how many spaces to print.
	char ascCount;    // Keeps track of ascending letters to print.
	char desCount;	  // Keeps track of descending letters to print.

	printf("Enter an uppercase letter: ");
	scanf("%c", &input);
	printf("\n");
	for(rowCount = input - 'A'; rowCount >= 0; rowCount--)
	{
		// Loop that prints leading spaces.
		for(spaceCount = rowCount; spaceCount > 0; spaceCount--)
			printf(" ");

		// Loop that prints the letters that go in ascending order.
		for(ascCount = 'A';  ascCount + rowCount <= input ; ascCount++)
			printf("%c", ascCount);

		// Loop that prints the letters that go in descending order.
		for(desCount = input - 1 - rowCount; desCount >= 'A'; desCount--)
			printf("%c", desCount);

		// Have printed all the characters on this row, add a line break to
		// start the next print on a new row.
		printf("\n");
	}

	return EXIT_SUCCESS;
}


