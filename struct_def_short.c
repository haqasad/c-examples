/* Concept: Structure Definition */

#include<stdio.h>

void print_date(short month, short day, short year); 

void print_time(short hour, short minute, short second); 

void main() {
	print_date(8, 25, 2021);
	print_time(5, 30, 45);

	return;
}

void print_date(short month, short day, short year) {
	struct Date { short month, day, year; } date;

	date.month = month; date.day = day; date.year = year;

	printf("Today's date is %hd-%hd-%hd\n\n", date.month, date.day, date.year);
	return;
}

void print_time(short hour, short minute, short second) {
	typedef struct Time { short hour, minute, second; } cTime;
	cTime time;

	time.hour = hour; time.minute = minute; time.second = second;

	printf("The time is %hd:%hd:%hd\n\n", time.hour, time.minute, time.second);
	return;
}

/* ======================================================================== 
 *				DISCUSSION
 * ======================================================================== 
 * 
 */
