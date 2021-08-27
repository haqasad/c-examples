/* Concept: Pointer to pointer, double indirection operator (**) */

#include<stdio.h>

void main() {
	char c = 'A', *cPtr = &c, **cPtrPtr = &cPtr;

	printf("\nValue of c is %c", c);	
	printf("\nValue of cPtr is %p", &c);	
	printf("\nValue of cPtrPtr is %p", &cPtr);	

	printf("\ncPtr points to the value %c", *cPtr);	
	printf("\ncPtrPtr points to the value %c\n\n", **cPtrPtr);	


	return;
}


/* ======================================================================== 
 *				DISCUSSION
 * ======================================================================== 
 * 
 */
