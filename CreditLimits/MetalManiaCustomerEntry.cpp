//****************************************************************//
//	Author:				Jason Mitchell																	//
//	Course:				CIS 554-M401 Object Oriented Programming in C++	//
//	University:		Syracuse University															//
//	Reference:		HW #2 - Exercise 4.14 p150											//
//  Date:					01/29/2020																			//
//	Filename:			METALMANIACUSTOMERENTRY.CPP										  //
//	Synopsis:			Driver Program for Customer Account Class				//
//																																//
//****************************************************************//
#include <iostream>
#include "CustomerAccount.h"
#include "MetalManiaDisplay.h"

int main()
{
	displayTitle();


	std::string nameIn;
	std::cout << "Enter Customer account name: " << std::flush;
	std::cin >> nameIn;

	std::string numberIn;
	std::cout << "Enter Customer account number: " << std::flush;
	std::cin >> numberIn;
	CustomerAccount myCustomer(nameIn, numberIn);

	std::string creditLimitIn;

	std::string currentChargeIn;

	std::string paymentIn;

	myCustomer.getAccountInfo();


}