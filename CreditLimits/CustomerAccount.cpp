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
*	Helper function to neatly display string data
* It finds the length of the string and ouputs "=" under the string.
*/
void lineDisplayAccountString(std::string display, std::string display1)
{
	auto myDisplay = strlen(display.c_str());
	std::cout << display << std::setw(4) << display1 << std::endl;
	for (auto i = 0; i < myDisplay; i++)
	{
		std::cout << "=";
	}
	std::cout << std::endl;
}

/**
*	Helper function to neatly display string data and numbers
* It finds the length of the string and ouputs "=" under the string.
*/
void lineDisplayAccountValue(std::string display, double display1)
{
	auto myDisplay = strlen(display.c_str());
	std::cout << display << std::setw(4)<< display1 << std::endl;
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
const std::string sNewBalance = "New Balance is:";
const std::string sTotalCharges = "Total Charges:";
const std::string sTotalCredits = "Total Credits:";
const std::string sCreditLimit = "Credit Limit:";

// Set Starting Balance
void CustomerAccount::setStartingBalance()
{
	std::cout << "Input Starting Balance: " << std::flush;
	std::cin >> startingBalance;
}

// Set Incoming Charges
void CustomerAccount::setAccountCharge()
{
	std::cout << "Input total Charges: " << std::flush; 
	std::cin >> currentCharges;
}

// Set Incoming Payments
void CustomerAccount::setAccountCredit()
{
	std::cout << "Input total Credits: " << std::flush; 
	std::cin >> currentCredits;
}

// Set Account Credit Limit
void CustomerAccount::setAccountLimit()
{
	std::cout << "Input starting credit limit: " << std::flush;
	std::cin >> _accountCreditLimit;
	std::cout << std::endl; 
}

/**
*	Set the Account balance based off of Charges less credits
*	This also sets a "bool" if the limit is exceeded 
* If the calculated balance exceeds the credit limit, post a message
* and display the account information.  Otherwise display the new balance
*/
void CustomerAccount::setCurrentBalance()
{
	totalCharges = (startingBalance + currentCharges);
	currentBalance = totalCharges - currentCredits;
	_accountBalance = currentBalance - startingBalance;

	if (_accountBalance > _accountCreditLimit)
	{
		creditLimitReached = true; 
		std::cout << "Credit Limit Exceeded " << customerFirstName << std::flush; 
		std::cout << " *** Your Credit Limit is only *** " << _accountCreditLimit << std::endl; 
		CustomerAccount::getAccountInfo();
	}
	else
	{
		lineDisplayAccountValue(sNewBalance, _accountBalance);
	}
	std::cout << std::endl;
}

// Get and display Total Charges
double CustomerAccount::getTotalCharges()
{
	lineDisplayAccountValue(sTotalCharges, totalCharges);
	return totalCharges; 
}

// Get and display Starting Balance
double CustomerAccount::getStartingBalance()
{
	return startingBalance; 
}

// Get and display Current Balance
double CustomerAccount::getCurrentBalance()
{
	lineDisplayAccountValue(sCurrentBalance, _accountBalance);
	return _accountBalance; 
}

// Get and display Credit LImit
double CustomerAccount::getCreditLimit()
{
	lineDisplayAccountValue(sCreditLimit, _accountCreditLimit);
	return _accountCreditLimit; 
}

/**
* Display all of the account information
* If the credit limit is reached, post message
* but do not post the balance again
*/
void CustomerAccount::getAccountInfo()
{
	std::string fullName = customerFirstName + " " + customerLastName;
	lineDisplayAccountString(sAccountName, fullName);
	lineDisplayAccountString(sAccountNumber, accountNumber);
	getTotalCharges();
	getCurrentBalance();
	if (!creditLimitReached)
	{
		getCreditLimit();
	}
	else
	{
		std::cout << customerFirstName << "....You need to play more gigs and start paying your balance. " << std::endl; 
	}
}
