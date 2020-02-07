/////////////////////////////////////////////////////////////////
//	CIS554 Object Oriented Programming in C++
//	Exercise 5_1 - Time Diff with Default arguments
//
/////////////////////////////////////////////////////////////////
#include<iostream>
#include "TimeDiff.h"


int main()
{
	int hour;
	int minutes;
	int sec;
	int secSinceNoon;
	int secSinceNoonDefault;

	TimeDiff myTime;

	std::cout << "Enter Hour: ";
	std::cin >> hour;

	std::cout << "Enter Minutes: ";
	std::cin >> minutes;

	std::cout << "Enter Seconds: ";
	std::cin >> sec;

	secSinceNoon = myTime.secondsSinceNoon(hour, minutes, sec);
	if (secSinceNoon == -1)
	{
		std::cout << "Invalid Time Entered!" << std::endl; 
		return -1;
	}
	std::cout << "Seconds Since Noon are " << secSinceNoon << std::endl;

}