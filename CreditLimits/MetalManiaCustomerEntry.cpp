//****************************************************************//
//	Author:		Jason Mitchell							          //
//	Course:		CIS 554-M401 Object Oriented Programming in C++	  //
//	University:	Syracuse University								  //
//	Reference:	HW #2 - Exercise 4.14 p150						  //
//  Date:		01/29/2020										  //
//	Filename:	METALMANIACUSTOMERENTRY.CPP						  //
//	Synopsis:	Driver Program for Customer Account Class		  //
//																  //
//****************************************************************//
#include <iostream>
#include "CustomerAccount.h"
#include "MetalManiaDisplay.h"

// Local function for new line
void myLine()
{
	std::cout << std::endl; 
}

int main()
{
	// Display the title of the store
	displayTitle();

	// Control variable for multiple Entries
	char anotherEntry = 'Y';

	while (anotherEntry == 'y' || anotherEntry == 'Y')
	{
		// User input for account name
		std::string firstNameIn;
		std::cout << "Enter Customer First name: " << std::flush;

		/**
		* Check for valid data entry: While not a valid type,
		* stay in this while loop until the user enters a number.
		* negative numbers are handled in the Invoice Class implementation
		*/
		while (!(std::cin >> firstNameIn))
		{
			// Ignore new lines
			std::cin.ignore('\n');
		}

		// User input for account name
		std::string lastNameIn;
		std::cout << "Enter Customer Last name: " << std::flush;

		/**
		* Check for valid data entry: While not a valid type,
		* stay in this while loop until the user enters a number.
		* negative numbers are handled in the Invoice Class implementation
		*/
		while (!(std::cin >> lastNameIn))
		{
			// new lines
			std::cin.ignore('\n');
		}
		
		// Local function for new line
		myLine();

		// User input for account number
		std::string numberIn;
		std::cout << "Enter Customer account number: " << std::flush;
		std::cin >> numberIn;

		/** 
		* Use the 3 user inputs to construct 
		* and object from the CustomerAccount class
		*/
		CustomerAccount myCustomer(firstNameIn, lastNameIn, numberIn);

		// This method prompts user input to set starting balance
		myCustomer.setStartingBalance();

		// This method prompts user input to set charges
		myCustomer.setAccountCharge();

		// This method prompts user input to set payments
		myCustomer.setAccountCredit();

		// This method prompts user input to set credit limit
		myCustomer.setAccountLimit();

		// This method sets charges less credits and checks the credit limit
		myCustomer.setCurrentBalance();
		
		// Local function for new line
		myLine();

		/**
		* Condition for while loop
		* A "Y" will execute the program again
		* anything else will end the program
		*/
		std::cout << "Enter 'Y' for another entry, or 'N' to exit. " << std::endl;
		std::cin >> anotherEntry;
		std::cout << std::endl;
	}

}