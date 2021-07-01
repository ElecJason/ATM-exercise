#include <iostream>
#include "Machine.h";
#include "CreditCard.h";
using namespace std;

int main()
{
    Machine atm;
    CreditCard card(141312,911,"Jason","Dikken");
    std::cout << "ATM Machine!\n\n";

    int pincode;

    std::cout << "Please Enter The Pincode:";
    cin >> pincode;

    if (pincode == 0000) {
        std::cout << "\tCorrect Pincode\n";
        std::cout << "\tYour bankaccount number is: "<< card.GetBankAccount() << std::endl;
        std::cout << "\tYour experation date: " << card.GetExperationDate() << std::endl;
        std::cout << "\tYour first and last name are: " << card.GetFirstName() << " " << card.GetLastName() << std::endl;

        if (atm.CheckValidation(&card) == true) {
            std::cout << "\tCreditcard is valid." << std::endl;
        }
        else {
            std::cout << "\tCreditcard is invalid." << std::endl;
        }
    }
    else {
        std::cout << "Pincode is incorrect.";
    }

}
