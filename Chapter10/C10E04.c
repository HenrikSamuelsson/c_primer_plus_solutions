/**
 * \file C10E04.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <time.h>

#define LENGTH 8
#define MAX 100
#define MIN -100

int getArrayMax(const double array[], int length);

/**
 * \brief Entry point of a program used to test the getMaxIndex function.
 * \return 0 upon successful execution.
 */
int main(void)
{
	int i;
	time_t t;
	double testArray[LENGTH];
	int maxIndex;

	// Fill the test array with some random numbers.
	srand ( (unsigned) time(&t) );
	for(i = 0; i < LENGTH; i++)
	{
		double range = (MAX - MIN);
		double div = RAND_MAX / range;
		testArray[i] = MIN + rand() / div;
	}

	// Call getMaxIndex to find the largest value int the array.
	maxIndex = getArrayMax(testArray, LENGTH);

	// Print the index of the largest value and the content of the array to be
	// able to do a manual check that the function works.
	printf("Index of the largest value in the array was found to be: = %d\n",
			maxIndex);
	printf("array content: ");
	for(i = 0; i < LENGTH; i++)
	{
		printf("[%d]%.2lf ", i, testArray[i]);
	}

	return EXIT_SUCCESS;
}

/**
 * \brief Finds the maximum value in an array that hold some numbers.
 * \param array Pointer to the start of the array.
 * \param length The number of values stored in the array.
 * \return The largest value found in the array.
 */
int getArrayMax(const double array[], int length)
{
	int i, maxIndex;
	double max = -DBL_MAX;

	for(i = 0, maxIndex = 0; i < LENGTH; i++)
		if(max < array[i])
		{
			max = array[i];
			maxIndex = i;
		}
	return maxIndex;
}
