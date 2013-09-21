/**
 * \file C04E02.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Request a name and a height in centimeters. Converts the height to
 *        meters and displays the result.
 * \return 0 upon successful execution.
 */
int main(void)
{
	char name[20];
	float heightCm;

	printf("Enter your name: ");
	scanf("%s", name);
	printf("Enter your height in centimeters: ");
	scanf("%f", &heightCm);
	printf("%s, you are %.2f meters tall.\n", name, heightCm/100);

	return EXIT_SUCCESS;
}
