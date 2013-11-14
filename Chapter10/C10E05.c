/**
 * \file C10E05.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

#define LENGTH 10

double difference(double arr[], int length);

/**
 * \brief Simple test of the of the difference function defined below.
 * \return 0 upon successful execution.
 */
int main(void)
{
	double testValues[LENGTH] = {45.45, 6643.45, -656.5, 5454, 457.4, 0.330,
			93.0, 6565.55, 2544, -1234.454};

	printf("Difference = %lf", difference(testValues, LENGTH));

	return EXIT_SUCCESS;
}

/**
 * \brief Calculates the difference between the largest and smallest value in
 *        an array.
 * \param arr The array that holds the values.
 * \param length The number of values in the array.
 * \return The difference between the largest and the smallest value.
 */
double difference(double arr[], int length)
{
	double largest;
	double smallest;
	double difference;
	int index;

	largest = arr[0];
	smallest = arr[0];
	for(index = 1; index <= length; index++)
	{
		if(largest < arr[index])
			largest = arr[index];
		if(smallest > arr[index])
			smallest = arr[index];
	}
	difference = largest - smallest;

	return difference;
}
