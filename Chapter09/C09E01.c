/**
 * \file C09E01.c
 * \author Henrik Samuelsson
 */
#include <stdio.h>
#include <stdlib.h>

double min(double x, double y);

/**
 * \brief Takes two decimal numbers and finds the smallest.
 * \return 0 upon successful execution.
 */
int main(void)
{
        double in1, in2, smallest;

        printf("Enter two numbers: ");
        scanf("%lf %lf", &in1, &in2);
        smallest = min(in1, in2);
        printf("%lf is the smallest of those two numbers", smallest);

        return EXIT_SUCCESS;
}

/**
 * \brief Finds the smallest number of two input numbers.
 * \param x The first of the input numbers to be compared with the second.
 * \param y The second of the input numbers to be compared with the first.
 * \return The smallest number of two inputs to the function.
 */
double min(double x, double y)
{
	return x < y ? x : y;
}
