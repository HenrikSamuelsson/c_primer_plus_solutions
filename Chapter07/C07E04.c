/**
 * \file C07E04.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

#define STOP '#'

/**
 * \brief Takes characters as input and replaces some characters.
 * \note The instructions for ending the program are aimed a Windows 7 users,
 *       might function differently on other systems.
 * \return 0 upon successful execution.
 */
int main(void)
{
	char ch;
	int dotCount = 0;
	int exlCount = 0;
	printf("Input some characters.\nEnd the input with # followed by the enter "
		   "key.\n");
	while ((ch = getchar()) != STOP)
	{
	    if (ch == '.')
	    {
	    	putchar('!');
	    	dotCount++;
	    }
	    else if (ch == '!')
	    {
	    	putchar('!');
	    	putchar('!');
	    	exlCount++;
	    }
	    else
	    	putchar(ch);
	}
	printf("Replaced periods with exclamations marks on %d places.\n"
			, dotCount);
	printf("Replaced a exclamation mark with two exclamations marks on %d "
			"places.\n", exlCount);

	return EXIT_SUCCESS;
}
