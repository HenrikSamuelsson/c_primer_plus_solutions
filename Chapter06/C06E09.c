/**
 * \file C06E09.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Mathematical summation of numbers in a range.
 * \return 0 upon successful execution.
 */
int main(void)
{
	int in1, in2, index, result;

	printf("Enter lower and upper integer limits: ");
	scanf("%d %d", &in1, &in2);
	while( (in2 - in1) > 0 )
	{
		result=0;
		for(index = in1; index <= in2; index++)
			result += index * index;
		printf("The sums of the squares from %d to %d is %d\n"
				, in1 * in1, in2 * in2, result);
		printf("Enter next set of limits: ");
		scanf("%d %d", &in1, &in2);
	}
	printf("Done");

	return EXIT_SUCCESS;
}
