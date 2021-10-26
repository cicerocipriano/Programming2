#include <iostream>
#include "savings.h"

double SavingsAccount::annualInterestRate = 0.0;

SavingsAccount::SavingsAccount (double balance) {
    savingsBalance = balance;
}

double SavingsAccount::calculate_monthly_balance() {
    savingsBalance += (savingsBalance*(annualInterestRate/12));
}

void SavingsAccount::modifyInterestRate(double rate) {
    SavingsAccount::annualInterestRate = rate;
}

SavingsAccount::~SavingsAccount() {}
