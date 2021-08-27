/* Concept: Structure Definition */

#include<stdio.h>
#include<string.h>

typedef struct Track track;
void set_track(); 

void main() {
	set_track();

	return;
}

void set_track() {
	track { char title[64];
       		       char artist[64];
	 	       char composer[32];
		       short duration;
		      };
//	_track track;

	strcpy( track.title, "Havana Club");
	strcpy( track.artist, "John Denver");
	strcpy( track.composer, "Ottmar Liebert");
	track.duration = 250;
	
	printf("The title of the song is %s\n", track.title);
	printf("The artist of the song is %s\n", track.artist);
	printf("The composer of the song is %s\n", track.composer);
	printf("The duration of the song is %hd minutes\n", track.duration);

	return;
}

/* ======================================================================== 
 *				DISCUSSION
 * ======================================================================== 
 * 
 */
