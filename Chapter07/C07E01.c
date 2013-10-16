/**
 * \file C07E01.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Counts different types of characters in the user input.
 * \note It was necessary to press enter after the # on the system
 *       where this program was tested. The reason for this is 
 *       probably because the input stream is buffered and enter 
 *       will flush the buffer.
 * \return 0 upon successful execution.
 */
int main(void)
{
	int newlines, spaces, others;
	char ch;

	newlines = 0;
	spaces = 0;
	others = 0;

	// Check what the user enters until a # is found.
	while ((ch = getchar()) != '#')
	{
		if(ch == '\n')
			newlines++;
		else if(ch == ' ')
			spaces++;
		else
			others++;
	}

	// Present data about the input.
	printf("Found %d newlines, %d spaces and %d other characters.",
			newlines, spaces, others);

	return EXIT_SUCCESS;
}
