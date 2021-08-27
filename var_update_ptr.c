/* Update a local variable using pointer 
 * Concept:  */

void go_south_east(int *lat, int *lon); 

#include<stdio.h>

void main() {
	int latitude = 32;
	int longitude = -64;

	printf("Before update: Now at: [%i, %i]\n", latitude, longitude);
	
	go_south_east(&latitude, &longitude);
	
	printf("After update: Now at: [%i, %i]\n", latitude, longitude);
	return;
}

void go_south_east(int *lat, int *lon) {
	*lat = *lat - 1;
	*lon = *lon + 1;
}
/* ======================================================================== 
 *				DISCUSSION
 * ======================================================================== 
 * 
 */
