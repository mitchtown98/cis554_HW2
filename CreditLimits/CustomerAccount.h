//****************************************************************//
//	Author:		Jason Mitchell									  //
//	Course:		CIS 554-M401 Object Oriented Programming in C++	  //
//	University:	Syracuse University								  //
//	Reference:	HW #2 - Exercise 4.14 p150						  //
//  Date:		01/29/2020										  //
//	Filename:	CUSTOMERACCOUNT.H								  //
//	Synopsis:   Customer Class for in store credit account	      //
//																  //
//****************************************************************//
#pragma once
#include<iostream>

class CustomerAccount {

public:

	// Class public data members
	std::string customerFirstName;
	std::string customerLastName;
	std::string accountNumber;
	double startingBalance;
	double currentBalance;
	double currentCharges;
	double currentCredits;
	double totalCharges;
	bool   creditLimitReached; 

	// Class constructor with initializer list
	CustomerAccount(std::string n1, std::string n2, std::string n3)
		: customerFirstName		{ n1 },
		  customerLastName	    { n2 },
		  accountNumber		    { n3 },
		  startingBalance       { 0 },
		  currentBalance		{ 0 },
		  currentCharges		{ 0 },
		  currentCredits		{ 0 },
		  totalCharges		    { 0 },
		  _accountBalance		{ 0 },
		  _accountCreditLimit	{ 0 },
		  creditLimitReached	{false}
	{}
	// Class setters
	void setAccountCharge();
	void setAccountCredit();
	void setStartingBalance();
	void setCurrentBalance();
	void setAccountLimit();
	
	// Class getters
	double	getStartingBalance();
	double	getCurrentBalance();
	double	getTotalCharges();
	double  getCreditLimit();
	void	getAccountInfo();

private:

	// Class private data members
	double _accountCreditLimit;
	double _accountBalance;
};
