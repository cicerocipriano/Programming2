#include <iostream>
#include "savings.h"

int main (void) {
    // Main. Criando duas contas
    SavingsAccount saver1 = SavingsAccount(2000);
    SavingsAccount saver2 = SavingsAccount(3000);

    // Alterando atributo static publico
    saver1.modifyInterestRate(0.03);

    // Imprimindo o monthly balance
    std::cout << saver1.calculate_monthly_balance() << std::endl;
    std::cout << saver2.calculate_monthly_balance() << std::endl;

    // Alterando atributo static publico
    saver1.modifyInterestRate(0.04);

    // Imprimindo o monthly balance. Tem que mudar para as duas classes
    std::cout << saver1.calculate_monthly_balance() << std::endl;
    std::cout << saver2.calculate_monthly_balance() << std::endl;

    return 0;
}
