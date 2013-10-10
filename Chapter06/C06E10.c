/**
 * \file C06E10.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Array exercise.
 * \return 0 upon successful execution.
 */
int main(void)
{
	const int arraySize = 8;
	int array[arraySize];
	int index;

	// Get data from the user.
	printf("Enter %d integers: ", arraySize);
	for(index = 0; index < arraySize; index++ )
		scanf("%d", &array[index]);

	// Print data in reverse.
	for(index = arraySize - 1; index >= 0; index--)
		printf("%d ", array[index]);

	return EXIT_SUCCESS;
}
