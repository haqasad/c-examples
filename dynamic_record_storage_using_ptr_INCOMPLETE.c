/* A function that dynamically creates a new record and stores its address in a pointer variable */

#include<stdio.h>
#include<stdlib.h>

typedef struct { long key; /* ... */ } Record;

_Bool newRecord( Record **ppRecord );

void main() {
	Record *pRecord = NULL;

	if ( newRecord( &pRecord ) ) {
		/* ... pRecord now points to a new Record object ... */
	}

	return;
}

_Bool newRecord( Record **ppRecord ) {
	*ppRecord = malloc( sizeof(Record) );
	if ( *ppRecord != NULL ) {
		/* ... Initialize the new record's members  ... */
		return 1;
	} else
		return 0;
}

/* ======================================================================== 
 *				DISCUSSION
 * ======================================================================== 
 * 
 */
