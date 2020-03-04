//This is a program to calculate today's year, date, hour, and minute.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>

void A(int clock, int *year, int *date) {
	*year = clock / (60 * 60 * 24 * 365) + 1970;                  //1 year=60*60*24*365 seconds;In C on the lab computers, we get the number of seconds since 00:00:00 UTC on 1 January 1970.
	*date = (clock / (60 * 60 * 24)) % 365;                       //1 day=60*60*24 seconds
}

void B(int clock, int *hour, int *minute) {
	*hour = (clock / (60 * 60)) % 24 + 8;                         //1hour=60*60 seconds; hour(Beijing)=UTC+8
	*minute = (clock / 60) % 60;
}

void C(int year, int date, int hour, int minute) {
	printf("The year is %d\n", year);
	printf("The date is %d\n", date);
	printf("The hour is %d\n", hour);
	printf("The minute is %d\n", minute);
}

int main() {
	int year, date, hour, minute;
	long int clock = time(NULL);
	A(clock, &year, &date);
	B(clock, &hour, &minute);
	C(year, date, hour, minute);
	getchar();
}

