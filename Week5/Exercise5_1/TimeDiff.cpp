/////////////////////////////////////////////////////////////////
//	CIS554 Object Oriented Programming in C++
//	Exercise 5_1 - Time Diff with Default arguments
//
/////////////////////////////////////////////////////////////////
#include "TimeDiff.h"

int TimeDiff::secondsSinceNoon(int hr, int min, int sec)
{
	int seconds = 0;

	if (validateTime(hr, min, sec))
	{
		return -1; 
	}

	// Hours before noon check
	if (hr < 12)
	{
		seconds += 43200;
	}
	else
	{
		hr = hr - 12;
	}
	 // Convert seconds
	seconds += hr * 60 * 60;
	seconds += min * 60;
	seconds += sec; 

	return seconds;
}

bool TimeDiff::validateTime(int hr, int min, int sec)
{
	if (hr > 23 || min >= 60 || sec >= 60 || hr < 0 || min < 0 || sec < 0)
	{
		return true; 
	}
	return false; 
}