/**
 * \file C08E03.c
 * \author Henrik Samuelsson
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * \brief Counts upper and lower case letters in text input from the user.
 * \note The instruction for ending the input are aimed at Windows 7 users,
 *       might function differently with other operating systems.
 * \return 0 upon successful execution.
 */
int main(void)
{
	int ch;
	int uCt = 0;
	int lCt = 0;

	printf("Enter some text, end the writing by pressing the enter key\n"
			"followed by Ctrl + Z\n");
	while ((ch = getchar()) != EOF)
		if (isupper(ch))
			uCt++;
		else if (islower(ch))
			lCt++;
	printf("%d upper case letters read\n", uCt);
	printf("%d lower case letters read\n", lCt);

	return EXIT_SUCCESS;
}
