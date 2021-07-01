#pragma once
#include "Person.h"

class CreditCard
{
public:
	CreditCard(int aBankAccount, int aExperationDate, std::string aFirstName, std::string aLastName);

	int GetBankAccount();
	int GetExperationDate();
	std::string GetFirstName();
	std::string GetLastName();
	
private:
	int bankAccount;
	int experationDate;
	std::string firstName;
	std::string lastName;
};

