/* Program to calculate area of a circle
 *
 * Concept: Function, Function declaration, Keyword: const
 */

#include<stdio.h> // Preprocessor Directive

double circularArea(double r); // Function declaraiton (prototype form)

int main() {
	double radius = 1.0, area = 0.0;

	printf( " Areas of Circles\n\n" );
	printf( "\tRadius      Area\n"
		"-----------------------------\n" );
	area = circularArea( radius );
	printf( "%11.1f   %10.2f\n", radius, area );

	radius = 5.0;
	area = circularArea( radius );
	printf( "%11.1f   %10.2f\n", radius, area );

	return 0;
}

/* The function circularArea() calculates the area of a circle
 * Parameter: The radius of the circle
 * Return Value: The area of the circle
 */

double circularArea( double r ) {
	const double pi = 3.1415926536; // Pi is a constant
	return pi * r * r;
}

/* ============================================================
 *                     DISCUSSION
 * ============================================================
 * WHY USE KEYWORD 'const' INSTEAD OF #DEFINE? 
 *
 * #DEFINE is used to declare constants that are global in nature.
 * const can be used in a global and local capacity. In this case, the value of pi is local, and no need of global declaration
 */
