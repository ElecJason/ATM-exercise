#include "CreditCard.h"


CreditCard::CreditCard(int aBankAccount, int aExperationDate, std::string aFirstName, std::string aLastName)
{
    bankAccount = aBankAccount;
    experationDate = aExperationDate;
    firstName = aFirstName;
    lastName = aLastName;
}

int CreditCard::GetBankAccount()
{
    return bankAccount;
}

int CreditCard::GetExperationDate()
{
    return experationDate;
}

std::string CreditCard::GetFirstName()
{
    return firstName;
}


std::string CreditCard::GetLastName()
{
    return lastName;
}


