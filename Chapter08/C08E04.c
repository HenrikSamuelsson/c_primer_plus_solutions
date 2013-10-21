/**
 * \file C08E04.c
 * \author Henrik Samuelsson
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * \brief Calculates the average length of the words in input text from a
 *        user.
 * \details Will only count letters A to Z or a to z. Digits and punctuation
 *          characters are ignored. Any a whitespace character (space, tab,
 *          carriage return, new line, vertical tab, or form feed) will cause
 *          the word count to increase.
 * \note The instruction for ending the input are aimed at Windows 7 users,
 *       might function differently with other operating systems.
 * \return 0 upon successful execution.
 */
int main(void)
{
        int ch;
        float average;
        int wCt = 0;    // Keeps track of the number of words in the input.
        int lCt = 0;    // Keeps track of the number of letters in the input.
        bool inWord = false;    // True when inside a word.

        printf("Enter some words, end the writing by pressing the enter key\n"
                        "followed by Ctrl + Z\n");
        while ((ch = getchar()) != EOF)
                if (isspace(ch))
                	inWord = false;
                else if (isalpha(ch))
                {
                	lCt++;
        		if(!inWord)
        		{
        			inWord = true;
        			wCt++;
        		}
                }
        average = wCt > 0 ? (float) lCt/wCt : 0;
        printf("The average number of letters in the words was: %.2f\n",
        		average);

        return EXIT_SUCCESS;
}
