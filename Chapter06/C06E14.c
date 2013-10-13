/**
 * \file C06E14.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Takes a line of text as input and then prints it in reverse.
 * \warning Entering texts longer than 255 characters long will lead to
 *          undefined behavior.
 * \return 0 upon successful execution.
 */
int main(void)
{
	/**
	 * \brief Number of input characters that the program can handle.
	 * \note The text from the user can only be 255 characters long. But MAX is
	 *       set to 256 to be able to handle the special case when the user just
	 *       presses enter directly with out entering any printable characters.
	 */
	const int MAX = 256;
	/**
	 * \brief Counter that keeps track of where to place the next character.
	 */
	int index;
	/**
	 * \brief Temporary storage of the last character input by the user.
	 */
	char temp;
	/**
	 * \brief Input from user ends up here.
	 */
	int text[MAX];

	printf("Write a line of text up to 255 character long.\n");
	printf("Finish the input by pressing enter.\n");
	index = 0;
	scanf("%c", &temp);
	while(temp != '\n')
	{
		// Note here that index is intentionally increased before writing to
		// the array so there will be no user input at text[0].
		index++;
		text[index] = temp;
		scanf("%c", &temp);
	}

	while(index > 0)
	{
		printf("%c", text[index]);
		index--;
	}

	return EXIT_SUCCESS;
}
