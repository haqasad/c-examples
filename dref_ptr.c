/* Concept: Pointer Dereferencing, Indirection operator (*) */

#include<stdio.h>

void main() {
	double x, y, *ptr; // Two double variable and a pointer to double
	ptr = &x;	   // Let ptr point to x
	*ptr = 7.8;	   // Assign the value 7.8 to the variable x
	*ptr = 2.5;	   // Multiply x by 2.5
	y = *ptr + 0.5;    // Assign y the result of the addition x + 0.5

	printf("\nValue of x is %lf\n", x);
	printf("Value of \'ptr\' is %lf\n", *ptr);
	printf("Value of y is %lf\n", y);
	
	printf("Value of ptr is %p\n", ptr);
	printf("Value of &x is %p\n\n", &x);

	return;
}


/* ======================================================================== 
 *				DISCUSSION
 * ======================================================================== 
 * 
 * ptr is a pointer
 * *ptr represents the object  (or function) that ptr points to ( *ptr = x)
 * The & operator infront of x (or any variable) means address of x
 * (*) is called indirection operator and is a unary operator
 * *ptr means ptr is pointer variable and *ptr is pointer object
 * Using (*) is called dereferencing a pointer
 * The value of ptr is the address of x
 * Declaration of *ptr will only be meaningful, when an address is assigned
 * ptr = &x assigns the address of x to ptr 
 */
