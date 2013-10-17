/**
 * \file C07E03.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

#define STOP 0

/**
 * \brief Counts even and odd numbers and calculates averages.
 * \return 0 upon successful execution.
 */
int main(void)
{
	int input;
	int oddCount, evenCount;
	double oddTotal, oddAverage, evenTotal, evenAverage;

	oddCount = evenCount = 0;
	oddTotal = evenTotal = oddAverage = evenAverage = 0;
	printf("Enter a series of integers, end the series by entering 0.\n");
	scanf("%d", &input);
	while (input != STOP)
	{
	    if(input % 2 == 0)
	    {
	    	// Last number entered was even.
	    	evenTotal += input;
	    	evenCount++;
	    }
	    else
	    {
	    	// Last number entered was odd.
			oddTotal += input;
			oddCount++;
	    }
	    scanf("%d", &input);
	}
	evenAverage = (evenCount == 0) ? 0 : (double) evenTotal/evenCount;
	oddAverage = (oddCount == 0) ? 0 : (double) oddTotal / oddCount;
	printf("There was %d even numbers and the average of these was %.2lf.\n"
			,evenCount, evenAverage);
	printf("There was %d odd numbers and the average of these was %.2lf.\n"
			,oddCount, oddAverage);

	return EXIT_SUCCESS;
}
