/**
 * \file C03E03.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Sounds an alert prints a string.
 * \return 0 upon successful execution.
 */
int main(void) {
	printf("\a\n");	// Makes the computer make a sound.
	printf("Startled by the sudden sound, Sally shouted, \"By the great "
			"Pumpkin, what was that!\"");
	return EXIT_SUCCESS;
}
