/////////////////////////////////////////////////////////////////
//	CIS554 Object Oriented Programming in C++
//	Exercise 5_1 - Time Diff with Default arguments
//
/////////////////////////////////////////////////////////////////
#pragma once

class TimeDiff
{
public:
	int secondsSinceNoon(int hr, int min, int sec);

private:
	bool validateTime(int hr, int min, int sec);

};