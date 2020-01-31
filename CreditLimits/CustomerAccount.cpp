//****************************************************************//
//	Author:				Jason Mitchell																	//
//	Course:				CIS 554-M401 Object Oriented Programming in C++	//
//	University:		Syracuse University															//
//	Reference:		HW #2 - Exercise 4.14 p150											//
//  Date:					01/29/2020																			//
//	Filename:			CUSTOMERACCOUNT.CPP															//
//	Synopsis:			Customer Class Implementation										//
//																																//
//****************************************************************//
#include "CustomerAccount.H"
#include <iomanip>

/**
*	Helper function to neatly display data
* It finds the length of the string and
* ouputs "=" under the string.
*/
void lineDisplayAccountString(std::string display, std::string display1)
{
	auto myDisplay = strlen(display.c_str());
	std::cout << display << std::setw(2) << std::endl;
	for (auto i = 0; i < myDisplay; i++)
	{
		std::cout << "=";
	}
	std::cout << std::endl;
}

void lineDisplayAccountValue(std::string display, double display1)
{
	auto myDisplay = strlen(display.c_str());
	std::cout << display << std::setw(2) << display1 << std::endl;
	for (auto i = 0; i < myDisplay; i++)
	{
		std::cout << "=";
	}
	std::cout << std::endl;
}

// Constant strings for displaying information
const std::string sAccountName = "Account Name:";
const std::string sAccountNumber = "Account Number:";
const std::string sBeginningBalance = "Beginning Balance:";
const std::string sCurrentBalance = "Current Balance:";
const std::string sTotalCharges = "Total Charges:";
const std::string sTotalCredits = "Total Credits:";
const std::string sCreditLimit = "Credit Limit:";

void CustomerAccount::getAccountInfo()
{
	lineDisplayAccountString(sAccountName, customerName);
	lineDisplayAccountString(sAccountNumber, accountNumber);
	lineDisplayAccountValue(sCurrentBalance, _accountBalance);
	lineDisplayAccountValue(sTotalCharges, currentCharges);
	lineDisplayAccountValue(sTotalCredits, currentCredits);
	lineDisplayAccountValue(sCreditLimit, _accountCreditLimit);
}

double CustomerAccount::setAccountLimit()
{
	std::cout << "Input starting credit limit: " << std::flush;
	std::cin >> _accountCreditLimit;
	return _accountCreditLimit;
}

double CustomerAccount::getAccountBalance()
{
	return _accountBalance;
}
