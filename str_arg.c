/* Pass a string argument to a function 
 * Concept:  */

void fortune_cookie(char msg[]); 

#include<stdio.h>

void main() {
	char quote[] = "Cookies make you fat";
	fortune_cookie(quote);

	return;
}

void fortune_cookie(char msg[]) {
	printf("Message reads: %s\n", msg);
}

/* ======================================================================== 
 *				DISCUSSION
 * ======================================================================== 
 * 
 */
