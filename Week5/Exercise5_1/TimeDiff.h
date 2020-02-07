/////////////////////////////////////////////////////////////////
//	CIS554 Object Oriented Programming in C++
//	Exercise 5_1 - Time Diff with Default arguments
//
/////////////////////////////////////////////////////////////////
#pragma once

class TimeDiff
{
public:
	int secondsSinceNoon(int hr = 0, int min = 0, int sec = 0);

private:
	bool validateTime(int hr = 0, int min = 0, int sec = 0);

};