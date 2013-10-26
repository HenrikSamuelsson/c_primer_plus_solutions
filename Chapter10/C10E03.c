/**
 * \file C10E03.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

#define LENGTH 16
#define RAND_RANGE 100

int getArrayMax(int array[], int length);

/**
 * \brief Entry point of a program used to test the getArrayMax function.
 * \return 0 upon successful execution.
 */
int main(void)
{
	int i;
	time_t t;
	int testArray[LENGTH];
	int max;

	// Fill the array with some random numbers (in the 0 to 99 range).
	srand ( (unsigned) time(&t) );
	for(i = 0; i < LENGTH; i++)
	{
		testArray[i] = rand() % RAND_RANGE;
	}

	// Call getArrayMax to find the largest value int the array.
	max = getArrayMax(testArray, LENGTH);

	// Print max and the content of the array to be able to do a manual check
	// that the function works.
	printf("max = %d\n", max);
	printf("array content: ");
	for(i = 0; i < LENGTH; i++)
	{
		printf("%d ", testArray[i]);
	}

	return EXIT_SUCCESS;
}

/**
 * \brief Finds the maximum value in an array that hold some numbers.
 * \param array Pointer to the start of the array.
 * \param length The number of values stored in the array.
 * \return The largest value found in the array.
 */
int getArrayMax(int array[], int length)
{
	int i;
	int max = INT_MIN;

	for(i = 0; i < LENGTH; i++)
		if(max < array[i])
			max = array[i];
	return max;
}
