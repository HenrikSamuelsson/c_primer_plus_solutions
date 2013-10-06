/**
 * \file C06E06.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * \brief Takes a word as input and prints it backwards.
 * \return 0 upon successful execution.
 */
int main(void)
{
	char word[40];    // The word that the user enters.
	int length;       // The length of the word.

	printf("Enter a word: ");
	scanf("%s", &word[0]);
	for(length = strlen(word); length > 0; length--)
			printf("%c", word[length-1]);

	return EXIT_SUCCESS;
}
