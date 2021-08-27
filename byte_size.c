/* Pass a string argument to a function 
 * Concept:  */

void message_size(char msg[]); 

#include<stdio.h>

void main() {
	char quote[] = "Cookies make you fat";
	message_size(quote);

	return;
}

void message_size(char msg[]) {
	printf("Message occupies %li bytes\n", sizeof(msg));
}

/* ======================================================================== 
 *				DISCUSSION
 * ======================================================================== 
 * 
 */
