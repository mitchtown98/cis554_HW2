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
	int control{ 0 };


	TimeDiff myTime;
	TimeDiff myTime2;
	while (control < 2 )
	{
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
		}
		std::cout << "Seconds Since Noon are " << secSinceNoon << std::endl;

		std::cout << std::endl;
		
		control++;
  }

	std::cout << "Seconds Since Noon Default: " << myTime2.secondsSinceNoon() << std::endl;

}