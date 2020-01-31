//****************************************************************//
//	Author:				Jason Mitchell																	//
//	Course:				CIS 554-M401 Object Oriented Programming in C++	//
//	University:		Syracuse University															//
//	Reference:		HW #2 - Exercise 4.14 p150											//
//  Date:					01/29/2020																			//
//	Filename:			CUSTOMERACCOUNT.H																//
//	Synopsis:			Customer Class for in store credit account			//
//																																//
//****************************************************************//
#pragma once
#include<iostream>

class CustomerAccount {

public:

	// Class data members
	std::string customerName;
	std::string	accountNumber;
	double currentBalance;
	double currentCharges;
	double currentCredits;
	double totalCharges;


	// Class constructor with initializer list
	CustomerAccount(std::string n1, std::string n2)
		: customerName{ n1 },
			accountNumber{ n2 },
			currentBalance{ 0 },
			currentCharges{ 0 },
			currentCredits{ 0 },
			totalCharges{ 0 },
			_accountBalance{ 0 },
			_accountCreditLimit{ 0 }
	{}

	void		getAccountInfo();
	double	getCurrentBalance();
	double	getAccountBalance();
	double  getCreditLimit();

	double	setAccountCharge();
	double	setAccountCredit();
	double	setAccountLimit();



private:

	// Class data members
	double _accountCreditLimit;
	double _accountBalance;



};
