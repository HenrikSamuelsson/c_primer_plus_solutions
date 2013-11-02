/**
 * \file C08E02.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

#define COL_MAX 10
#define NON_PRINTING_MAX 31    // The largest ASCII code that represents a non
                               // printing character.

/**
 * \brief Takes characters as input and prints the corresponding ASCII decimal
 *        value.
 * \return 0 upon successful execution.
 */
int main(void)
{
	char input;
	int col = 0;

	while ( (input = getchar()) != EOF )
	{
		switch(input)
		{
		case '\n':
			col=0;
			printf("\\n");
			printf("\n");
			break;
		case '\t':
			printf("\\t");
			break;
		default:
			if(input < NON_PRINTING_MAX)
				printf("^%c(%d)", (input + 64), input);
			else
				printf("%c(%d)",input ,input);
		}
		col++;
		if(col >= COL_MAX)
		{
			printf("\n");
			col = 0;
		}
	}

	return EXIT_SUCCESS;
}
