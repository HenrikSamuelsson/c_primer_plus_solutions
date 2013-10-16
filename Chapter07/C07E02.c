/**
 * \file C07E02.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define NEW_LINE_TIME 8
#define STOP '#'

/**
 * \brief Takes characters as input and shows the corresponding ASCII decimal
 *        code.
 * \details All non-printing characters are ignored by the program.
 * \note The instructions for ending the program are aimed a Windows 7 users,
 *       might function differently on other systems.
 * \return 0 upon successful execution.
 */
int main(void)
{
	char ch;
	int i = 0;
	printf("Input characters to be shown as corresponding ASCII codes.\n");
	printf("End the input with # followed by the enter key.\n");
	while ((ch = getchar()) != STOP)
	{
	    if (isprint(ch))
	    {
		printf("'%c'->%d ", ch, ch);
	        if (++i % NEW_LINE_TIME == 0)
	        	printf("\n");
	    }
	}
	return EXIT_SUCCESS;
}
