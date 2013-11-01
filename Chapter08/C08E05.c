/**
 * \file C08E05.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define TOO_LOW 'l'
#define TOO_HIGH 'h'
#define YES 'y'

/**
 * \brief Number guessing game with a binary search strategy.
 * \return 0 upon successful execution.
 */
int main(void) {
	int high = 100;
	int low = 1;
	int guess = (high + low) / 2;
	char response;

	printf("Think of a number from 1 to 100.\n\n"
			"Respond with a %c if the guess is right, with\n"
			"a %c if it is too high, and with an %c if it is too low.\n"
			"Is your number %d?\n",YES, TOO_HIGH, TOO_LOW, guess);
	while ((response = getchar()) != YES)
	{
		if (response == '\n')
			continue;
		if (response != TOO_LOW && response != TOO_HIGH) {
			printf("Incorrect input! Please enter %c for\n"
					"high, %c for low, or %c for correct.\n",
					TOO_HIGH, TOO_LOW, YES);
			continue;
		}
		if (response == TOO_HIGH)
			high = guess - 1;
		else if (response == TOO_LOW)
			low = guess + 1;
		guess = (high + low) / 2;
		printf("Is your number %d?\n", guess);
	}
	printf("Done!\n");

	return EXIT_SUCCESS;
}
