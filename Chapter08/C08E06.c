/**
 * \file C08E06.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

char get_first(void);

/**
 * \brief Entry point of program used to test the get_first function defined
 *        below.
 * \return 0 upon successful execution.
 */
int main(void)
{
	char ch = 0;

	ch = get_first();
	printf("%c", ch);

	return EXIT_SUCCESS;
}

/**
 * \brief Strips white-space characters from the user input and returns the
 *        first character encountered.
 * \return The first non white-space character in the input buffer.
 */
char get_first(void)
{
    int ch;

    // Loop until a non white-space character is found.
    while (isspace(ch = getchar()))
    	continue;

    // Loop until the enter causing the buffer flush is found.
    while (getchar() != '\n')
        continue;

    return ch;
}
